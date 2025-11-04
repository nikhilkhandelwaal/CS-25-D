#include <stdio.h>

int sum(int num1, int num2) // num1 and num2 called parameter
{
    return num1 + num2;
}

int main()
{

    int a = 10;
    int b = 20;
    int sum1 = sum(a, b);   // a & b called arguments
    int sum2 = sum(15, 25); // 15 & 25 called arguments
    int sum3 = sum(30, 35); // 30 & 35 called arguments

    printf("%d\n", sum1);
    printf("%d\n", sum2);
    printf("%d\n", sum3);
    return 0;
}