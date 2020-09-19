#include <unistd.h>

void mx_printchar(char c);

void mx_hexadecimal(void) {
    for (int n=48; n<58; n++) {
        mx_printchar(n);
    }
    for (int n=65; n<71; n++) {
        mx_printchar(n);
    }
    mx_printchar('\n');

}
