/******************************************************************************
 * 作者：朱清豪                                                                
 * 时间：2018.3.9                                                             
 * 描述：            
 *****************************************************************************/
#ifndef ORDER_H
#define ORDER_H
#include "Datebase.h"
#include "Link.h"
#endif

extern Link name_link;
extern Link singer_link;
extern Link composer_link;
extern Link songwriter_link;
extern Link style_link;

extern Status load();
extern Status close();
extern int cmp(int a, int b, int kind);
