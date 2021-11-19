#pragma once
#include <iostream>
#include "Casilla.hpp"
#include "Tablero.hpp"
using std::cin;
using std::cout;
using std::endl;

class Juego{
    Tablero* tablero_del_juego;
    public:
        Juego();
        Juego(Tablero*);
        void Jugar();
};