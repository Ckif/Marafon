//#include <stdio.h>

void mx_printchar(char c);
void mx_printint(int n);

void mx_print_arr_int(const int *arr, int size) {
    
    for( int i = 0; i < size ; i++ ) {
        mx_printint(arr[i]);
            mx_printchar('\n');
    }
}

//int main() {
//    const int arr[] = {0,1,2,3,4,5,6,7,8};
 //   int size = 7;
 //   mx_print_arr_int(arr, size);
//}

