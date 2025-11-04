#include <stdio.h>

void evenOdd(int x)
{
    if (x % 2 == 0)
        printf("Even Number\n");
    else
        printf("Odd Number\n");
}

int main()
{
    int a = 10;
    evenOdd(a);
    int b = 23;
    evenOdd(b);

    return 0;
}
/*
    Normal Function
    Parameterrized function

*/