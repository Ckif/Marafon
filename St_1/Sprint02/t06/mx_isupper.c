#include <stdbool.h>

bool mx_isupper(int c) {
    if (c <= 90 && c >= 65) {
        return true;
    }
    else {
        return false;
    }
}
