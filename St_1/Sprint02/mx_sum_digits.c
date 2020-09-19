#include <stdio.h>

int mx_sum_digits(int num) {
    int gg = 0;
    
    while (num != 0) {
        gg += num % 10;
        num = num / 10;
    }
    if (gg < 0)
        gg = -gg;
    return gg;
}

int main() {
    printf("%d",mx_sum_digits(-521));
}
