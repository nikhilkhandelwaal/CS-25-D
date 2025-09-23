#include<stdio.h>

int main() {

    int a = 10, b = 15, c = 20;
    int largest = a;
    if (b > largest)largest = b;
    if (c > largest)largest = c;

    if (largest == a) {
        if (a * a == (b * b) + (c * c)) {

        }
        else {

        }
    }
    else if (largest == b) {
        if (b * b == (a * a) + (c * c)) {

        }
        else {

        }
    }
    else {
        if (c * c == (a * a) + (b * b)) {

        }
        else {

        }
    }


    return 0;
}