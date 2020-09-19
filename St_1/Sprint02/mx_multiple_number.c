#include <stdbool.h>
#include <stdio.h>

bool mx_multiple_number(int n, int mult) {
    if (mult % n == 0) {
        return 1;
    }
    return 0;
}

int main(){
    printf("%d", mx_multiple_number(4, 9));
}
