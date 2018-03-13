/******************************************************************************
 * 作者：朱清豪                                                                
 * 时间：2018.3.9                                                             
 * 描述：            
 *****************************************************************************/
#include "../Include/Order.h"
#include "../Include/Link.h"
#include<string.h>
#include<stdio.h>

char datebase_addr[50];
char name_addr[50];
char singer_addr[50];
char composer_addr[50];
char songwriter_addr[50];
char style_addr[50];
extern Link name;
extern Link singer;
extern Link composer;
extern Link songwriter;
extern Link style;
Status load(char *addr){
    link_init(&name);
    link_init(&singer);
    link_init(&composer);
    link_init(&songwriter);
    link_init(&style);

    strcpy(datebase_addr, addr);
    strcpy(name_addr, addr);
    strcpy(singer_addr, addr);
    strcpy(composer_addr, addr);
    strcpy(songwriter_addr, addr);
    strcpy(style_addr, addr);

    strcat(datebase_addr, "/Datebase");
    strcat(name_addr, "/Name");
    strcat(singer_addr, "/Singer");
    strcat(composer_addr, "/Composer");
    strcat(songwriter_addr, "/Songwriter");
    strcat(style_addr, "/Style");

    FILE *name_fp=fopen(name_addr, "r");
    if(!name_fp)
        return OVERFLOW;
    while(!feof(name_fp)){
        char names[30];
        fscanf(name_fp, "%s", names);
        link_push(&name, names);
    }
    fclose(name_fp);
}