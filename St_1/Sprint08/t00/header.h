#ifndef header
#define header

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct int_struct {
    int count;
    int count_rez;
    int beacon_count;
}              sub_int;


void mx_printchar (char c);
void mx_printint (int n);
void mx_printstr(const char *s);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
int mx_strcmp(const char *s1, const char *s2);
bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char *str);

#endif

