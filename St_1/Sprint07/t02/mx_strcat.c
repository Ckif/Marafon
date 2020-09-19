//#include <stdio.h> 

int mx_strlen(const char *s);

char *mx_strcat(char *s1, const char *s2) {
    int len = mx_strlen(s1); 
    for (int i = len, j = 0; s2[j] != '\0'; i++, j++) {
        s1[i] = s2[j];
    }
    s1[len + mx_strlen(s2)] = '\0'; 
    return s1;
}

/*
int main () {    
   char s1[]= "First";
   char s2[]= "Second"; 
   printf ("%s\n", mx_strcat(s2, s1));
   return 0;
}
*/


