#include <stdio.h>
#include <unistd.h>

void mx_printchar(char c);

void mx_isos_triangle(unsigned int length, char c){
    for (unsigned int i = 1; i<length+1; i++) {
        for (unsigned int ii = 0; ii<i; ii++){
            mx_printchar(c);

        }
        mx_printchar('\n');
    }
}

int main(){
    mx_isos_triangle(6, '!');

}
