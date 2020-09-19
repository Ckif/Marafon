#include <stdbool.h>

bool mx_isspace(char c) {
    if (c == ' ' || c == '\t' || c == '\n' || c == '\f' || c == '\r' || c == '\v')
        return true;
    return false;
}

