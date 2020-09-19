#include <string.h>
//#include <stdio.h>

int mx_strlen(const char *s);
char* mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);

char *mx_strdup(const char*str) {
    const int size = mx_strlen(str);
    char *temp = mx_strnew(size);
    temp = mx_strcpy(temp, str);
    return temp;
}

/*
int main() {
    char str[] = "Follow the white rabbit)))";
    printf("%s", mx_strdup(str));
}
*/

