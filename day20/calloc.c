#include <stdio.h>
#include<stdlib.h>

int main() {

    int* arr;
    arr = (int*)calloc(5, sizeof(int));

    for (int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }


    return 0;
}