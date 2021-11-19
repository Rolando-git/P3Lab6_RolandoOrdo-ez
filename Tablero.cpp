#include "Tablero.hpp"

Tablero::Tablero(){

}

Tablero::Tablero(int dificultad){
    srand(time(NULL));
    if(dificultad == 1){
        matriz = new Casilla*[8];
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                matriz[i] = new Casilla[8];
            }
        }
        // llenar matriz
        int bombas = 12;
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                if(bombas != 0){
                    int random_1 = rand() % 2 + 0;
                    int random_2 = rand() % 2 + 0;
                    if(random_1 == random_2){
                        matriz[i][j].set_esBomba(true);
                        bombas--;
                    }
                }
            }
        }
    }
    if(dificultad == 2){
        matriz = new Casilla*[10];
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                matriz[i] = new Casilla[10];
            }
        }
        // llenar matriz
        int bombas = 25;
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                if(bombas != 0){
                    int random_1 = rand() % 2 + 0;
                    int random_2 = rand() % 2 + 0;
                    if(random_1 == random_2){
                        matriz[i][j].set_esBomba(true);
                        bombas--;
                    }
                }
            }
        }
    }
    if(dificultad == 3){
        matriz = new Casilla*[12];
        for(int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){
                matriz[i] = new Casilla[12];
            }
        }
        // llenar matriz
        int bombas = 43;
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                if(bombas != 0){
                    int random_1 = rand() % 2 + 0;
                    int random_2 = rand() % 2 + 0;
                    if(random_1 == random_2){
                        matriz[i][j].set_esBomba(true);
                        bombas--;
                    }
                }
            }
        }
    }
}

Casilla** Tablero::getMatriz(){
    return this->matriz;
}

Tablero::~Tablero(){
    delete[] matriz;
}