int mx_toupper(int c) {
    if (c <= 122 && c >= 97) {
        return (c=c-32);
    }
    else if (c <= 90 && c >= 65) {
        return c;
    }
    else {
        return 0;
    }
}
