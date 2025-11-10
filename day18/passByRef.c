#include <stdio.h>

void value(int* num1) {
    // printf("Address of num1: %u\n", num1);
    // printf("Value of num1: %u\n", *num1);
    *num1 = 20;
}

int main() {

    int a = 10;
    printf("Value of a before passing: %d\n", a);
    value(&a);

    printf("Value of a after passing: %d\n", a);
    // printf("Address of a: %u\n", &a);

    return 0;
}

/*
    Advantage of pass by reference
        - Memory Consumption
        - Multiple Value return
        - 

*/