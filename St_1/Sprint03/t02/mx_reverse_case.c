#include <stdbool.h>
#include <stdio.h>

bool mx_islower(int c) {
    if (c <= 122 && c >= 97) {
        return true;
    }
    else {
        return false;
    }
}
bool mx_isupper(int c) {
    if (c <= 90 && c >= 65) {
        return true;
    }
    else {
        return false;
    }
}
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
int mx_toupper(int c) {
    if (c <= 122 && c >= 97) {
        return (c=c-32);
    }
    else if (c <= 90 && c >= 65) {
        return c;
    }
    else {
        return 0;
    }
}

void mx_reverse_case(char *s) {
    while (*s) {
    // printf("%s\n", s);
    if (mx_islower(*s)) {
        *s = mx_toupper(*s);
        // printf("%s\n", s);
    }
    else if (mx_isupper(*s)) {   
        *s = mx_tolower(*s);
        // printf("%s\n", s);
    }
        s++;
    }
}

int main () {
    char name[] = "jfjJJjj";
    mx_reverse_case(name);
    printf("%s", name);
}
