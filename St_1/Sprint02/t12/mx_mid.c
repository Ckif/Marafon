
int mx_mid(int a, int b, int c) {
    if (a >= b && b >= c) {
        return b;
    }
    else if (b >= a && a >= c) {
        return a;
    }
    else {
        return c;
    } 
