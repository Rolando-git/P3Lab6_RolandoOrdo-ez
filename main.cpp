#include <iostream>
#include "Casilla.hpp"
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

}