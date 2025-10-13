#include <stdio.h>

int main() {

    int arr[10] = { 10,20,30,40,50,60,70,80 };
    int count = sizeof(arr) / sizeof(arr[0]);

    // Inser a new value at zero Index
    // for (int i = count - 1; i >= 0; i--) {
    //     arr[i] = arr[i - 1];
    // }

    // arr[0] = 5;


    // Insert a new value at last Index
    // arr[count - 1] = 5;


    // Insert a new value at specific Index


    for (int i = 0; i < count; i++) {
        printf("%d\n", arr[i]);
    }


    return 0;
}