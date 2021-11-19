#include <iostream>
#include "Casilla.hpp"
#include "Tablero.hpp"
#include "Juego.hpp"
using std::cin;
using std::cout;
using std::endl;
using std::string;

int menu();
void op1();

int main(){
    int opcion = menu();
    while(opcion != 2){
        switch(opcion){
            case 1:
                op1();
            break;
            default: cout << "Error, opcion no valida" << endl;
        }
        opcion = menu();
    }
    return 0;
}

int menu(){
    int opcion = 0;
    cout << "MENU" << endl;
    cout << "1.Busca Minas" << endl;
    cout << "2.Salir" << endl;
    cin >> opcion;
    return opcion;
}

void op1(){
    int dificultad = 0;
    cout << "Seleccione dificultad" << endl;
    cout << "1.Facil" << endl;
    cout << "2.Medio" << endl;
    cout << "3.Dificil" << endl;
    cin >> dificultad;
    switch(dificultad){
        case 1:
        {
            Tablero* t = new Tablero(dificultad);
        }
        break;
        case 2:
        {
            Tablero* t = new Tablero(dificultad);
        }
        break;
        case 3:
        {
            Tablero* t = new Tablero(dificultad);
        }
        break;
        default: cout << "Error" << endl;
    }
}