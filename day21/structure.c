#include <stdio.h>

struct user {
    char name[100];
    int age;
    float height;
};

int main() {

    struct user user1 = { "Hello",25,5.5 };

    struct user* uPtr = &user1;

    // printf("%s", (*uPtr).name);
    // printf("%d", (*uPtr).age);
    // printf("%f", (*uPtr).height);

    // printf("%s\n", uPtr->name);
    // printf("%d\n", uPtr->age);
    // printf("%f\n", uPtr->height);

    



    return 0;
}