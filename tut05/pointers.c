// COMP1511 Tut 05 - Pointers Revision
// Ada Luong, June 2022

#include <stdio.h>

int main(void) {

    int number = 21;
    
    // creating a pointer
    int *number_ptr;

    // initialising a pointer
    number_ptr = &number;    

    // accessing memory via a pointer ("dereferencing")
    printf("%d\n", *number_ptr);

    return 0;
}
