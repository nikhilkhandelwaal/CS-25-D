#include <stdio.h>
#include<string.h>

struct user {
    char name[50];
    int age;
    float height;
};

int main() {

    struct user user1;
    user1.age = 25;
    user1.height = 5.5;
    strcpy(user1.name, "hello");

    printf("%u\n", user1.name);
    printf("%u\n", &user1.age);
    printf("%u\n", &user1.height);

    // struct user user2;
    // user2.age = 35;
    // user1.height = 6.5;

    // printf("%d\n", user2.age);
    // printf("%f\n", user2.height);



    return 0;
}

/*
    Predefined Data type
    user Defined data type

*/