#include "only_smiths.h"

char *mx_strnew(const int size){
    char *buff = NULL;

    if (size > 0){
        buff = (char *)malloc(size + 1);
        buff[size] = '\0';
    }
    return buff;
}

