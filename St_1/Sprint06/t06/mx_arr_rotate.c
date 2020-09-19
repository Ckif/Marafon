#include<stdio.h>
void mx_arr_rotated(int *arr, int size, int shift) {
    if (shift > 0) {
        while (shift !=0 ) {
            for (int i = 0; i < size; i++) {
                int temp = arr[i];
                arr[i] = arr[0];
                arr[0] = temp;
            }
            shift--;
        }
    }
    else if (shift < 0) {
        while (shift != 0) {
            for (int i = size -1; i >= 0; i--) {
                int temp = arr[i];
                arr[i] = arr[0];
                arr[0] = temp;
            }
            shift++;
        }
    }
}

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     mx_arr_rotated(arr, 5, 2);
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", arr[i]);
//     }
// }
