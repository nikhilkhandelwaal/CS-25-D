#include<stdio.h>

int main() {

    int number, fact = 1;
    printf("Enter number: ");
    scanf("%d", &number);

    for (int i = number; i >= 1; i--) {
        fact = fact * i;
    }
    printf("%d", fact);

    return 0;
}