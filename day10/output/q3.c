#include <stdio.h>
int main() {
    int i = 5;
    while (i > 0) {
        printf("%d ", i--);
        if (i == 3) {
            i--;
            continue;
        }
    }
    return 0;
}
/*
    5,4,2
    i=1


    5,4,2,1
    5,4,1



*/