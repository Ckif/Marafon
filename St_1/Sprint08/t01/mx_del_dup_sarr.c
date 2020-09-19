#include "duplicate.h"

t_intarr *mx_del_dup_sarr(t_intarr *src) {
    int buff[src->size];
    int count = 0;
    if (!src)
        return NULL;
    for (int i = 0; i < src->size; i++)
        buff[i] = 0;
    for (int i = 0; i < src->size; i++){
        if (buff[i])
            i++;
        for (int j = i + 1; j < src->size; j++)
            if (src->arr[i] == src->arr[j]) {
                buff[j] = 1;
                count++;
            }
    }
    t_intarr *res = (t_intarr *)malloc(sizeof(t_intarr));
    res->size = src->size - count;
    res->arr = (int *)malloc(sizeof(char) * (res->size));
    for (int i = 0, j = 0; i < src->size; i++)
        if (!buff[i]) {
            res->arr[j] = src->arr[i];
            j++;
        }
    return res;
}