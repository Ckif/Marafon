void mx_printchar(char c);
void mx_printstr(const char *s);
char* mx_strchr(const char* str, int c);
int mx_strlen(const char *s);

int main(int argc, char *argv[]) {
    if(argc >= 1) {
    char *split = argv[0];
    char *res = 0;

    while(split != 0) {
        res = split;
        split = mx_strchr(&split[1], '/');
    }

    mx_printstr(&res[1]);
    mx_printchar('\n');
    }
    return 0;
}

