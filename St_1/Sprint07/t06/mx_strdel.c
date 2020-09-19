//#include <stdio.h>
#include <stdlib.h>

void mx_strdel(char **str) {
    if (str && *str != NULL) {
        free(*str);
        *str = NULL;
    }
}

/*
int main() {
    char *str = malloc(6);
    mx_strdel(&str);
    printf("%s\n", str);
}
*/

