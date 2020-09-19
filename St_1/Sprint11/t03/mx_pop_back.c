#include "list.h"

t_list* mx_create_node(void *data){
    t_list *first = NULL;
    first = (t_list*)malloc(sizeof(t_list));
    first->data = data;
    first->next = NULL;
    return first;
}


void mx_pop_back(t_list **list){
    t_list *head = *list;

    if (!(*list))
        return;
    if(head->next == NULL){
        free((*list)->data);
        return;
    }
    while (head->next->next != NULL){
        head = head->next;
    }
    free(head->next->data);
    head->next = NULL;
}

