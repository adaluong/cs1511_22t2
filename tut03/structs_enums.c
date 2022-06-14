// COMP1511 Tut 03 - Structs and Enums
// Ada Luong, June 2022

#include <stdio.h>

enum position {
    laying_down,
    sitting,
    tummy_up
};

struct pet {
    double age;
    enum position body_position;
    int height_above_ground;
};

int main(void) {

    //int      number;
    struct pet ginger;
    ginger.age = 10.5;
    ginger.height_above_ground = 3;
    ginger.body_position = laying_down;
    
    if (ginger.body_position == laying_down) {
        printf("nawwwww\n");
    }   
    
    
 
    

    return 0;
}
