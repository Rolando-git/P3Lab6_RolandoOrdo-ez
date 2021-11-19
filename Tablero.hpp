#pragma once
#include "Casilla.hpp"

class Tablero{
    Casilla** matriz;
    public:
        Tablero();
        Tablero(int);
        ~Tablero();
};