#include "minilibmx.h"

bool mx_isspace(char c) {

    if (c == ' ' || c == '\t' || c == '\n' || c == '\f' || c == '\r') {
        return 1;
    }
    else {
        return 0;
    }
}
