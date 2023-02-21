/*
 * Copyright 1995-2018 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <openssl/err.h>
#include <openssl/objects.h>
#include <openssl/evp.h>
#include <openssl/x509.h>
#include <openssl/pkcs7.h>
#include <openssl/pem.h>
#include <openssl/asn1.h>

#define PREFIX_CTRL_SET_PREFIX (1 << 15)

#define B_FORMAT_TEXT 0x8000
#define FORMAT_UNDEF 0
#define FORMAT_TEXT (1 | B_FORMAT_TEXT)   /* Generic text */
#define FORMAT_BINARY 2                   /* Generic binary */
#define FORMAT_BASE64 (3 | B_FORMAT_TEXT) /* Base64 */
#define FORMAT_ASN1 4                     /* ASN.1/DER */
#define FORMAT_PEM (5 | B_FORMAT_TEXT)
#define FORMAT_PKCS12 6
#define FORMAT_SMIME (7 | B_FORMAT_TEXT)
#define FORMAT_ENGINE 8                   /* Not really a file format */
#define FORMAT_PEMRSA (9 | B_FORMAT_TEXT) /* PEM RSAPubicKey format */
#define FORMAT_ASN1RSA 10                 /* DER RSAPubicKey format */
#define FORMAT_MSBLOB 11                  /* MS Key blob format */
#define FORMAT_PVK 12                     /* MS PVK file format */
#define FORMAT_HTTP 13                    /* Download using HTTP */
#define FORMAT_NSS 14                     /* NSS keylog format */

/* Flags to pass into opt_format; see FORMAT_xxx, below. */
#define OPT_FMT_PEMDER (1L << 1)
#define OPT_FMT_PKCS12 (1L << 2)
#define OPT_FMT_SMIME (1L << 3)
#define OPT_FMT_ENGINE (1L << 4)
#define OPT_FMT_MSBLOB (1L << 5)
/* (1L <<  6) was OPT_FMT_NETSCAPE, but wasn't used */
#define OPT_FMT_NSS (1L << 7)
#define OPT_FMT_TEXT (1L << 8)
#define OPT_FMT_HTTP (1L << 9)
#define OPT_FMT_PVK (1L << 10)
#define OPT_FMT_PDE (OPT_FMT_PEMDER | OPT_FMT_ENGINE)
#define OPT_FMT_PDS (OPT_FMT_PEMDER | OPT_FMT_SMIME)
#define OPT_FMT_ANY (                                 \
    OPT_FMT_PEMDER | OPT_FMT_PKCS12 | OPT_FMT_SMIME | \
    OPT_FMT_ENGINE | OPT_FMT_MSBLOB | OPT_FMT_NSS |   \
    OPT_FMT_TEXT | OPT_FMT_HTTP | OPT_FMT_PVK)

typedef enum OPTION_choice
{
    OPT_ERR = -1,
    OPT_EOF = 0,
    OPT_HELP,
    OPT_INFORM,
    OPT_OUTFORM,
    OPT_IN,
    OPT_OUT,
    OPT_NOOUT,
    OPT_TEXT,
    OPT_PRINT,
    OPT_PRINT_CERTS,
    OPT_ENGINE
} OPTION_CHOICE;

