#include <time.h>
#include <stdio.h>
​
double mx_timer(void (*f)()) {
    clock_t start = clock();
    f();
    clock_t stop = clock();
    return (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
}
​
void jopa() {
    printf("%d",1);
}
​
int main() {
    void(*hohland)() = jopa;
    printf("%f",mx_timer(hohland));
}
