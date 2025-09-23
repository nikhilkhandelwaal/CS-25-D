#include<stdio.h>

int main() {

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int original, lastDigit, reverseNumber = 0;

    original = number;

    while (number > 0) {
        lastDigit = number % 10; // 1
        number = number / 10; // 0
        reverseNumber = reverseNumber * 10 + lastDigit;// 3
    }

    if (original == reverseNumber) {
        printf("Palindrome");
    }
    else {
        printf("Not Palindrome");
    }


    return 0;
}

// number = 0 , reverseNumber = 321