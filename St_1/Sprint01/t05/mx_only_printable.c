#include <unistd.h>

void mx_printchar(char c);

void mx_only_printable(void) {
    for (int n=126; n>31; n--) {
        mx_printchar(n);
    }
    mx_printchar('\n');
}
