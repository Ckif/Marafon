#include <stdbool.h>
#include <stdio.h>

int mx_strcmp(const char *s1, const char *s2) {
    int i = 0;
    while (s1[i] == s2[i]) {
        if(*s1 == '\0')
            return 0;
        return s1[i] - s2[i];
        printf("%d\n", mx_strcmp(s1, s2));
    }
    return 0;
}


int main() {
    char *s1 = "123";
    char *s2 = "123";
    mx_strcmp(s1, s2);
    //printf("%d\n", mx_strcmp(s1, s2));
}
