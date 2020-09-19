#pragma once
#ifndef file_to_str_h
#define file_to_str_h

#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

char *mx_strcat(char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);
char *mx_strjoin(const char *s1, const char *s2);
int mx_strlen(const char *p);
char *mx_strnew(const int size);

#endif
