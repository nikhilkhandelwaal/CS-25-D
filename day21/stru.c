#include <stdio.h>
#include<string.h>

struct user {
    char name[100];
    int age;
    float height;
};

void changeValue(struct user* userInfo) {
    userInfo->age = 30;
    printf("Inside Function: %d\n", userInfo->age);
}

int main() {

    struct user user1 = { "Hello",25,5.5 };

    // changeValue(user1); // Pass by Value
    changeValue(&user1); // Pass by reference

    printf("Outside Function: %d\n", user1.age);

    return 0;
}