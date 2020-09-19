//#include <stdio.h>

int mx_factorial_iter(int n) {
    int f = 1;
    if (n != 0)
        for (int i = 1; i <= n; i++)
            f = f * i;
            return f;

}

/*
int main() {
    printf("%d", mx_factorial_iter(2));
    return 0;
}
*/

