#include<stdio.h>

int main() {

    int count, entry, largest = 0;
    printf("Enter number of entries: ");
    scanf("%d", &count);

    for (int i = 1; i <= count; i++) {
        printf("Enter your %d number\n", i);
        scanf("%d", &entry);

        if (entry > largest) {
            largest = entry; // largest =20
        }
    }

    printf("Largse is %d", largest);

    return 0;
}