#include <stdio.h>

int main() {

    int arr[] = { 10,20,30,40,50 };
    int a = 10;

    printf("Value of a : %d\n", a);
    printf("Address of a : %u\n", &a);
    printf("Address of Array: %u\n", arr);
    printf("Address of first element: %u\n", &arr[1]);



    return 0;
}