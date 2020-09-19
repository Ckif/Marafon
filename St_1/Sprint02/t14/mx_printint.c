#include <unistd.h> 
void mx_printchar(char c){
    write(1, &c, 1);
}

void mx_printint(int n) {
    int j = 0;
    char *i = 0;

    while (n != '\0') {
        i[j] = n % 10;
        n = n / 10;
        j++;
    }
    while (j > -1) {
        mx_printchar(i[j]);
        j--;
    }
}

int main(void) {
    mx_printint(25);
    return 0;
}
