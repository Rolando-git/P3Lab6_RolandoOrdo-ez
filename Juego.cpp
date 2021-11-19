#include "Juego.hpp"

Juego::Juego(){

}

Juego::Juego(Tablero* tablero_Bombas){
    this->tablero_del_juego = tablero_Bombas;
}

void Juego::Jugar(){
    Casilla** matriz = tablero_del_juego->getMatriz();
    bool finJuego = false;
    int size = tablero_del_juego->getSize();
    tablero_del_juego->imprimirBombas(size);
}