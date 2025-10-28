#include <stdio.h>

int main() {

    int a = 10;
    int* aPtr = &a;

    int** aaPtr = &aPtr;

    printf("%d\n", a);
    printf("%p\n", &a);
    printf("%p\n", aPtr);
    printf("%p\n", &aPtr);
    printf("%p\n", *aaPtr);
    printf("%d\n", **aaPtr);

    return 0;
}

/*
    & => address of a varible
    * => value at that address


*/