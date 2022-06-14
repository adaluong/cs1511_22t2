// COMP1511 Tut03 - while loop basics
// A program to spawn assignments
// Ada Luong, June 2022

#include <stdio.h>

int main(void) {

    // 1. initialisation
    int counter = 0;
    
    // 2. condition for the loop
    while(counter < 10) {

        // 3. loop body
        printf("Spawning assignments\n");
        
        // 4. incrementing the counter (i.e. progress must be made)
        counter++; 
    }

    return 0;
}
