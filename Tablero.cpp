#include "Tablero.hpp"

Tablero::Tablero(){

}

Tablero::Tablero(int dificultad){
    if(dificultad == 1){
        matriz = new Casilla*[8];
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                matriz[i] = new Casilla[8];
            }
        }
        // llenar matriz
    }
    if(dificultad == 2){
        matriz = new Casilla*[10];
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                matriz[i] = new Casilla[10];
            }
        }
        // llenar matriz
    }
    if(dificultad == 3){
        matriz = new Casilla*[12];
        for(int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){
                matriz[i] = new Casilla[12];
            }
        }
        // llenar matriz
    }
}

Tablero::~Tablero(){
    delete[] matriz;
}