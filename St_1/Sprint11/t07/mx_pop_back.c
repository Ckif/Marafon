#include "list.h"

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
