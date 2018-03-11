/******************************************************************************
 * 作者：朱清豪                                                                
 * 时间：2018.3.9                                                             
 * 描述：            
 *****************************************************************************/
#include "../Include/DateLib.h"

Status lib_addr_init(char *addr)
{
    strcpy(lib_addr, addr);
    return OK;
}

Status lib_init()
{
    FILE *buffer = fopen(lib_addr, "w+  ");
    fprintf(buffer, "XPLAYER_LIBRARY_DATE\n");
    if (!buffer)
    {
        return OVERFLOW;
    }
    fprintf(buffer, "TOTAL_SONG_NUMBER 0\n");
    fprintf(buffer, "BEGIN:\n");
    fclose(buffer);
    if (buffer)
    {
        return INFEASIBLE;
    }
}