static void
DumpHex(
    unsigned int Indent,
    unsigned int Offset,
    unsigned int DataSize,
    void *UserData)
{
    u_int8_t *Data;
    char Val[50];
    char Str[20];
    u_int8_t TempByte;
    unsigned int Size;
    unsigned int Index;
    static const char mHex[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    printf("DumpHex start :\n");
    Data = UserData;
    while (DataSize != 0)
    {
        Size = 16;
        if (Size > DataSize)
        {
            Size = DataSize;
        }

        for (Index = 0; Index < Size; Index += 1)
        {
            TempByte = Data[Index];
            Val[Index * 3 + 0] = mHex[TempByte >> 4];
            Val[Index * 3 + 1] = mHex[TempByte & 0xF];
            Val[Index * 3 + 2] = (char)((Index == 7) ? '-' : ' ');
            Str[Index] = (char)((TempByte < ' ' || TempByte > 'z') ? '.' : TempByte);
        }

        Val[Index * 3] = 0;
        Str[Index] = 0;
        printf("%*s%08X: %-48s *%s*\r\n", Indent, "", Offset, Val, Str);

        Data += Size;
        Offset += Size;
        DataSize -= Size;
    }
    printf("DumpHex end :\n");
}
void print_name(BIO *out, const char *title, X509_NAME *nm,
                unsigned long lflags)
{
    char *buf;
    char mline = 0;
    int indent = 0;

    if (title)
        BIO_puts(out, title);
    if ((lflags & XN_FLAG_SEP_MASK) == XN_FLAG_SEP_MULTILINE)
    {
        mline = 1;
        indent = 4;
    }
    if (lflags == XN_FLAG_COMPAT)
    {
        buf = X509_NAME_oneline(nm, 0, 0);
        BIO_puts(out, buf);
        BIO_puts(out, "\n");
        OPENSSL_free(buf);
    }
    else
    {
        if (mline)
            BIO_puts(out, "\n");
        X509_NAME_print_ex(out, nm, indent, lflags);
        BIO_puts(out, "\n");
    }
}

static unsigned long nmflag = 0;
static char nmflag_set = 0;
unsigned long get_nameopt(void)
{
    return (nmflag_set) ? nmflag : XN_FLAG_ONELINE;
}
int dump_cert_text(BIO *out, X509 *x)
{
    print_name(out, "subject=", X509_get_subject_name(x), get_nameopt());
    BIO_puts(out, "\n");
    print_name(out, "issuer=", X509_get_issuer_name(x), get_nameopt());
    BIO_puts(out, "\n");

    return 0;
}
static ASN1_OCTET_STRING *PKCS7_get_octet_string(PKCS7 *p7)
{
        return p7->d.data;
}

int main(int argc, char **argv)
{
    ENGINE *e = NULL;
    PKCS7 *p7 = NULL;
    BIO *in = NULL, *out = NULL;
    int informat = FORMAT_ASN1, outformat = FORMAT_ASN1;
    char *infile = NULL, *outfile = NULL, *prog;
    int i, print_certs = 1, text = 1, noout = 0, p7_print = 1, ret = 1;
    OPTION_CHOICE o;

    X509_STORE *final_certs;
    final_certs = X509_STORE_new();
    if (final_certs == NULL)
        return 0;
    
    in = BIO_new_file("grb.sig", "r");
    if (in == NULL)
    {
        return 0;
    }
    if (in == NULL)
        goto end;

    if (informat == FORMAT_ASN1)
        p7 = d2i_PKCS7_bio(in, NULL);
    else
        p7 = PEM_read_bio_PKCS7(in, NULL, NULL, NULL);
    if (p7 == NULL)
    {

        goto end;
    }

    out = BIO_new_file("grb.tmp", "w");
    if (out == NULL)
        goto end;

    if (p7_print)
        PKCS7_print_ctx(out, p7, 0, NULL);

    // DumpHex(2, 0, 512, (void *)p7);

    // printf("p7->d.sign->version:0x%lX\n", p7->d.sign->version);
    // printf("p7->d.sign->md_algs:0x%lX\n", p7->d.sign->md_algs);
    // printf("p7->d.sign->cert:0x%lX\n", p7->d.sign->cert);
    // printf("p7->d.sign->crl:0x%lX\n", p7->d.sign->crl);
    printf("p7->d.sign->signer_info:0x%lX\n", (long unsigned int)p7->d.sign->signer_info);

    // printf("p7->d.sign->contents:0x%lX\n", p7->d.sign->contents);

    // printf("p7->d.other->type:0x%lX\n", p7->d.other->type);
    // printf("p7->d.other->value:0x%lX\n", p7->d.other->value);
    ASN1_OCTET_STRING *os = NULL;
    os = PKCS7_get_octet_string(p7->d.sign->contents);
    printf("os->length:0x%X\n", os->length);
    DumpHex(2, 0, os->length, (void *)os->data);

    STACK_OF(PKCS7_SIGNER_INFO) *si_sk = NULL;
    PKCS7_SIGNER_INFO *si;

    ASN1_OCTET_STRING *ec_dgst = NULL;
    printf("chz %s-%d\n", __FUNCTION__, __LINE__);
    si_sk=p7->d.sign->signer_info;

    if (si_sk != NULL)
    {
        printf("chz %s-%d\n", __FUNCTION__, __LINE__);

        for (i = 0; i < sk_PKCS7_SIGNER_INFO_num(si_sk); i++)
        {
            si = sk_PKCS7_SIGNER_INFO_value(si_sk, i);
            // if (si->pkey == NULL)
            //     continue;
            ec_dgst = si->enc_digest;
            DumpHex(2, 0, ec_dgst->length, (void *)ec_dgst->data);
        }
    }

#if 1
    if (print_certs)
    {
        STACK_OF(X509) *certs = NULL;
        STACK_OF(X509_CRL) *crls = NULL;
        printf("chz %s-%d\n", __FUNCTION__, __LINE__);

        i = OBJ_obj2nid(p7->type);
        switch (i)
        {
        case 1198:
        case NID_pkcs7_signed:
            printf("chz %s-%d\n", __FUNCTION__, __LINE__);

            if (p7->d.sign != NULL)
            {
                certs = p7->d.sign->cert;
                crls = p7->d.sign->crl;
            }
            break;
        case NID_pkcs7_signedAndEnveloped:
            if (p7->d.signed_and_enveloped != NULL)
            {
                certs = p7->d.signed_and_enveloped->cert;
                crls = p7->d.signed_and_enveloped->crl;
            }
            break;
        default:
            break;
        }

        if (certs != NULL)
        {
            X509 *x;
            printf("chz %s-%d\n", __FUNCTION__, __LINE__);

            for (i = 0; i < sk_X509_num(certs); i++)
            {
                x = sk_X509_value(certs, i);
                if (text)
                    X509_print(out, x);
                else
                    dump_cert_text(out, x);

                if (!noout)
                    PEM_write_bio_X509(out, x);
                BIO_puts(out, "\n");

                X509 *tmp_cert;
                EVP_PKEY *pkey;
                EC_KEY *eckey;
                BIO *keybio = NULL;
                unsigned char *tmp_key = (unsigned char *)malloc(128);
                memset(tmp_key, 0, 128);
                unsigned char *tmp_key1 = tmp_key;

                typedef struct pubkey_st
                {
                    int flag;
                    unsigned char key[128];
                    size_t key_len;
                } PUBKEY;

                PUBKEY pub_key;

                for (i = 0; i < sk_X509_num(certs); i++)
                {
                    printf("cert_num = %d\n", sk_X509_num(certs));
                    tmp_cert = sk_X509_value(certs, i);
                    pub_key.key_len = i2d_X509_PUBKEY(X509_get_X509_PUBKEY(tmp_cert), &tmp_key1);

                    strcpy(pub_key.key, tmp_key + 26);
                    pub_key.key_len = pub_key.key_len - 26;
                    DumpHex(2, 0, pub_key.key_len, (void *)pub_key.key);
                }
            }
        }
        if (crls != NULL)
        {
            X509_CRL *crl;
            printf("chz %s-%d\n", __FUNCTION__, __LINE__);

            for (i = 0; i < sk_X509_CRL_num(crls); i++)
            {
                crl = sk_X509_CRL_value(crls, i);

                X509_CRL_print_ex(out, crl, get_nameopt());

                if (!noout)
                    PEM_write_bio_X509_CRL(out, crl);
                BIO_puts(out, "\n");
            }
        }

        ret = 0;
        goto end;
    }


#endif
    ret = 0;
end:
    PKCS7_free(p7);
    BIO_free(in);
    BIO_free_all(out);
    return ret;
}
