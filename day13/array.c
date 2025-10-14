#include <stdio.h>

int main() {

    // Array 2D

    // int arr[5] = { 10,20,30,40,50 };

    // char arr[3][2];


    // int arr[2][2];
    // arr[0][0] = 10;
    // arr[0][1] = 20;
    // arr[1][0] = 30;
    // arr[1][1] = 40;

    // // printf("%d\n", arr[0][0]);?
    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < 2; j++) {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }

    // int arr[3][2] = { {10,20},{30,40},{50,60} };

    int arr[3][2];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter your values of array: ");
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}