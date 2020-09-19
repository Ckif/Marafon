//#include <stdio.h>

int mx_factorial_iter(int n) {
    if(n < 2147483647) {
        return (n < 2) ? 1 : n * mx_factorial_iter (n - 1);
    }
    else {
        return 0;
    }
}

/*
int main() {
    printf("%d", mx_factorial_iter(5));
    return 0;
}
*/

