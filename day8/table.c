#include<stdio.h>

int main() {

    int number;
    printf("Enter your number: ");
    scanf("%d", &number);

    for (int i = 1; i <= 10; i++) {
        printf("%d\n", number * i);
    }

    return 0;
}