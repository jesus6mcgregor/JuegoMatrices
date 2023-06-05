#ifndef MAZE_H
#define MAZE_H

#define FILAS 5
#define COLU 5

// Aqui le llamo ala funcion que ya tengo hecho en el maze.c y de igual manera para validar los movimientos

void printMaze();
int ValidMove(int filas, int columnas, char direccion);

#endif  // MAZE_H