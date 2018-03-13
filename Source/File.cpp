#include "../Include/File.h"
#include "../Include/Link.h"
#include <stdio.h>
Status file_read(FILE *fp, Link *lk)
{
    if (!fp)
        return OVERFLOW;
    while (!feof(fp))
    {
        unsigned int val;
        fscanf(fp, "%d", &val);
        link_push(lk, &val);
    }
    fclose(fp);
}

Status file_write(FILE *fp, Link *lk)
{
    for (unsigned int i = 1; i <= lk->length; i++)
    {
        unsigned int val;
        link_local(lk, i, &val);
        fprintf(fp, "%d ", val);
    }
    fclose(fp);
    link_destory(lk);
}