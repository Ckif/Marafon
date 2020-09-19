void mx_printchar(char c);
int mx_strlen(const char *s);
void mx_printstr(const char *s);

int main(int argc, char *argv[]) {
    int i;
    if(argc >= 2)
    { 
        for(i = 0; i < argc; i++) {
            if(i == 0) {
                i=1;
            }
            mx_printstr(argv[i]);
            mx_printchar('\n');
        }
    }
    return 0;
}


