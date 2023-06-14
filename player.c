
#include "maze.h"
#include <stdio.h>

int x, y, numeroMov;

void initPlayer() {
    x = 0;
    y = 0;
    numeroMov = 0;
}

int checkWin() {
    if (x == 4 && y == 4) {
        return 1;
    } else {
        return 0;
    }
}

int Moveplayer(char movement) {
    int isValidMove = 0;
    
    switch (movement) {
        case 'w':
            if (isvalidmovement(x, y - 1)) {
                y--;
                isValidMove = 1;
            }
            break;
        case 's':
            if (isvalidmovement(x, y + 1)) {
                y++;
                isValidMove = 1;
            }
            break;
        case 'a':
            if (isvalidmovement(x - 1, y)) {
                x--;
                isValidMove = 1;
            }
            break;
        case 'd':
            if (isvalidmovement(x + 1, y)) {
                x++;
                isValidMove = 1;
            }
            break;
        default:
            printf("Movimiento invalido\n");
            break;
    }

    if (isValidMove) {
        numeroMov++;
    }

    return checkWin();
}

void printMazePlayer() {
    printMaze(x, y);
}

void printNumMovimientos() {
    printf("Movimientos: %d\n", numeroMov);
}

void checkNumMovimientos() {
    if (numeroMov <= 8) {
        printf("Eres un pro!\n");
    } else if (numeroMov <= 15) {
        printf("Eres un novato!\n");
    } else {
        printf("Eres un noob!\n");
    }
}
