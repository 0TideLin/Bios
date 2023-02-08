#ifndef _DUMP_ASN1_H_
#define _DUMP_ASN1_H_

#include <Uefi.h>
#include <Library/UefiApplicationEntryPoint.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiLib.h>
#include <Library/ShellLib.h>
#include <Library/UefiShellLib/UefiShellLib.h>

#include <Library/BaseCryptLib.h>
#include <string.h>
#include <stdio.h>

#ifndef BYTE
  typedef unsigned char		BYTE;
#endif /* BYTE */

#define EOF (-1)

/* Universal tags */

#define TAG_MASK		0x1F	/* Bits 5 - 1 */
#define EOC				0x00	/*  0: End-of-contents octets */
#define BOOLEAN			0x01	/*  1: Boolean */
#define INTEGER			0x02	/*  2: Integer */
#define BITSTRING		0x03	/*  2: Bit string */
#define OCTETSTRING		0x04	/*  4: Byte string */
#define NULLTAG			0x05	/*  5: NULL */
#define OID				0x06	/*  6: Object Identifier */
#define OBJDESCRIPTOR	0x07	/*  7: Object Descriptor */
#define EXTERNAL		0x08	/*  8: External */
#define REAL			0x09	/*  9: Real */
#define ENUMERATED		0x0A	/* 10: Enumerated */
#define EMBEDDED_PDV	0x0B	/* 11: Embedded Presentation Data Value */
#define UTF8STRING		0x0C	/* 12: UTF8 string */
#define SEQUENCE		0x10	/* 16: Sequence/sequence of */
#define SET				0x11	/* 17: Set/set of */
#define NUMERICSTRING	0x12	/* 18: Numeric string */
#define PRINTABLESTRING	0x13	/* 19: Printable string (ASCII subset) */
#define T61STRING		0x14	/* 20: T61/Teletex string */
#define VIDEOTEXSTRING	0x15	/* 21: Videotex string */
#define IA5STRING		0x16	/* 22: IA5/ASCII string */
#define UTCTIME			0x17	/* 23: UTC time */
#define GENERALIZEDTIME	0x18	/* 24: Generalized time */
#define GRAPHICSTRING	0x19	/* 25: Graphic string */
#define VISIBLESTRING	0x1A	/* 26: Visible string (ASCII subset) */
#define GENERALSTRING	0x1B	/* 27: General string */
#define UNIVERSALSTRING	0x1C	/* 28: Universal string */
#define BMPSTRING		0x1E	/* 30: Basic Multilingual Plane/Unicode string */

/* Length encoding */

#define LEN_XTND  0x80		/* Indefinite or long form */
#define LEN_MASK  0x7F		/* Bits 7 - 1 */

/* The maximum complexity level for an object, meaning nesting level of data,
   before we declare an error and exit.  Given that this is ASN.1, which
   encourages the design of ridiculously-complex objects, we set a fairly
   high bound before we bail out (cryptlib uses 50 which handles all known
   certificate and CMS object types, so 80 provides a fairly safe margin) */

#define MAX_NESTING_LEVEL	80


#endif