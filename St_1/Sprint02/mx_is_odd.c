#include <stdbool.h>

bool mx_is_odd(int value);

bool mx_is_odd(int value){
    if (value % 2 == 0) {
        return false;
    }
    else {
        return true;
    }

}
int main() {
    mx_is_odd(0);
    return mx_is_odd(8);
}
