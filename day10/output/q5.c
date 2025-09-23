#include <stdio.h>
int main() {
    int x;
    for (x = 1; x <= 8; x++) {
        if (x % 2 == 0) {
            if (x % 4 == 0)
                printf("D");
            else
                printf("E");
        }
        else {
            if (x % 5 == 0)
                printf("F");
            else
                printf("G");
        }
        if (x == 6)break;
    }
    return 0;
}
/*
    GEGDFE
    



*/