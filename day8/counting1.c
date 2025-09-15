#include<stdio.h>

int main() {

    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);
        i += 2;
    } // 1,3,6,9    1,4,7,10,13      1,4,7,10
    return 0;

    /*
       1 - i=1; => 1<=10 => true => i=2 =>  print 2
       2- i++ => 2++ => 3 => 3<=10 => true => print 4
       3- i++ => 2++ => 3 => 3<=10 => true => print 6
       4- i++ => 3++ => 4 => 4<=10 => true => print 8
       5- i++ => 4++ => 5 => 5<=10 => true => print 10

       11.i++ => 10++ => 11 => 11<=10 => false => Loop End

   */
}