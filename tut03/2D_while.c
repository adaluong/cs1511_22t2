// COMP1511 Tut03 - 2D While Loops
// Ada Luong, June 2022

#include <stdio.h>

int main(void) {

    // Scan in the size of the square 
    int square_size;
    printf("How big do you want your square to be: ");
    scanf("%d", &square_size);

    // Print out a 2D square of asterisks
    int row = 0;
    while (row < square_size) {

        // print out a row of asterisks
        int col = 0;
        while (col < square_size) {
            printf("*");
            col = col + 1;
        }

        // go to the next row
        printf("\n");
        row = row + 1;
    }

    return 0;
}