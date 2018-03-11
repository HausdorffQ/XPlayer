/******************************************************************************
 * 作者：朱清豪                                                                
 * 时间：2018.3.9                                                             
 * 描述：            
 *****************************************************************************/
#ifndef DATELIB_H
#define DATELIB_H
#include "Music.h"
#include "Queue.h"
#include <stdio.h>
#include <string.h>

/*
 *声明一个全局变量，存储歌曲库的路径
 */
extern char *lib_addr;

/*
 *将歌曲库的路径初始化
 */
extern Status lib_addr_init(char *addr);

/*
 *初始化歌曲库
 */
extern Status lib_init();

/*
 *往歌曲库中增加一首歌曲music
 */
extern Status lib_add(Music *music);

/*
 *将music这首歌从歌曲库中删除
 */
extern Status lib_delete(Music *music);

/*
 *将整个歌曲库排序
 */
extern Status lib_sort();

/*
 *按照关键字key_word搜索歌曲库，将结果放入队列result中
 */
extern Status lib_serch(String *key_word,
                        Queue *result);

/*
 *按照歌曲名name搜索歌曲库，将结果放入队列result中
 */
extern Status lib_serch_name(String *name,
                             Queue *result);

/*
 *按照歌手singer搜索歌曲库，将结果放入队列result中
 */
extern Status lib_serch_singer(String *singer,
                               Queue *result);

/*
 *按照词作者songwriter搜索歌曲库，将结果放入队列result中
 */
extern Status lib_serch_songwriter(String *songwriter,
                                   Queue *result);

/*
 *按照曲作者composer搜索歌曲库，将结果放入队列result中
 */
extern Status lib_serch_composer(String *composer,
                                 Queue *result);

/*
 *按照歌曲风格搜索歌曲库，将结果放入队列result中
 */
extern Status lib_serch_style(String *style,
                              Queue *result);

#endif