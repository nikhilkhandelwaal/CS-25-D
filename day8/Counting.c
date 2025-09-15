#include<stdio.h>

int main() {

    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }

    // 1,3,5,,7,9.. 2,4,6,8,10


    /*
        1 - i=1; => 1<=10 => true => print 1
        2- i++ => 1++ => 2 => 2<=10 => true => print 2
        3- i++ => 2++ => 3 => 3<=10 => true => print 3
        4- i++ => 3++ => 4 => 4<=10 => true => print 4
        5- i++ => 4++ => 5 => 5<=10 => true => print 5
        6- i++ => 5++ => 6 => 6<=10 => true => print 6
        7- i++ => 6++ => 7 => 7<=10 => true => print 7
        8- i++ => 7++ => 8 => 8<=10 => true => print 8
        9- i++ => 8++ => 9 => 9<=10 => true => print 9
        10.i++ => 9++ => 10 => 10<=10 => true => print 10
        11.i++ => 10++ => 11 => 11<=10 => false => Loop End

    */

    return 0;
}

/*
    For Loop
    While Loop
    Do while Loop


    1. Start Point
    2. End Point
    3. Increment or decrement


*/