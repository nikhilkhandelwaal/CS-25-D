#include<stdio.h>

int main() {

    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum = sum + i;
    }
    printf("%d\n", sum);

    /*
    
    1. i=1 => 1<=10 => true => sum=0+1 => sum = 1
    2. i=2 => 2<=10 => true => sum=1+2 => sum = 3
    3. i=3 => 3<=10 => true => sum=3+3 => sum = 6
    
    
    */


    return 0;
}