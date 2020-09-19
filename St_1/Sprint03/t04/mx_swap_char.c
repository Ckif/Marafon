// #include <stdio.h>

void mx_swap_char(char *s1, char *s2) {
    char s0 = *s1;
    *s1 = *s2;
    *s2 = s0;
}

// int main () {
//     char str[] = "Neo";
//     mx_swap_char(&str[0], &str[1]); 
//     mx_swap_char(&str[1], &str[2]); 
//     printf("%s", str);
// }
