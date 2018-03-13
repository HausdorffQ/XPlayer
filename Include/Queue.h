/******************************************************************************
 * 作者：朱清豪                                                                
 * 时间：2018.3.6                                                             
 * 描述：
 *             
 *****************************************************************************/
#ifndef QUEUE_H
#define QUEUE_H
#include "Link.h"
#define Queue Link
#endif

/*
 *初始化队列queue，为其分配空间
 */
extern Status queue_init(Queue *queue);

/*
 *清空队列queue，释放空间
 */
extern Status queue_clear(Queue *queue);

/*
 *销毁队列queue，释放空间
 */
extern Status queue_destory(Queue *queue);

/*
 *将元素music入队列
 */
extern Status queue_in(Queue *queue, Music *music);

/*
 *将队列头元素出列并传递给music
 */
extern Status queue_out(Queue *queue, Music *music);

