#include <stdio.h>

void arrSum(int* add, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + *(add + i);
    }
    printf("%d\n", sum);
}

int main() {

    int arr[] = { 10,20,30,40,50 };
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    arrSum(arr, arrSize);
    printf("%u\n", arr);


    return 0;
}