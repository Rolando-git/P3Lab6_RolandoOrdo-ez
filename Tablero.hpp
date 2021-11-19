#pragma once
#include <time.h>
#include <stdlib.h>
#include "Casilla.hpp"

class Tablero{
    Casilla** matriz;
    public:
        Tablero();
        Tablero(int);
        Casilla** getMatriz();
        ~Tablero();
};