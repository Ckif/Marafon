#include<stdio.h>
int mx_strlen(const char *s);
int mx_strcmp(const char *s1, const char *s2);

int mx_selection_sort(char **arr, int size) {
    int min, count = 0, flag = 0;
    char *buff;
    for (int i = 0; i < size-1; i++) {
        min = i;
        for (int j = i + 1; j < size; j++) {
            if (mx_strlen(arr[j]) < mx_strlen(arr[min]) 
            || (mx_strlen(arr[j]) == mx_strlen(arr[min]) && mx_strcmp(arr[j], arr[min]) < 0)) {
                min = j;
                flag = 1;
            }        
        }
        buff = arr[min];
        arr[min] = arr[i];
        arr[i] = buff;
        if (flag == 1) {
            count++;
        }
        flag = 0; 

    }
    return count;

}

// int main() {
//     char *arr[] = {"Abcd", "a", "aBc", "abc", "Z", "z", "AbCd"};
//     printf("%d\n", mx_selection_sort(arr, 7));


// }



