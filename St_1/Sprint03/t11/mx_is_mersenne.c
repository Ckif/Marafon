#include<stdbool.h>

double mx_pow(double n, unsigned int pow);
bool mx_is_prime(int num);

bool mx_is_mersenne(int n) {
    if(mx_is_prime(n)) {
        n++;
        for(int i = 1;i < n; i++)
            if(n == mx_pow(2,i))
                return true;
    }
    return false;
}
