// #include <stdio.h>

char *mx_strchr(const char *s, int c) {
	while (*s) {
		if (*s == c) 
			return (char *)s;
	s++;
	}
	return 0;
}

// int main() {
// 	const char str[] = "Matrix";
// 	int letter = '\0';
// 	printf("%s\n", mx_strchr(str, letter));
// }
