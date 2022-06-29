// COMP1511 Tut 05 - 2D Arrays
// Natalie Leroy, June 2022

#include <stdio.h>

#define SIZE 5

int did_player_win(char player, char board[SIZE][SIZE]) {
    // For better style- can put each one of these options into
    // a function!

    // Another way to solve this problem is using a flag variable
    // to assume the player has won- unless proven otherwise!
    
    // every column
    int row = 0;
    int num = 0;
    int col = 0;
    int player_win = 0;
    while (col < SIZE) {
        row = 0;
        num = 0;
        while (row < SIZE) {
            if (player == board[row][col]) {
                num++;
            }
            row++;
        }

        if (num == SIZE) {
            player_win = 1;
        }
        col++;
    }

    // every row
    row = 0;
    while (row < SIZE) {
        col = 0;
        num = 0;
        while (col < SIZE) {
            if (player == board[row][col]) {
                num++;
            }
            col++;
        }

        if (num == SIZE) {
            player_win = 1;
        }
        row++;
    }

    // every diagonal
    row = 0;
    num = 0;
    while (row < SIZE) {

        if (player == board[row][row]) {
            num++;
        }

        if (num == SIZE) {
            player_win = 1;
        }
        row++;
    }

    row = 0;
    num = 0;
    while (row < SIZE) {

        if (player == board[SIZE - row - 1][row]) {
            num++;
        }

        if (num == SIZE) {
            player_win = 1;
        }
        row++;
    }

    return player_win;
}

int main(void) {
    char no_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {'X', ' ', ' ', ' ', 'O'},
    };
    
    char diagonal_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'O', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {'X', ' ', ' ', ' ', 'O'},
    };

    char other_diagonal_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'O', ' ', 'X', ' '},
        {' ', 'X', 'X', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {'X', ' ', ' ', ' ', 'O'},
    };

    char x_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {' ', 'X', ' ', ' ', 'O'},
    };
    char o_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'O', 'O', 'O', 'O'},
        {'X', 'X', ' ', ' ', 'O'},
    };

    if (did_player_win('X', x_wins_board)) {
        printf("X Won This Board!\n");
    }
    
    if (did_player_win('O', o_wins_board)) {
        printf("O Won This Board!\n");
    }
    
    if (did_player_win('O', diagonal_wins_board)) {
        printf("O Won This Board!\n");
    }

    if (did_player_win('X', other_diagonal_wins_board)) {
        printf("X Won This Board!\n");
    }

    if (did_player_win('X', no_wins_board) == 0) {
        printf("Nobody has won this board!\n");
    }
}