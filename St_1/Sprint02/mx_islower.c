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

int main(){
    printf("%d", mx_islower('Z'));
}
