#include <stdio.h>

int main() {

    int a = 10;
    int b = 10;

    int* aPtr = &a;
    int* bPtr = &b;

    // *aPtr = 20;

    // printf("%d", a);

    // printf("%p\n", aPtr);
    // printf("%p\n", bPtr);

    (*aPtr)++;
    printf("%d", *aPtr);

    return 0;
}

/*
    Pointers
        Varible Name,  Value, Address
        & => point toward address
        * => Point towards value at that address

    *aPtr = a
    *bPtr = b


*/