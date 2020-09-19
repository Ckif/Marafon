#include <stdio.h>

int mx_max(int a, int b, int c) {
    if (a > b) {
        if (a > c) {
            return a;
        }
        else {
            return c;
        }
    }   
    else if (b > c) {
        return b; 
    }
    return c;
}

int main() {
    printf("%d", mx_max(5, 4, 3));
}
