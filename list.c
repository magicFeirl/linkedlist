#include "list.h"

static PLIST add_data(int data)
{
    PLIST node = (PLIST)malloc(sizeof(LIST));
    if(node == NULL){
        fprintf(stderr,"malloc fail!");
        exit(0);
        return NULL;
    }

    node->data = data;
    node->tail = node->next = NULL;

    return node;
}

void prt_list(PLIST head)
{
    while(head)
    {
        printf("DATA:%d\n",head->data);
        head = head->next;
    }
}

void init_list(PLIST *head)
{
    *head = NULL;
}

void insert_head(PLIST *head,int data)
{
    PLIST node = add_data(data);
    PLIST temp = NULL;

    if(is_list_null(head)){
        *head = node;
    }else{
        temp = (*head)->head;
        (*head) = node;
        (*head)->next = temp;
    }

    (*head)->head = (*head);
}

bool is_list_null(PLIST *head)
{
    return (*head) == NULL ? true : false;
}

void insert_tail(PLIST *head,int data)
{
    PLIST node = add_data(data);
    PLIST temp = NULL;

    if(is_list_null(head)){
        *head = node;
    }else{
        temp = (*head)->tail;
        temp->next = node;
    }

    (*head)->tail = node;
}

void delete_list(PLIST *head)
{
    PLIST temp;

    if(is_list_null(head))
        return;

    while(*head)
    {
        temp = (*head)->next;
        free((*head));
        *head = temp;
    }
}
