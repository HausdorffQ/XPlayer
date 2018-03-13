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
#endif
enum operate
{
    name = 1,
    singer,
    songwriter,
    composer,
    style,
    duration
};

/*
 *音乐数据读取函数，将歌曲库格式的数据
 *按照操作类型op_type读出并放入result中。
 */
extern Status music_get(LIBDATE *song,
                        operate op_type,
                        char *result);
