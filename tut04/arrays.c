// COMP1511 Tut04 - Arrays
// A program to print out every element of an array
// Ada Luong, June 2022

#include <stdio.h>

#define SIZE 5

int main(void) {

    // Create an array of integers and initialise the elements
    int arrays[SIZE] = {1,2,3,4,5};
    
    int i = 0;
    while (i < SIZE) {
        printf("%d", arrays[i]);
        i = i + 1;
    }

    printf("\n");
    return 0;
}
