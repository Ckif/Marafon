#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size);

int *mx_del_dup_arr(int *src, int src_size, int *dst_size) {
    if (!src)
        return NULL;
    int buff[src_size];
    int count = 0;

    for (int i = 0; i < src_size; i++)
        buff[i] = 0;
    for (int i = 0; i < src_size; i++){
        if(buff[i])
            i++;
        for (int j = i+1; j < src_size; j++)
            if (src[i] == src[j]) {
                buff[j] = 1;
                count++;
            }
    }
    int *res = (int*) malloc(sizeof(char)*(src_size - count));
    dst_size[0] =  src_size - count;
    for (int i = 0, j = 0; i < src_size; i++)
        if(!buff[i]) {
            res[j] = src[i];
            j++;
        }
    return res;
}
