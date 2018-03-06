/******************************************************************************
 * 作者：朱清豪                                                                
 * 时间：2018.3.6                                                             
 * 描述：定义所需使用的基本数据类型               
 *****************************************************************************/
#ifndef MUSIC_H
#define MUSIC_H
#include"String.h"

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


#endif