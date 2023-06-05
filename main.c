#include <stdio.h>
#include "maze.h"
#include "player.h"

void juegoNuevo() {
    Iniciojugador();
    printf("Bienvenido al Laberinto de Juegos\n");
    printf("Elige una de las siguientes opciones:\n");
    printf("1. Jugar\n");
    printf("2. Creditos\n");
    printf("3. Salir\n");

    int opcion;
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Comenzando el juego...\n");
            break;
        case 2:
            printf("Creditos:\n");
            printf("Desarrollado por: Isaac Jesus - NRC: 3065\n");
            break;
        case 3:
            printf("Saliendo del juego. Hasta luego\n");
            return;
        default:
            printf("Opcion invalida. Por favor, elige una opcion valida.\n");
            juegoNuevo();
            return;
    }

    // Logica del juego
    while (!Ganador()) {
        int movesCount; 
        printMaze();
        printf("Movimientos: %d\n", movesCount);
        printf("Elige tu siguiente movimiento (WASD): ");
        char movimiento;
        scanf(" %c", &movimiento);
        movePlayer(movimiento);
        printf("\n");
    }

     ResultadoFinal();

    // Regresar al menu principal
    juegoNuevo();
}

int main() {
    juegoNuevo();

    return 0;
}