/******************************************************************************
 * 作者：朱清豪                                                                
 * 时间：2018.3.7                                                            
 * 描述：此文件声明了与播放列表（paly_list)相关的所有操作，并提供外部接口，将其封装
 * 为动态链接库DLL文件（Dynamic Link Library）。
 *****************************************************************************/
#ifndef PLAYLIST_H
#define PLAYLIST_H
#include "Queue.h"
#include "Stack.h"
#define ADDRESS char *

/*
 *定义一个结构体数据类型PALY_LIST
 */
typedef struct
{
    Queue *play_list;     //播放列表
    Stack *delete_list;   //从播放列表中删除的歌曲
    POSITION *delete_pos; //被删除歌曲在播放列表中所对应的位置
    LENGTH length;        //播放列表中歌曲的总数目
} PLAY_LIST;

/*
 *把music添加到播放列表pl中
 */
extern Status play_list_add(PLAY_LIST *pl,
                            Music *musinc);

/*
 *删除播放列表中的第pos首歌曲
 */
extern Status play_list_delete(PLAY_LIST *pl,
                               POSITION *pos);

/*
 *撤销删除操作
 */
extern Status play_list_revoke(PLAY_LIST *pl);

/*
 *把播放列表pl中位置在init_pos的歌曲移动到位置aim_pos
 */
extern Status play_list_remove(PLAY_LIST *pl,
                               POSITION *init_pos,
                               POSITION *aim_pos);
/*
 *返回播放列表中的歌曲数目
 */
extern Status play_list_length(PLAY_LIST *pl,
                               LENGTH *len);

/*
 *更新播放列表缓存
 */
extern Status play_list_update_cache(PLAY_LIST *pl,
                                     ADDRESS addr);

/*
 *读取播放列表缓存
 */
extern Status play_list_load_cache(PLAY_LIST *PL,
                                   ADDRESS addr);

#endif