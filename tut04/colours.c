// COMP1511 Tut 04 - Functions, Structs, Arrays, Enums
// Writing functions to help us deal with colours
// Ada Luong, June 2022

#include <stdio.h>
#include <math.h>

struct colour {
    int red;
    int green;
    int blue;
};

enum main_colours {
    RED,
    GREEN,
    BLUE,
    OTHER
};

// Function declarations
struct colour make_colour(int red, int green, int blue);

int main(void) {

    // using the function we just created
    struct colour purple = make_colour(10, 43, 32);

    return 0;
}

// This function takes in three integers and returns a struct colour
struct colour make_colour(int red, int green, int blue) {
    
    // create a new struct (declaring then initialising)
    struct colour c;
    c.red = red;
    c.green = green;
    c.blue = blue;

    // return the struct
    return c;
}

