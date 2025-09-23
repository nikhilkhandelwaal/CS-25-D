#include <stdio.h>
int main() {
    int i, j = 0;
    for (i = 1; i <= 5; i++) {
        j += 2;
        if (j > 8)
            break;
        if (i % 2 == 0)
            continue;
        j--;
        printf("%d ", j);
    }
    return 0;
}
/*
1,4,7    


*/