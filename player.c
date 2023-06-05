#include "player.h"
#include "maze.h"
#include <stdio.h>

int filajugadores;
int colujugadores;
int contadormovi;
// Declaro las variables desde 0 ya que inicia desde un punto el juego, y tambien declaro un contador que va a contar los movimientos hecho 

void Iniciojugador() {
    filajugadores = 0;
   colujugadores = 0;
    contadormovi = 0;
}
//Aqui declaro los movimientos tanto de columnas como de filas y su direccion 
void moveJugador(char direction) {
    if (isValidMove(filajugadores, colujugadores, direction)) {
        if (direction == 'W')
           filajugadores--;
        else if (direction == 'S')
            filajugadores++;
        else if (direction == 'A')
           colujugadores--;
        else if (direction == 'D')
           colujugadores++;
       contadormovi++;
    }
    else {
        printf("Movimiento invalido. Intentalo de nuevo.\n");
    }
}

int Ganador() {
    return (filajugadores == FILAS - 1 && colujugadores == COLU - 1);
}

// El void de aqui ayuda a imprimir el resultado final 

void ResultadoFinal() {
    printf("Ganaste!\n");
    if (contadormovi <= 8)
        printf("Eres un Capo!\n");
    else if (contadormovi<= 15)
        printf("Eres una persona comun.\n");
    else
        printf("Eres un Quedado :) !\n");
}