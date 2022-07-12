// COMP1511 Tut 07 - fgets
// Implementation of fgets
// July 2022

#include <stdio.h>

#define TRUE 1
#define FALSE 0

char *my_fgets(char *str, int size) {

    // handling invalid size
    if (size < 1) {
        return NULL;

    } else if (size == 1) {
        // poorly defined behaviour
        str[0] = '\0';
        return str;
    }


    char c;
    int values_scanned = scanf("%c", &c);
    if (values_scanned != 1) {
        // if 0 characters have been scanned in
        // eg. if CTRL-D is entered
        return NULL;
    }

    int end_of_line = FALSE;
    int i = 0;
    while (i < size - 1 && !end_of_line && values_scanned == 1) {
        str[i] = c;

        if (c == '\n') {
            // ending loop after inserting newline
            end_of_line = TRUE;
        } else {
            // only scanning character if not at the end of the line.
            values_scanned = scanf("%c", &c);
        }

        i++;
    }

    // if any characters scanned in, then a `\0` is added
    // to the array after the last character
    str[i] = '\0';

    return str;
}
