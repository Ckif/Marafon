#include "list.h"


t_list* mx_create_node(void *data){
    t_list *first = NULL;

    first = (t_list*)malloc(sizeof(t_list));
    first->data = data;
    first->next = NULL;
    return first;
}


int mx_list_size(t_list *list){
    t_list *head = list;
    int count = 1;
    if (!head)
        return 0;
    while (head->next != NULL){
        // printf("%d",1);
        count++;
        head = head->next;
    }
    return count;
}

