// #include <stdbool.h>
#include"minilibmx.h"

// bool mx_isdigit(int c);
// bool mx_isspace(char c);
// void mx_printchar(char c);

int mx_atoi(const char *str) {
    int result = 0;
    bool sign = false;
    if(*str) {
        while(mx_isspace(*str))
            str++;
        if (*str == '-') {
            sign = true;
            str++;   
        }
        else if (*str == '+')
            str++; 
        while (mx_isdigit(*str)) {
            result *= 10;
            result += *str-48;
            str++;
        }
        if (sign)
            result = -result;
    }
    return result;
}
