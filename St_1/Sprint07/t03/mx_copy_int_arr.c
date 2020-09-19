//#include <stdio.h>
#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size) {
    if (src == NULL || size < 0) {
        return NULL;
    }
    int *dst = (int *)malloc(size);
    for (int i = 0; i < size; i++) {
        dst[i] = src[i];
    }
    return dst;
}

/*
int main() {
    int arr1[] = {1, 2, 3};
    //int arr2 = NULL;
    for (int i = 0; i < 3; i++) {
        printf("%d", arr1[i]);
    }
    mx_copy_int_arr(arr1, 3);
    //printf("%d", mx_copy_int_arr(arr2, 3));
}
*/

