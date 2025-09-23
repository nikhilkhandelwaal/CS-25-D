#include <stdio.h>
int main() {
    int i = 1, j;
    while (i <= 3) {
        j = 1;
        while (j <= 3) {
            if (i == j)
                continue;
            else
                printf("D");
            j++;
        }
        printf(" ");
        i++;
    }
    return 0;
}
/*
    DD DD DD
    kuch nhi
    

*/