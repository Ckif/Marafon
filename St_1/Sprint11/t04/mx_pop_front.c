#include "list.h"
t_list* mx_create_node(void *data){
    t_list *first = NULL;

    first = (t_list*)malloc(sizeof(t_list));
    first->data = data;
    first->next = NULL;
    return first;
}


void mx_pop_front(t_list **list){
    t_list *head = *list;

    if (!(*list))
        return;
    if(head->data == NULL){
        free((*list)->data);
        return;
    }
    if(head->next != NULL){
        (*list) = head->next;
        free(head->data);
    }
    head->data = NULL;
}

void printList(t_list *n){
    while (n != NULL) {
        printf(" %s ", n->data);
        n = n->next;
    }
}

