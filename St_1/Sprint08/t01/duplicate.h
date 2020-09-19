#ifndef duplicate_h
#define duplicate_h

#include <stdlib.h>
#include <stdio.h>

typedef struct s_intarr {
    int *arr;
    int size;
}              t_intarr;

int *mx_copy_int_arr(const int *src, int size);
void mx_del_strarr(char ***arr);

#endif
