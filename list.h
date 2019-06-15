#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <Stdbool.h>

struct list{
    int data;

    struct list *next;
    struct list *head;
    struct list *tail;
};

typedef struct list LIST,*PLIST;


//初始化链表
void init_list(PLIST *head);

//判断头结点是否为空
bool is_list_null(PLIST *head);

//删除链表
void delete_list(PLIST *head);

//打印链表数据
void prt_list(PLIST head);

//尾插法实现
void insert_tail(PLIST *head,int data);

//头插法实现
void insert_head(PLIST *head,int data);

#endif // LIST_H_INCLUDED
