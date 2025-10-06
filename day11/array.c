#include <stdio.h>

int main() {

    // int arr[5] = { 10,20,30,40,50 };
    // double arr[5] = { 2.5,3.1,2.3,3.6,2.2 };
    // char arr[5] = { 'a','b','c','d','e' };
    // printf("%d", sizeof(arr));

    // int arr[5] = { 10,20,30,40,50 };
    // printf("%d", arr[4]);

    // int arr[5];
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;
    // arr[3] = 40;
    // arr[4] = 50;

    // int arr[5];
    // printf("Enter first value: ");
    // scanf("%d", &arr[0]);
    // printf("Enter second value: ");
    // scanf("%d", &arr[1]);
    // printf("Enter third value: ");
    // scanf("%d", &arr[2]);
    // printf("Enter fourth value: ");
    // scanf("%d", &arr[3]);
    // printf("Enter fiftg value: ");
    // scanf("%d", &arr[4]);

    // int arr[5];
    // for (int i = 0; i < 5; i++) {
    //     printf("Enter %d value: ", i);
    //     scanf("%d", &arr[i]);
    // }

    // int arr[] = { 5,20,1,3,5,6,6,9,10,3,6,7 };

    // printf("%d", sizeof(arr) / sizeof(arr[0]));

    int arr[] = { 10,20,30,40,50 };
    int count = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < count; i++) {
        printf("%d\n", arr[i]);
    } 



    return 0;
}

// 1. Copy one array elements in another array
// 2. Reverse array with and without using another varible
// 3. Check wheather array is palindrome or not ?
// 4. Count the even and odd numbers in an array
