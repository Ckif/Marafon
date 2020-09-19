#include "get_address.h"

char *mx_get_address(void *p) {
    char *buff = mx_nbr_to_hex((unsigned long)&p);
    char * res = mx_strnew(mx_strlen(buff) + 2);
    
    res[0] = '0';
    res[1] = 'x';
    res += 2;
    res = mx_strcpy(res, buff);
    res -= 2;
    
    free(buff);
    buff = NULL;
    
    return res;
}
