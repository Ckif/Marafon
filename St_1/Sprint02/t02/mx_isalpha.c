#include <stdbool.h>

bool mx_isalpha(int c) {
    if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97)) {
        return true;
    }
    else {
        return false;
    }
}
