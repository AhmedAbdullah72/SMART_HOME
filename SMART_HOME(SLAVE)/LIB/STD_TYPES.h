/***************************************************************/
/***************  Name   : Ahmed Abdullah **********************/
/***************  Date   : 27/8/2022      **********************/
/***************  SWC    :STD_TYPES_H     **********************/
/*************** Version : 1.0            **********************/
/***************************************************************/
#ifndef _STD_TYPES_H
#define _STD_TYPES_H

typedef unsigned char u8;
typedef signed char s8;

typedef unsigned int u32;
typedef signed int s32;

typedef unsigned short int u16;
typedef signed short int s16;

typedef float f32;
typedef long f64;
typedef long double f96;

typedef enum{
	BIT_RESET =0,
	BIT_SET=1
}BitStatus;

#define NULL ((void*)0)

#define STD_TYPES_OK 	1;
#define STD_TYPES_NOK 	0;


typedef void(*func_ptr)(void);
#endif
