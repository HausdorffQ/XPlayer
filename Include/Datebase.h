/******************************************************************************
 * 作者：朱清豪                                                                
 * 时间：2018.3.9                                                            
 * 描述：歌曲的全部信息将无序地存储在文本文件Datebase中，此头文件声明了与歌曲库
 *      文件Datebase的相关操作与数据 。             
 *****************************************************************************/

#ifndef DATEBASE_H
#define DATEBASE_H
#include "Music.h"
#include "Status.h"
#endif
#define addr_length 50
/*
 *Datebase文件存储的绝对路径
 */
extern char datebase_addr[addr_length];

/*
 *Datebase中存储的所有歌曲的总数
 */
extern unsigned long long datebase_total;

/*
 *将全局变量datebase_addr设置为addr(注意addr是一个文件夹
 *的绝对地址，需要用字符串拼接将其拼接成完整路径)
 */
extern Status datebade_set_addr(char addr[addr_length]); 

/*
 *创建Datebase文件并初始化
 *datebase_addr以及datebase_total.
 */
extern Status datebase_init();

/*
 *将存储类型的歌曲add_song写入Datebase文件
 *并增加datebase_total.
 */
extern Status datebase_add(LIBDATE add_song);

/*
 *将Datebase文件中位置为position的歌曲删除
 */
extern Status datebase_delete(int position);

/*
 *读取Datebase文件中位置为position的歌曲
 */
extern Status datebase_local(int position,
                             LIBDATE song);


