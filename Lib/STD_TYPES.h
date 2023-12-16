/******************************************************************/
/*   Author  : Mohamed Mabrouk                                    */
/*   Version : V01                                                */
/*   Date    : 11 Nov 2023                                        */
/******************************************************************/

#ifndef _STD_TYPES_H_
#define _STD_TYPES_H_

/*          char           */
typedef unsigned char u8;
typedef signed   char s8;
typedef char          c8;

#define MAX_U8 ((u8)255)
#define MIN_U8 ((u8)0)

#define MAX_S8 ((u8)127)
#define MIN_S8 ((u8)-128)

/*          int           */
typedef unsigned int u16;
typedef signed   int s16;

#define MAX_U16 ((u16)65535)

/*          long           */
typedef unsigned long u32;
typedef signed   long s32;

#endif