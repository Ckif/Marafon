#include <stdbool.h>

bool mx_isspace(int c) {
    if (c >= 9 && c<=13) {
        return true;
    }
    else if(c == 32) {
        return true;
    }
    else {
        return false;
    }

}
