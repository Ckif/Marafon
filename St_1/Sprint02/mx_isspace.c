#include <stdbool.h>
#include <stdio.h>

bool mx_isspace(int c) {
    if (c >= 9 && c<=13){
        return true;
    }
    else if(c == 32) {
        return true;
    }
    else {
        return false;
    }

}


int main(){
    printf("%d", mx_isspace(' '));
}
