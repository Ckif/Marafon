#include "file_to_str.h"

int mx_strlen(const char *p) {
    int mx = 0;
    while(p[mx] != '\0') {
        mx++;
    }
    return mx;
}
