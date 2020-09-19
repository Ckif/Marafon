#include <unistd.h>

void mx_printchar(char c);

void mx_print_alphabet() {
    for(int n = 65; n < 91; n++){
        if (n % 2 != 0)
            mx_printchar(n);
        else 
            mx_printchar(n+32);
    }
    mx_printchar('\n');
}
