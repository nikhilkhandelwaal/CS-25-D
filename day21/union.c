#include <stdio.h>

union user {
    char name[50];
    int age;
    float height;
};

int main() {

    union user userData;
    userData.age = 25;

    printf("%d\n", userData.age);

    userData.height = 5.5;

    printf("%d\n", userData.age);
    printf("%f\n", userData.height);

    return 0;
}