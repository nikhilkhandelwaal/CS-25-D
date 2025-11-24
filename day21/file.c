#include <stdio.h>

int main() {

    FILE* fPtr;

    fPtr = fopen("abc.txt", "a");
    int a;
    float b = 5.5;
    printf("Enter the value:- ");
    scanf("%d", &a);
    fprintf(fPtr, "%d %.2f\n", a, b);

    fclose(fPtr);
    return 0;
}

/*
    RAM =>
    ROM (SSD, HDD) => Saved Data

    Open
        File Name, Operation(read, write, append)
        r, w, rb, wb, a


*/