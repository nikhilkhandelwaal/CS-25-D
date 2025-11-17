#include <stdio.h>
#include<stdlib.h>

int main(int argC, int* argV[]) {
    // printf("%s\n", argV[1]);
    // printf("%s\n", argV[2]);


    int a = atoi(argV[1]);
    int b = atoi(argV[2]);

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", a + b);

    return 0;
}

/*
    Command Line Arguments


*/