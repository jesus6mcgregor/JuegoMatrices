#include "maze.h"
#include <stdio.h>
#define COLU 5
#define FILAS 5

int maze[COLU][FILAS] = {
    {0, 1, 0, 0, 0},
    {0, 1, 1, 1, 0},
    {0, 0, 1, 0, 0},
    {1, 0, 0, 1, 1},
    {0, 0, 0, 0, 0}
};
// Aqui utilizo un void donde imprimo y leo la matriz 
void printMaze() {
    for (int i = 0; i < COLU; i++) {
        for (int j = 0; j < FILAS; j++) {
            if (maze[i][j] == 0)
                printf(" ");
            else
                printf("1");
        }
        printf("\n");
    }
}
// Aqui declaro que los movimientos que realizan sean validos, que no se salga de la estructura del laberinto
int ValidMove(int filas, int columnas, char direccion) {
    if (direccion == 'W') {
        if (filas > 0 && maze[filas - 1][columnas] == 0)
            return 1;
    }
    else if (direccion == 'S') {
        if (filas < FILAS - 1 && maze[filas + 1][columnas] == 0)
            return 1;
    }
    else if (direccion == 'A') {
        if (columnas > 0 && maze[filas][columnas - 1] == 0)
            return 1;
    }
    else if (direccion == 'D') {
        if (columnas < COLU - 1 && maze[filas][columnas + 1] == 0)
            return 1;
    }
    return 0;
}