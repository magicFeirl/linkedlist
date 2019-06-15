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


//��ʼ������
void init_list(PLIST *head);

//�ж�ͷ����Ƿ�Ϊ��
bool is_list_null(PLIST *head);

//ɾ������
void delete_list(PLIST *head);

//��ӡ��������
void prt_list(PLIST head);

//β�巨ʵ��
void insert_tail(PLIST *head,int data);

//ͷ�巨ʵ��
void insert_head(PLIST *head,int data);

#endif // LIST_H_INCLUDED
