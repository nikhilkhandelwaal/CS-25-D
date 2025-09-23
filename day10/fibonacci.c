#include<stdio.h>

int main() {

    int a = 0, b = 1, c;

    for (int i = 1;i <= 10; i++) {
        printf("%d ", a);
        c = a + b; // 5
        a = b; // 3
        b = c; // 5
    }

    return 0;
}
// 0 1 1 2 3 5 8 13 21 34