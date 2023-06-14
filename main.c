#include <stdio.h>
#include "player.h"

int menu() {
    int option;
    printf("Bienvenido al juego del laberinto!\n");
    printf("1. Jugar\n");
    printf("2. Creditos\n");
    printf("3. Salir\n");
    scanf("%d", &option);
    return option;
}

void juegoNuevo() {
    int win = 0;
    initPlayer();
    char movement;
    
    printMazePlayer();
    
    do {
        printf("Ingrese su movimiento (Con las teclas w/a/s/d): ");
        scanf(" %c", &movement);
        win = Moveplayer(movement);
        
        printMazePlayer();
        printNumMovimientos();
        
        if (win) {
            printf("Felicidades, has ganado!\n");
            checkNumMovimientos();
        }
    } while (!win);
}

int main() {
    int option;
    
    do {
        option = menu();
        
        switch (option) {
            case 1:
                printf("Bienvenido al Laberinto\n");
                juegoNuevo();
                break;
            case 2:
                printf("Creditos\n");
                printf("Realizado por: Sebastian Potosi\n");
                break;
            case 3:
                printf("Salir\n");
                break;
            default:
                printf("Opcion incorrecta\n");
        } 
    } while (option != 3);
        
    return 0;
}