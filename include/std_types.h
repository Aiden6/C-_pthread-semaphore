/*****************************************************************************
  Copyright (c) 2018, 比亚迪汽车
  All rights reserved.

  文件名称: std_types.h
  摘 要:    数据类型 

  其他:
  函数列表:

  当前版本: 1.0
  作 者:
  修改内容:
  完成日期: 2018年05月17日
*****************************************************************************/
#ifndef _BYDSTD_TYPES_H_
#define _BYDSTD_TYPES_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>

/* ========================================================================== */
/*                             Macros & Typedefs                              */
/* ========================================================================== */

typedef signed   char   	 	int8_t;
typedef unsigned char    		uint8_t;

typedef signed   short   		int16_t;
typedef unsigned short  	 	uint16_t;

typedef signed   int     		int32_t;
typedef unsigned int    	 	uint32_t;

#ifndef int64_t
typedef signed   long int     	int64_t;
#endif

#ifndef uint64_t
typedef unsigned long int     	uint64_t;
#endif
/*
#ifndef bool
typedef uint32_t bool;
#endif*/
/**
 *  \ I-KEY的VIN信息数据结构 
 */
typedef struct
{
	uint8_t vininfo[17];
}VinInfo;

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
 
