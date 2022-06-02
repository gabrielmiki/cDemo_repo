/* 
    Program to print out the value of a sin function
    between 0 and 1. 
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    double x;

    printf("Enter a value betwenn 0 and 1: ");

    printf("The sin of %f is %f", x, sin(x));

    return 0;
}