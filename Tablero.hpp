#pragma once
#include<iostream>
#include <time.h>
#include <stdlib.h>
#include "Casilla.hpp"
using std::cout;

class Tablero{
    Casilla** matriz;
    public:
        Tablero();
        Tablero(int);
        Casilla** getMatriz();
        ~Tablero();
        void imprimirBombas(int);
};