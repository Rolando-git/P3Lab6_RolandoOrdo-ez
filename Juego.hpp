#pragma once
#include "Casilla.hpp"
#include "Tablero.hpp"

class Juego{
    Tablero* tablero_del_juego;
    public:
        Juego();
        Juego(Tablero*);
        void Jugar();
};