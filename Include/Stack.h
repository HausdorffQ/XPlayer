/******************************************************************************
 * 作者：朱清豪                                                                
 * 时间：2018.3.6                                                             
 * 描述：定义了一个栈，声明了与栈相关的操作。考虑到顺序表可以十分方便地直接修改成一个
 *      栈，为避免重复，因此此定义仅在顺序表上稍做改动。         
 *****************************************************************************/
#ifndef STACK_H
#define STACK_H
#include "Link.h"
#define Stack Link
#endif

/*
 *初始化栈stack，为其分配空间
 */
extern Status stack_init(Stack *stack);

/*
 *清空栈stack，释放空间
 */
extern Status stack_clear(Stack *stack);

/*
 *完全销毁栈stack，释放空间
 */
extern Status stack_destory(Stack *stack);

/*
 *压栈操作，将music压入栈顶
 */
extern Status stack_push(Stack *stack, Music *music);

/*
 *将栈顶元素弹出，并传递给music
 */
extern Status stack_pop(Stack *stack, Music *music);

