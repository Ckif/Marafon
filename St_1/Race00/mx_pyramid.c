void mx_printchar(char c);

//верхушка пирамиды
static void tri_hige(int n) {
    for (int i = 0; i < n - 1; i++) {
            mx_printchar(' ');
    }
    mx_printchar('/');
    mx_printchar('\\');
    mx_printchar('\n');
}
//фундамент пирамиды
static void tri_ground(int n) {
    mx_printchar('/');
        for (int i = 0; i < (n * 2)-3; i++) {
            mx_printchar('_');
        }
    mx_printchar('\\');
    mx_printchar('|');
    mx_printchar('\n');
}
//верхняя часть пирамиды 
static void tri_top(int n) {
    int odd = 2;
    if(n%2) {
        odd--;
    }
    for (int count = 0; count <= n/2-odd; count++) {
        //пробелы перед левой гранью
        for (int i = 0; i < n - 2 - count; i++) {
            mx_printchar(' ');
        }
        mx_printchar('/');
        //пробелы после левой грани
        for (int sp1 = 1; sp1 <= count*2+1; sp1++) {
            mx_printchar(' ');
        }
        mx_printchar('\\');
        //пробелы после центральной грани
        for (int i = 0; i <= count; i++) {
            mx_printchar(' ');
        }
        mx_printchar('\\');
        mx_printchar('\n');
    }
    // mx_printchar('\n');
}
//нижняя чать пирамиды 
static void tri_bot(int n) {
    int odd = 1;
    if(n%2) {
        odd--;
    }
    for (int count = 0; count <= n/2-2; count++) {
        // пробелы перед левой частью пирамиды
        for (int i = 0; i <= n/2 - 2 - count ; i++) {
            mx_printchar(' ');
        }
        mx_printchar('/');
        //пробелы после левой грани
        for (int i = 0; i < n - odd + count*2; i++) {
            mx_printchar(' ');
        }
        mx_printchar('\\');
        //пробелы после центральной грани
        for (int i = 0; i < n/2 - 1 - count; i++) {
            mx_printchar(' ');
        }
        mx_printchar('|');
        mx_printchar('\n');
    }
}

void mx_pyramid(int n) {
    if(n > 1) {
        //печатаем верхушку пирамиды
        tri_hige(n);
        //печатаем вехнюю половину пирамиды
        tri_top(n);
        //печатаем вехнюю половину пирамиды
        tri_bot(n);
        //печатаем низ пирамиды
        tri_ground(n);
    }
}

int main() {
    mx_pyramid(41);
    mx_pyramid(44);
}
