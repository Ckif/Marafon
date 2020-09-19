#include "file_to_str.h"

char *mx_strnew(const int size) {
    char *arr = NULL;
    
    if (size > 0) {
        arr = (char *) malloc(size+1);
        arr[size] = '\0';
    }  
return arr;
    free(arr);
}

// int main() {
//     printf("%s", mx_strnew(16));
// }
