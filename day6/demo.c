#include<stdio.h>
#include<math.h>

int main() {

    // int amnt1, amnt2;

    // printf("Enter first amount: ");
    // scanf("%d", &amnt1);

    // printf("Enter Second amount: ");
    // scanf("%d", &amnt2);

    // printf("Total Amount: %d", amnt1 + amnt2);

    // int marks1, marks2, marks3, total;
    // printf("Enter first student marsks :");
    // scanf("%d", &marks1);
    // printf("Enter second student marsks :");
    // scanf("%d", &marks2);
    // printf("Enter third student marsks :");
    // scanf("%d", &marks3);

    // total = marks1 + marks2 + marks3;
    // printf("Average of Class: %f", total / 3.0);

    // int radius;

    // printf("Enter the radius of circle: ");
    // scanf("%d", &radius);

    // printf("Area of circle is %f", 3.14 * radius * radius);

    // int base, height;

    // printf("Enter base of triangle :");
    // scanf("%d", &base);
    // printf("Enter height of triangle :");
    // scanf("%d", &height);

    // printf("%f", 0.5 * base * height);


    // int base, height;
    // float hypoteneus;

    // printf("Enter Base :");
    // scanf("%d", &base);
    // printf("Enter height :");
    // scanf("%d", &height);

    // hypoteneus = sqrt((base * base) + (height * height));
    // printf("%f", hypoteneus);


    // if , if else, if else if

    // printf("Hello Everyone");
    // int a = 10;
    // int b = 20;

    // if (a == b) {
    //     printf("Hello Everyone");
    // }else{
    //     printf("Welcome to India");
    // }

    // printf("Welcome to NCU");


    // int age;
    // printf("Enter your age: ");
    // scanf("%d", &age);

    // if (age >= 18) {
    //     printf("You Can vote");
    // }
    // else {
    //     printf("You can not vote");
    // }


    // int score1, score2;
    // printf("Enter your score 1: ");
    // scanf("%d", &score1);
    // printf("Enter your score 2: ");
    // scanf("%d", &score2);

    // if (score1 > score2) {
    //     printf("Score 1 is Winner with %d", score1);
    // }
    // else {
    //     printf("Score 2 is Winner with %d", score2);
    // }


    // int number;  // 5
    // printf("Enter a number :");
    // scanf("%d", &number);

    // if (number % 2 == 0) { // 5%2==0 => 1==0
    //     printf("%d  is Even number", number);
    // }
    // else {
    //     printf("%d  is odd number", number);
    // }


    // int orderSize;
    // printf("Enter offer size: ");
    // scanf("%d", orderSize);
    // if (orderSize % 3 == 0 && orderSize % 5 == 0) {
    //     printf("Offer is on");
    // }
    // else {
    //     printf("Offer is not valid");
    // }


    char letter;
    printf("Enter the letter: ");
    scanf("%c", &letter);

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
        printf("Letter is Vowel");
    }
    else {
        printf("Letter is Consonant");
    }

    return 0;
}
