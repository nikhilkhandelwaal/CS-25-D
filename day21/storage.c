#include <stdio.h>

void value() {
    static int a = 10;
    a++;
    printf("%d\n", a);
}

int z = 10;

int main() {

    // // value();
    // // value();
    // // value();
    // register int a = 10;
    // register int b = 20;
    // printf("%u\n", &a);

    extern int x;
    printf("%d\n", x);

    return 0;
}

/*
    Auto, static, register, extern

*/