/******************************************************************************
 * 作者：朱清豪                                                                
 * 时间：2018.3.9                                                             
 * 描述：定义所有对外可用的接口           
 *****************************************************************************/
#ifndef DATELIB_H
#define DATELIB_H
#define EXPORT_API __declspec(dllexport)
#include "Music.h"
#include "Queue.h"
#include <stdio.h>
#include <string.h>
#endif


/*
 *外部接口，设置歌曲库的绝对地址
 */
extern "C" EXPORT_API Status addr_set(char *addr);

/*
 *外部接口，将整个歌曲库初始化
 */
extern "C" EXPORT_API Status lib_init();

/*
 *外部接口，向歌曲库中添加歌曲song
 */
extern "C" EXPORT_API Status lib_add(char *song);

/*
 *外部接口，删除歌曲库中的歌曲song
 */
extern "C" EXPORT_API Status lib_delete(char *song);

/*
 *外部接口，按照关键字进行歌曲搜索，结果保存在result中
 */
extern "C" EXPORT_API Status lib_serch(char *keyword,
                                       char **result);

/*
 *外部接口，根据歌曲名进行搜索，结果保存在result中
 */
extern "C" EXPORT_API Status lib_serch_name(char *name,
                                            char **result);

/*
 *外部接口，根据歌手进行搜索，结果保存在result中
 */
extern "C" EXPORT_API Status lib_serch_singer(char *singer,
                                              char **result);

/*
 *外部接口，根据作词进行搜索，结果保存在result中
 */
extern "C" EXPORT_API Status lib_serch_songwriter(char *songwriter,
                                                  char **result);

/*
 *外部接口，根据作曲进行搜索，结果保存在result中
 */
extern "C" EXPORT_API Status lib_serch_composer(char *composer,
                                                char **result);

/*
 *外部接口，根据风格进行搜索，结果保存在result中
 */
extern "C" EXPORT_API Status lib_serch_style(char *style,
                                             char **result);

/*
 *外部接口，销毁整个歌曲库
 */
extern "C" EXPORT_API Status lib_destory();
