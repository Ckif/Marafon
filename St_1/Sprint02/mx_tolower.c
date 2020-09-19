#include <stdio.h>

int mx_tolower(int c) {
    if (c <= 122 && c >= 97) {
        return c;
    }
    else if (c <= 90 && c >= 65) {
        return (c=c+32);
    }
    else {
        return 0;
    }
}

int main(){
    printf("%c", mx_tolower(' '));
}
