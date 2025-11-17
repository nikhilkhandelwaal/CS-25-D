#include <stdio.h>

int fact(int num1) {
    // int factVal = 1;
    // for (int i = 1; i <= num1; i++) {
    //     factVal *= i;
    // }
    if (num1 == 0) return 1;
    return num1 * fact(num1 - 1);//4*fact(3)
}

int main() {

    int a = 5;
    int factValue = fact(5);
    printf("Factorial is : %d\n", factValue);

    return 0;
}

/*

    num=5 => 5*!4 => 5*24 => 120
    num=4 => 4*!3 => 4*6 = 24
    num=3 => 3*!2 => 3*2 => 6
    num=2 => 2*!1 => 2*1 => 2
    num=1 => 1*1 => 1

*/