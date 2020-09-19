#include "file_to_str.h"

char *mx_file_to_str(const char *filename) {
    int fdes;
    int flen = 0;
    int i = 0;
    char buff[1];
    char *target_str = NULL;
    fdes = open(filename, O_RDONLY);

    if (fdes < 0) {
        return NULL;
    }
    while (read(fdes, buff, 1)) {
        flen++;
    }
    target_str = (char *)mx_strnew(flen);
    if (target_str == NULL) {
        return NULL;
    }
    close(2);
    fdes = open(filename, O_RDONLY);
    if (fdes < 0) {
        return NULL;
    }
    while (read(fdes, buff, 1)) {
        target_str[i] = buff[0];
        i++;
    }
    target_str[i] = '\0';
    return(target_str);
}

// int main(){
//     char *buff=mx_file_to_str("bruh.txt");
//     printf("%s",buff);
// }

