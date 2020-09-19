#include <stdio.h>
char *mx_strncpy(char *dst, const char *src, int len) {
	for (int i = 0; i < len; i++ ) {
		dst[i] = src[i];
	}
	return dst;
	
	return 0;
}

// int main() {
// 	const char test[] = "I got to go home";
// 	char real[] = "Unit";
// 	int len = 4 ;
// 	printf("%s", mx_strncpy(real, test, len));
	
// }


