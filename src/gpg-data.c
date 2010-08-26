#include "ch.h"
#include "gnuk.h"

const char const select_file_TOP_result[] __attribute__ ((aligned (1))) = {
  0x00, 0x00,			/* unused */
  0x0b, 0x10,			/* number of bytes in this directory */
  0x3f, 0x00,			/* field of selected file: MF, 3f00 */
  0x38,			/* it's DF */
  0xff,			/* unused */
  0xff,	0x44, 0x44,	/* access conditions */
  0x01,			/* status of the selected file (OK, unblocked) */
  0x05,			/* number of bytes of data follow */
    0x03,			/* Features: unused */
    0x01,			/* number of subdirectories (OpenPGP) */
    0x01,			/* number of elementary files (SerialNo) */
    0x00,			/* number of secret codes */
    0x00,			/* Unused */
  0x00, 0x00		/* PIN status: OK, PIN blocked?: No */
};

const char const do_5e[] __attribute__ ((aligned (1))) =  {
  6,
  'g', 'n', 'i', 'i', 'b', 'e'
};

const char const do_c4[] __attribute__ ((aligned (1))) = {
  7,
  1, 127, 127, 127, 3, 0, 3
};

const char const do_c7[] __attribute__ ((aligned (1))) =  {
  20,
  /* sign */
  0x5b, 0x85, 0x67, 0x3c, 0x08, 0x4f, 0x80, 0x0d,
  0x54, 0xac, 0x95, 0x1c, 0x35, 0x15, 0x97, 0xcc,
  0xe5, 0x02, 0xbf, 0xcd,
};

const char const do_ca[] __attribute__ ((aligned (1))) = {
  20,
  0x5b, 0x85, 0x67, 0x3c, 0x08, 0x4f, 0x80, 0x0d,
  0x54, 0xac, 0x95, 0x1c, 0x35, 0x15, 0x97, 0xcc,
  0xe5, 0x02, 0xbf, 0xcd,
};

const char const do_ce[] __attribute__ ((aligned (1))) = {
  4,
  0x49, 0x8a, 0x50, 0x7a, /* 0xce */
};

const char const do_5b[] __attribute__ ((aligned (1))) = {
  12,
  'N', 'I', 'I', 'B', 'E', ' ', 'Y', 'u', 't', 'a', 'k', 'a'
};

const char const do_5f2d[] __attribute__ ((aligned (1))) = {
  2,
  'j', 'a'
};

const char const do_5f35[] __attribute__ ((aligned (1))) = {
  1,
  '1'
};

/* Digital Signature Counter (3-bytes) */
const char const do_93[] __attribute__ ((aligned (1))) = {
  3,
  0, 0, 0
};

const char const do_5f50[] __attribute__ ((aligned (1))) = {
  20,
  'h', 't', 't', 'p', ':', '/', '/', 'w', 'w', 'w',
  '.', 'f', 's', 'i', 'j', '.', 'o', 'r', 'g', '/'
};

const char const get_data_rb_result[] __attribute__ ((aligned (1))) = {
  0x5a, 0x4, 0x01, 0x02, 0x03, 0x04
};

const char const get_data_sigkey_result[] __attribute__ ((aligned (1))) = {
  0x7f, 0x49, 0x81, 0x88,
  0x81, 0x81, 0x80,
  /* 128-byte data */
  /* modulus */
  0xdb, 0xca, 0x58, 0x74, 0x44, 0x8e, 0x1a, 0x2c,
  0xa0, 0x91, 0xac, 0xc4, 0xe2, 0x77, 0x2b, 0x90,
  0xcf, 0x3c, 0x7e, 0x81, 0xdc, 0x8d, 0xb0, 0xe2,
  0xf1, 0xfe, 0x56, 0x7e, 0x54, 0x57, 0xf0, 0xd8,
  0xb1, 0xb1, 0xaa, 0x9d, 0x8f, 0xb0, 0x56, 0x01,
  0xaa, 0x6b, 0xa7, 0x2e, 0xce, 0x01, 0x20, 0xd2,
  0xf8, 0xf5, 0x85, 0x3a, 0xc2, 0x73, 0xf9, 0x66,
  0x30, 0x28, 0x65, 0x5e, 0x3f, 0x91, 0xaf, 0x3f,
  0xf6, 0x1c, 0x31, 0x2f, 0xa2, 0x91, 0xbb, 0x41,
  0x91, 0x41, 0x08, 0x0a, 0xc5, 0x3e, 0x39, 0xda,
  0x2f, 0x6f, 0x58, 0x51, 0xe2, 0xd2, 0xe9, 0x42,
  0x8a, 0x7b, 0x72, 0x7b, 0x15, 0xf6, 0xf6, 0x6a,
  0x12, 0x6e, 0x0c, 0x15, 0x24, 0x13, 0x16, 0x55,
  0x3a, 0xf1, 0xa7, 0x16, 0x3e, 0xe9, 0xc8, 0x3d,
  0x2c, 0x3d, 0xae, 0x51, 0x2d, 0x7f, 0xef, 0x92,
  0x25, 0x6a, 0xbb, 0x02, 0x03, 0x70, 0x45, 0x3d,
  /* public exponent */
  0x82, 3, 0x01, 0x00, 0x01
};

const char const get_data_enckey_result[] __attribute__ ((aligned (1))) = {
  0x7f, 0x49, 0x81, 0x88,
  0x81, 0x81, 0x80,
  /* 128-byte data */
  0xB2, 0x19, 0x91, 0x42, 0x27, 0xC7, 0x97, 0xFE, 
  0x92, 0x64, 0x42, 0xCA, 0xE3, 0x66, 0x4D, 0xD0, 
  0x31, 0xE4, 0x10, 0x31, 0x0F, 0xC7, 0x07, 0x4A, 
  0xAA, 0x6D, 0x31, 0xA2, 0x88, 0x68, 0xAF, 0x45, 
  0x8E, 0x42, 0x12, 0xFF, 0xB6, 0xEF, 0x6E, 0x54, 
  0x7E, 0x51, 0x8E, 0xBC, 0xE8, 0x18, 0x79, 0xA7, 
  0xBC, 0xA8, 0x14, 0x8B, 0xE7, 0x91, 0x57, 0x38, 
  0xCE, 0x4F, 0x6E, 0x16, 0x48, 0xCB, 0xD6, 0x0B, 
  0x3A, 0x53, 0x70, 0xF3, 0xFC, 0xFA, 0xC3, 0x58, 
  0x3D, 0xE7, 0x2A, 0x5E, 0xDD, 0xE1, 0x38, 0x82, 
  0x57, 0x87, 0x3A, 0xDC, 0x34, 0xDE, 0xCD, 0x5D, 
  0x33, 0x1C, 0xAB, 0xB0, 0x1B, 0xEE, 0x82, 0x43, 
  0x7B, 0xAC, 0xF8, 0xF0, 0xB2, 0x62, 0xB2, 0x6D, 
  0x09, 0xED, 0x2E, 0xD1, 0xBA, 0xB8, 0xC6, 0x96, 
  0xFA, 0x3E, 0xB4, 0xE3, 0xFE, 0x68, 0xF9, 0x51, 
  0x9A, 0x8C, 0x8B, 0x20, 0x93, 0xD0, 0x2E, 0x0F,
  0x82, 3, 0x01, 0x00, 0x01
};