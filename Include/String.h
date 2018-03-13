/******************************************************************************
 * 作者：朱清豪                                                                
 * 时间：2018.3.6                                                             
 * 描述：定义了字符串数据类型String，声明了与字符串相关的各类操作。                
 *****************************************************************************/
#ifndef STRING_H
#define STRING_H
#include"Status.h"
#endif

/*
 *定义String结构体
 */
typedef struct String
{
    unsigned int length;
    char *content;
}String,String;




/*
 *字符串初始化操作，用char指针c初始化字符串str
 */
Status str_init(String *str, char *c);

/*
 *获得字符串str的长度
 */
unsigned int str_length(int length);

/*
 *判断str是否为空
 */
bool is_empty(String *str);

/*
 *删除字符串str，释放内存
 */
Status str_destory(String *str);

/*
 *字符串拼接函数，将add拼接到base后
 */
Status str_append(String *base, String *add);

/*
 *求字符串str从base开始的长度为size的子串
 */
String str_sub(String *str, unsigned int base, int size);

