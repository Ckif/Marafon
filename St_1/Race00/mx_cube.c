void mx_printchar(char c);
//линия куба с углом
static void line_angle(int n) {
    mx_printchar('+');
        for (int i = 0; i < n * 2; i++) {
            mx_printchar('-');
        }
    mx_printchar('+');
}
//фронтальная линия куба
static void line_horiz(int n) {
    mx_printchar('|');
        for (int i = 0; i < n * 2; i++) {
            mx_printchar(' ');
        }
    mx_printchar('|');
}
//верхняя линия куба
static void line_top(int n) {
    mx_printchar('/');
        for (int i = 0; i < n * 2; i++) {
            mx_printchar(' ');
        }
    mx_printchar('/');
}

void mx_cube(int n) {
    if (n > 1) {
        //печать пробелов перед первой строкой +1
        for (int i = 0; i < (n/2)+1; i++) {
            mx_printchar(' ');
        }
        line_angle(n);
        mx_printchar('\n');
        //печать пробелов перед скосом
        for (int i = 1; i <= (n / 2); i++) {  
            for (int sp = (n/2); sp>i-1; sp--) { 
                mx_printchar(' ');
            }
        line_top(n);
            //Печать боковой грани в верхней части
            for (int sp = 1; sp<i; sp++) {
                mx_printchar(' ');
            }
        mx_printchar('|');
        mx_printchar('\n');
        }
    //Печать средней линии с углами и пробелами
    line_angle(n);
        for (int sp3 = n/2; sp3 > 0; sp3--) {
            mx_printchar(' ');
        }
    mx_printchar('|');
    mx_printchar('\n');
    //если размер куба чётный
    if (n%2 == 0) {
        //печать пробелов перед скосом в нижней части
        for (int i = 1; i <= (n); i++) { 
            line_horiz(n);
            if (i < n/2) {
                //печать пробелов перед задней стенкой сверху
                for (int sp4 = n/2; sp4 > 0; sp4--) { 
                    mx_printchar(' ');
                }
                mx_printchar('|');
            }
            //печать пробелов в средине и задний угол
            else if (i == n/2) {
                for (int sp5 = n/2; sp5 > 0; sp5--) {
                    mx_printchar(' ');
                }
                mx_printchar('+');    
            }
            //печать пробелов перед задней стенкой снизу
            else if (i > n/2) {
                for (int sp = n; sp>i; sp--) { 
                    mx_printchar(' ');
                }
            mx_printchar('/');
            }
        mx_printchar('\n');
        }
    }
    //если размер куба нечётный
    if (n%2 != 0) {
        //печать пробелов перед скосом в нижней части
        for (int i = 1; i <= (n); i++) { 
            line_horiz(n);
            if (i-1 < n/2) {
                //печать пробелов перед задней стенкой сверху
                for (int sp4 = n/2; sp4 > 0; sp4--) { 
                    mx_printchar(' ');
                }
                mx_printchar('|');
            }
            //печать пробелов в средине и задний угол
            else if (i-1 == n/2) {
                for (int sp5 = n/2; sp5 > 0 ; sp5--) {
                    mx_printchar(' ');
                }
                mx_printchar('+');    
            }
            //печать пробелов перед задней стенкой снизу
            else if (i-1 > n/2) {
                for (int sp = n; sp>i ; sp--) { 
                    mx_printchar(' ');
                }
            mx_printchar('/');
            }
        mx_printchar('\n');
        }
    }
    line_angle(n);
    mx_printchar('\n'); 
    }                                                                                                                                                                                                                                                                                                                                                                                                                                                             
}

// int main() {
//     mx_cube(5);
// }
