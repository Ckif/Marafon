//#include <stdio.h>

int mx_gcd(int a, int b) {
     if (b == 0)
		return a;
    else
		return mx_gcd (b, a % b);
    
}

/*
int main() {
    printf("%d", mx_gcd(20, 15));
    return 0;
}
*/


