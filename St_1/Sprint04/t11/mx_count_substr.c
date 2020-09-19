//#include <stdio.h>

int mx_strncmp(const char *s1, const char *s2, int n);
char *mx_strchr(const char *str, int c);
int mx_strlen(const char *s);
char *mx_strstr(const char *s1, const char *s2);

int mx_count_substr(const char *str, const char *sub) {
    int count = 0;
    int sub_len = mx_strlen(sub);

    if (!*sub)
        return 0;
    while (sub_len <= mx_strlen(str)) {
        if (mx_strstr(str, sub)) {
            str = mx_strstr(str, sub);
            str += sub_len;
            count++;
        }
        else
            return count;
    }
    return count;
}
