#include<stdio.h>
int main() {

    int age;
    printf("Enter your age:");
    scanf("%d", &age);

    printf("My age is %d", age);

    char name[] = "Abhishek";
    char city[] = "Gurgaon";
    char grade = 'A';
    int age = 20;
    float height = 5.8;
    printf("******** \t Student's Data \t *********\n");
    printf("Name: \t%s\n", name);
    printf("City: \t%s\n", city);
    printf("Grade:\t%c\n", grade);
    printf("Age: \t%d Year old \n", age);
    printf("Height: %f Feet\n", height);
    printf("*****************\n");
    return 0;
}