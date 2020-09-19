void mx_printchar(char c);

void mx_printint(int n){
    char i = 0;
    
    while (n != 0) {
        i += n% 10;
        n = n / 10;
    }
    
mx_printchar(n);
}

// int main() {
//     mx_printint(25);
// }
