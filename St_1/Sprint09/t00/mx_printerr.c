#include "printerr.h"
#include<unistd.h>

void mx_printerr(const char *s) {
    write (2, s, mx_strlen(s));
}

// int main(){
//     const char s[] = "Error";
//     mx_printerr(s);
// }
