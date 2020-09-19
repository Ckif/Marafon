// #include <stdio.h>
#include <stdbool.h>

bool mx_is_prime(int num) {
    if (num == 1) {
        return 0;
    }
    for (int b =2; b*b <=num; b++) {
        if (num % b == 0) {
            return 0;
        }
    }
    return 1;
}

// int main () {

//     printf("%d", mx_is_prime (97));
// }
