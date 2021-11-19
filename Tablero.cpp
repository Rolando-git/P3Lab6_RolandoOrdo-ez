#include "Tablero.hpp"

Tablero::Tablero(){

}

Tablero::Tablero(int dificultad){
    srand(time(NULL));
    if(dificultad == 1){
        this->size = 8;
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
                matriz[i][j].set_esBomba(false);
                matriz[i][j].set_descubierta(false);
                matriz[i][j].set_marcada(false);
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
        this->size = 10;
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
                matriz[i][j].set_esBomba(false);
                matriz[i][j].set_descubierta(false);
                matriz[i][j].set_marcada(false);
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
        this->size = 12;
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
                matriz[i][j].set_esBomba(false);
                matriz[i][j].set_descubierta(false);
                matriz[i][j].set_marcada(false);
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

int Tablero::getSize(){
    return this->size;
}

void Tablero::imprimirBombas(int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(matriz[i][j].get_esBomba() == true){
                cout << "[ " << "#" << " ]";
            }else{
                cout << "[  ]";
            }
        }
        cout << "\n";
    }
}

void Tablero::marcarCasilla(int x, int y){
    matriz[x][y].set_marcada(true);
    matriz[x][y].set_display('x');
}

bool Tablero::destaparCasilla(int x, int y){
    bool temp = matriz[x][y].get_esBomba();
    matriz[x][y].set_descubierta(true);
    return temp;
}

int Tablero::calcularBombas(){
    /*ya se que este era para calcular la bombas al rededor
    pero no se me ocurio ninguna forma de hacerlo, asi que use el
    metodo para contar cuantas bombas hay en la matriz y asi saber si todas estan
    todas las casillas destapadas menos la de bombas*/
    int bombas = 0;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(matriz[i][j].get_esBomba() == true){
                bombas++;
            }
        }
    }
    return bombas;
}