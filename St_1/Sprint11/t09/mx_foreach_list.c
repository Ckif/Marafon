#include "list.h"

void mx_foreach_list(t_list *list, void (*f)(t_list *node)) {
    f(list);
    while ((list = list->next))
        f(list);
    f(list);
}
