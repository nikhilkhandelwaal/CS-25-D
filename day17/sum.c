#include <stdio.h>

void sum(int num1, int num2) // num1 and num2 called parameter
{
    printf("%d\n", num1 + num2);
    // return num1 + num2;
}

int main()
{
    int a = 10;
    int b = 20;
    sum(a, b);   // a & b called arguments
    sum(15, 25); // 15 & 25 called arguments
    sum(30, 35); // 30 & 35 called arguments

    return 0;
}