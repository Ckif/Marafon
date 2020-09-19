//#include <stdio.h> 

char *mx_strcpy(char *dst, const char *src) {
    unsigned int i = 0;
        while ((dst[i] = src[i]) != '\0') {
       i++;
    }
    return dst;     
}

/*
int main() {
    char dst[] = ""; 
    char src[] = "world";
    mx_strcpy(dst, src);
    printf("%s", dst);
}
*/


