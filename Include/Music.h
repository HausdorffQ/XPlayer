/******************************************************************************
 * 作者：朱清豪                                                                
 * 时间：2018.3.6                                                             
 * 描述：定义所需使用的基本数据类型，声明基本的数据转换函数               
 *****************************************************************************/
#ifndef MUSIC_H
#define MUSIC_H
#include"String.h"
#ifndef LIBDATE
#define LIBDATE char *
#endif
typedef struct Music
{
    double duration;            //歌曲时长
    struct String name;         //歌曲名
    struct String singer;       //歌手
    struct String songwriter;   //作词家
    struct String composer;     //作曲家
    struct String style;        //风格
    struct String address;      //歌曲存放路径
}Music,Music;

/*
 *将Music数据类型转换成用于数据存储的LIBDATE数据类型
 *2018.3.9增添内容by朱清豪
 */
Status music_to_lib(Music *music, LIBDATE ld);

/*
 *将LIBDATE数据类型转换成Music数据类型
 *2018.3.9增添内容by朱清豪
 */
Status lib_to_music(LIBDATE ld, Music *music);



#endif