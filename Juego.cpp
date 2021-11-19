#include "Juego.hpp"

Juego::Juego(){

}

Juego::Juego(Tablero* tablero_Bombas){
    this->tablero_del_juego = tablero_Bombas;
}

void Juego::Jugar(){
    Casilla** matriz = tablero_del_juego->getMatriz();
    bool finJuego = false;
    int size = tablero_del_juego->getSize();
    int bombas = tablero_del_juego->calcularBombas();//cantidad de bombas en el tablero
    int casillas = (size*size) - bombas;
    int s = 0;
    tablero_del_juego->imprimirBombas(size);
    while(finJuego == false){
        char x;
        int fila = 0, columna = 0;
        cout << "Ingrese posicion:" << endl;
        cin >> fila;
        cin >> columna;
        cout << "Marcar o destapar?" << endl;
        cout << "a.Marcar" << endl;
        cout << "b.destapar" << endl;
        cin >> x;
        switch(x){
            case 'a':
                tablero_del_juego->marcarCasilla(fila,columna);
            break;
            case 'b':
                finJuego = tablero_del_juego->destaparCasilla(fila,columna);
                if(finJuego == true){
                    cout << "se acabo el juego" << endl;
                }else{
                    s++;
                }
            break;
            default: cout << "Error" << endl;
        }
        if(s == casillas){
            finJuego = true;
            cout << "haz destapado todas las casillas sin bombas" << endl;
        }
    }
}