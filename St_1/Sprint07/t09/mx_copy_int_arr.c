#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size) {
    if(!src || size < 0)
        return NULL;

    int *res = (int*) malloc(sizeof(char)*(size));

    for (int i = 0; i < size; i++)
        res[i] = src[i];
    return res;
}
