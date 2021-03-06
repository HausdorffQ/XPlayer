/******************************************************************************
 * 作者：朱清豪                                                                
 * 时间：2018.3.6                                                             
 * 描述：定义了一个以链表结构实现的顺序表，声明了与顺序表相关的操作             
 *****************************************************************************/
#ifndef LINK_H
#define LINK_H
#include "Status.h"
#define POSITION unsigned int
#define LENGTH unsigned int
#endif

/*
 *定义链表节点
 */
typedef struct link_node
{
    unsigned int node;
    struct link_node *next;
} link_node;

/*
 *定义链表
 */
struct Link
{
    link_node *head;
    link_node *tail;
    unsigned int length;
};

/*
 *初始化顺序表link，为成员分配空间
 */
extern Status link_init(Link *link);

/*
 *清空顺序表link，释放多余的空间
 */
extern Status link_clear(Link *link);

/*
 *删除一整个顺序表，释放内存
 */
extern Status link_destory(Link *link);

/*
 *判断顺序表是否为空
 */
extern bool is_empty(Link *link);

/*
 *在link表尾增加一个元
 */
extern Status link_push(Link *link, unsigned int *node);

/*
 *把link表尾元素赋值给node并且，删除表尾元素
 */
extern Status link_pop(Link *link, unsigned int *node);

/*
 *交换顺序表link中第a个元素与第b个元素
 */
extern Status link_swap(Link *link, unsigned int a, unsigned int b);

/*
 *在顺序表link的第n个元素后插入元素
 */
extern Status link_insert(Link *link, unsigned int n, unsigned int node);

/*
 *删除顺序表中的第n个元素
 */
extern Status link_delate(Link *link, unsigned int n);

extern Status link_local(Link *link, unsigned int position,unsigned int *val);


