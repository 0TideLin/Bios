static ASN1_OCTET_STRING *PKCS7_get_octet_string(PKCS7 *p7)
{
        return p7->d.data;
}
EVP_PKEY * getpubkeyfromcert(IN CONST UINT8 *TrustedCert, IN UINTN CertSize)
{
  EVP_PKEY *pkey;

  X509 *cert = NULL;
  BIO *bio;
  DumpHex(2, 0, CertSize, (VOID *)TrustedCert);

  // bio = BIO_new_file(filename, "r");
  bio = BIO_new_mem_buf(TrustedCert, CertSize);
  if (bio==NULL)
  {
  DEBUG((EFI_D_INFO, "chz get cert fail\n"));
  return NULL;
  }

  DEBUG((EFI_D_INFO, "\n dump cert bio :\n"));
  DumpHex(2, 0, 64, (VOID *)bio);

  cert = d2i_X509_bio(bio, NULL);

  DEBUG((EFI_D_INFO, "\n get X509_get0_pubkey bio :\n"));

  pkey = X509_get0_pubkey(cert);

  return pkey;
}
static int test_EVP_SM2_verify(void * dgst,int dgstlen, EVP_PKEY *pkey,void *sig,int siglen)
{
    const char *id = "1234567812345678";
    
    int rc = 0;
    BIO *bio = NULL;
    EVP_MD_CTX *mctx = NULL;
    EVP_PKEY_CTX *pctx = NULL;

    if (!(EVP_PKEY_set_alias_type(pkey, EVP_PKEY_SM2)))
        goto done;

    if (!(mctx = EVP_MD_CTX_new()))
        goto done;

    if (!(pctx = EVP_PKEY_CTX_new(pkey, NULL)))
        goto done;

    if (!(EVP_PKEY_CTX_set1_id(pctx, (const uint8_t *)id,
                                          strlen(id)), 0))
        // goto done;

    EVP_MD_CTX_set_pkey_ctx(mctx, pctx);

    if (!(EVP_DigestVerifyInit(mctx, NULL, EVP_sm3(), NULL, pkey)))
        goto done;

    if (!(EVP_DigestVerifyUpdate(mctx, dgst, dgstlen)))
        goto done;

    if (!(EVP_DigestVerifyFinal(mctx, sig, siglen)))
        goto done;

    rc = 1;

 done:
    BIO_free(bio);
    EVP_PKEY_free(pkey);
    EVP_PKEY_CTX_free(pctx);
    EVP_MD_CTX_free(mctx);
    return rc;
}
// return status :
// 0.fail verify.
// 1.pass verify.
//
BOOLEAN
EFIAPI
AuthenticodeVerify_SM2withSM3_kl (
  IN  CONST UINT8  *AuthData,
  IN  UINTN        DataSize,
  IN  CONST UINT8  *TrustedCert,
  IN  UINTN        CertSize,
  IN  CONST UINT8  *ImageHash,
  IN  UINTN        HashSize
  )
{
    UINT8 i;
    INTN ret;
    PKCS7 *p7;
    CONST UINT8 *Temp;

    EVP_PKEY *pkey;

    DEBUG((EFI_D_INFO, "chz %a-%d\n", __FUNCTION__, __LINE__));
    Temp = AuthData;
    p7 = d2i_PKCS7(NULL, &Temp, (int)DataSize);
    if (p7 == NULL)
    {
        DEBUG((EFI_D_INFO, "chz %a-%d\n", __FUNCTION__, __LINE__));
        return 0;
    }
    DEBUG((EFI_D_INFO, "chz %a-%d\n", __FUNCTION__, __LINE__));

    ASN1_OCTET_STRING *os = NULL;
    os = PKCS7_get_octet_string(p7->d.sign->contents);
    DEBUG((EFI_D_INFO, "chz %a-%d Hash from sig\n", __FUNCTION__, __LINE__));

    DumpHex(2, 0, os->length, (void *)os->data);
    if (CompareMem(ImageHash, os->data, HashSize) != 0)
        return 0;
    STACK_OF(PKCS7_SIGNER_INFO) *si_sk = NULL;
    PKCS7_SIGNER_INFO *si;

    ASN1_OCTET_STRING *ec_dgst = NULL;
    DEBUG((EFI_D_INFO, "chz %a-%d sig from sig\n", __FUNCTION__, __LINE__));

    si_sk = p7->d.sign->signer_info;

    if (si_sk != NULL)
    {
                DEBUG((EFI_D_INFO, "chz %a-%d\n", __FUNCTION__, __LINE__));


        for (i = 0; i < sk_PKCS7_SIGNER_INFO_num(si_sk); i++)
        {
      si = sk_PKCS7_SIGNER_INFO_value(si_sk, i);
      // if (si->pkey == NULL)
      //     continue;

      ec_dgst = si->enc_digest;
      DumpHex(2, 0, ec_dgst->length, (void *)ec_dgst->data);
        }
    }

    DEBUG((EFI_D_INFO, "chz %a-%d pkey from sig\n", __FUNCTION__, __LINE__));
    pkey = getpubkeyfromcert(TrustedCert, CertSize);
    if (pkey == NULL)
        return 0;

    DEBUG((EFI_D_INFO, "chz %a-%d before verify\n", __FUNCTION__, __LINE__));
    ret = test_EVP_SM2_verify(os->data, os->length, pkey, ec_dgst->data, ec_dgst->length);
    DEBUG((EFI_D_INFO, "chz %a-%d after verify with ret:%d\n", __FUNCTION__, __LINE__, ret));

    return ret;
}
