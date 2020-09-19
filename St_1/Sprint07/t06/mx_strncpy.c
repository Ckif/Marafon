//#include<stdio.h>

char* mx_strncpy(char *dst, const char *src, int len){
    for(int i = 0; i < len; i++){
        dst[i] = src[i];
    }
    return dst; 
}

/*int main(){
    char src[11] = "yo neo bro";
    char dst[11];
    mx_strncpy(dst, src, 3); 
    printf("%s",dst);
}*/

