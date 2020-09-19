#include <stdbool.h>

double mx_pow(double n, unsigned int pow);

bool mx_is_narcissistic(int num) {
    if (num < 0)
        num = - num;
        
    int count = 0;
    int temp = num;
    int checker = 0;

    while (temp) {
        count++;
        temp /= 10;
    }
    temp = num;
    while (temp) {
        checker += mx_pow(temp%10, count);
        temp /= 10;
    }  
    if (checker == num) 
        return true;
    return false;
}
