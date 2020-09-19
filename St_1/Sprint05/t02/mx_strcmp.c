//#include <stdio.h>

int mx_strcmp(const char *s1, const char *s2) {

    while ((unsigned char)*s1 || (unsigned char)*s2) {
        if ((unsigned char)*s1 != (unsigned char)*s2)
            return ((unsigned char)*s1 - (unsigned char)*s2);
        s1++;
        s2++;
    }
    return (0);
}

/*
int main() {
    char s1[] = "Helllo";
    char s2[] = "Hello";
    mx_strcmp(s1, s2);
    printf("%d", mx_strcmp(s1, s2));
}
*/


