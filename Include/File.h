/******************************************************************************
 * 作者：朱清豪                                                                
 * 时间：2018.3.9                                                             
 * 描述：            
 *****************************************************************************/
#ifndef FILE_H
#define FILE_H
#endif
#include<stdio.h>
#include "Link.h"

extern Status file_read(FILE *fp, Link *lk);
extern Status file_write(FILE *fp, Link *lk);