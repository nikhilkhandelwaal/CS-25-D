#include<stdio.h>

int main() {

    int number, primeStatus = 1;
    printf("Enter a number: ");
    scanf("%d", &number); // 11

    for (int i = 2; i < number; i++) {
        if (number % i == 0) { // 11%
            primeStatus = 0;
        }
    }

    if (primeStatus == 1) {
        printf("It is prime number");
    }
    else {
        printf("It is not prime number");
    }


    return 0;
}