//#include <stdio.h>
#include <stdlib.h>

int mx_strlen(const char *s);
char* mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);
char *mx_strdup(const char*str);
char *mx_strcat(char *s1, const char *s2);

char *mx_strjoin(char const *s1, char const *s2) {
  if (s1 == NULL && s2 == NULL) 
      return NULL;
  if (s1 != NULL && s2 == NULL)
      return mx_strdup (s1);
  if (s1 == NULL && s2 != NULL)
      return mx_strdup (s2);
  if (s1 != NULL && s2 != NULL) {
    char *res = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
		res = mx_strcat(mx_strcpy(res, s1), s2);
		return res;
  }
  return NULL;
}

/*
int main() {
  char str1[]= "this";
  char str2[]= "dodge ";
//   char str3[]= NULL;
  printf("%s", mx_strjoin(str2, str1)); //returns "dodge this"
//   printf("%s", mx_strjoin(str1, str3)); //returns "this"
//   printf("%s", mx_strjoin(str3, str3)); //returns NULL
}
*/


