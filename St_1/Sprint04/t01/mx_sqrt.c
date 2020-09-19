// #include <stdio.h>
// #include <time.h>

int mx_sqrt(int x) {
    int y = 1;

    while (y <= x/2) {
        if (y * y == x) { 
            return y;
        }    
        y++;
    }
    
    return 0;
}

// int main() {
//    time_t start = time(NULL);
//    printf("%d\n", mx_sqrt(256));
//    time_t finish = time(NULL) - start;
//    printf("%ld", finish);
// }

