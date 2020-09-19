// #include <stdio.h>
char *mx_strcpy(char *dst, const char *src) {
    int j = 0;
    while (src[j]) {
        j++;
    }

    for (int i = 0; i <j ; i++) {
        dst[i] = src[i];
    }
    return dst;
}

// int main() {
//     char src [] = "gthdfz cnhjrfdnjhfz cnhjrf";
//     char dst [] = "fghfg";
//     mx_strcpy (dst,src);
//     printf("%s", dst);
    
// }   
