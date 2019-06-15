#include "list.h"

int main()
{
    int index = 0;
    PLIST head;

    init_list(&head);

    for(;index<10;index++)
        insert_tail(&head,index);

    prt_list(head);

    delete_list(&head);

    init_list(&head);

    for(index=0;index<10;index++)
        insert_head(&head,index);

    prt_list(head);

    return 0;
}
