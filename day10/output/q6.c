#include <stdio.h>
int main() {
    int n = 1;
    do {
        n++;
        if (n % 2 == 1 && n < 5)
            printf("%d ", n);
        else if (n % 2 == 0)
            printf("X ");
    } while (n <= 6);
    return 0;
}
/*
    X3XX
    1X3XX
    

*/