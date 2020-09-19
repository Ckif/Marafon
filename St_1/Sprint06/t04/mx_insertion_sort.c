#include <stdio.h>
int mx_strlen(const char *s);
int mx_insertion_sort(char **arr, int size) {
    char *temp;
    int j, count=0;
    for (int i = 1; i < size; i++) {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && mx_strlen(arr[j]) > mx_strlen(temp)) {
            arr[j + 1] = arr[j];
            j = j - 1;
            count++;
        }
        arr[j + 1] = temp;
    }
    return count;
}
int main() {
    char *arr[]= {"12aaaaaaaaaa", "11aaaaaaaaa", "13aaaaaaaaaaa", "5aaaa", "6aaaaa"};
    printf("%d", mx_insertion_sort(arr, 5));
}
