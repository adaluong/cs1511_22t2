// COMP1511 Tut 02 - If Statements
// Ada Luong, June 2022

// A program that scans in two integers (a and b)
// If the first integer is less than the second, prints out a short error message.
// If the second integer is 0, prints out a short error message.
// If the first integer is larger than the second, prints a / b and (a * 1.0) / (b * 1.0)

#include <stdio.h>

int main(void) {

    int a;
    int b;
    scanf("%d %d", &a, &b);
    printf("a=%d, b=%d\n", a, b);
    
    if (a < b) {
        printf("a is less than b\n");
    }
    
    if (b == 0) {
        printf("the second integer is 0\n");
    }
    
    if (a > b) {
        printf("%d %lf", a / b, (a * 1.0) / (b * 1.0));
    }  


    return 0;
}



