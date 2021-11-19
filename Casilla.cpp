#include "Casilla.hpp"

Casilla::Casilla(){

}

Casilla::Casilla(bool esBomba, bool descubierta, bool marcada, char display){
    this->esBomba = esBomba;
    this->descubierta = descubierta;
    this->marcada = marcada;
    this->display = display;
}

void Casilla::set_esBomba(bool x){
    this->esBomba = x;
}

bool Casilla::get_esBomba(){
    return this->esBomba;
}

void Casilla::set_descubierta(bool x){
    this->descubierta = x;
}

bool Casilla::get_descubierta(){
    return this->descubierta;
}

void Casilla::set_marcada(bool x){
    this->marcada = x;
}

bool Casilla::get_marcada(){
    return this->marcada;
}

void Casilla::set_display(char x){
    this->display = x;
}

char Casilla::get_display(){
    return this->display;
}