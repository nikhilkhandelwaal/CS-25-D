#include <stdio.h>

struct user {
    char name[50];
    int age;
    float height;
};

int main() {

    struct user userData[10];

    userData[0].age = 25;
    userData[0].height = 5.5;


    userData[1].age = 27;
    userData[1].height = 6.5;

    return 0;
}