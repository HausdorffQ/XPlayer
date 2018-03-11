/******************************************************************************
 * 作者：朱清豪                                                                
 * 时间：2018.3.6                                                             
 * 描述：定义所需使用的基本数据类型，声明基本的数据转换函数               
 *****************************************************************************/
#ifndef MUSIC_H
#define MUSIC_H
#include "String.h"
#ifndef LIBDATE
#define LIBDATE char *
#endif
typedef struct Music
{
    int duration;   //歌曲时长 5
    String name;       //歌曲名 30
    String singer;     //歌手 20
    String songwriter; //作词家 20
    String composer;   //作曲家 20
    String style;      //风格 20
    String address;    //歌曲存放路径 25
} Music, Music;

/*
 *将Music数据类型转换成用于数据存储的LIBDATE数据类型
 *2018.3.9增添内容by朱清豪
 */
extern Status music_to_lib(Music *music, LIBDATE ld);

/*
 *将LIBDATE数据类型转换成Music数据类型
 *2018.3.9增添内容by朱清豪
 */
extern Status lib_to_music(LIBDATE ld, Music *music);

#endif