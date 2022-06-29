// COMP1511 Tut 05 - Malloc
// Ada Luong, June 2022

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void print_array(int *array, int size);
void initialise_array(int *array, int size, int value);
int *dynamic_memory(int size);

int main(void) {

    int *array = dynamic_memory(SIZE);
    initialise_array(array, SIZE, 0);
    print_array(array, SIZE); 

    // CONSIDER:
    // - how would you resize the array to be twice as long (realloc)?
    // - how would you free the memory associated with the array (free)?

    return 0;
}

// returns a dynamic array of integers given the
// size of the array
int *dynamic_memory(int size) {
    int *array = malloc(sizeof(int) * size);
    return array;
}

// prints all the elements of an array
void print_array(int *array, int size) {
    int i = 0;
    while (i < size) {
        printf("%d ", array[i]);
        i++;
    }
}

// initialises all the elements of an array to a specified value 
void initialise_array(int *array, int size, int value) {
    int i = 0;
    while (i < size) {
        array[i] = value;
        i++;
    }
}
