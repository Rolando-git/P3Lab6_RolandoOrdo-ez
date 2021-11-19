#pragma once

class Casilla{
    bool esBomba, descubierta, marcada;
    char display;
    public:
        Casilla();
        Casilla(bool, bool, bool, char);
        void set_esBomba(bool);
        bool get_esBomba();
        void set_descubierta(bool);
        bool get_descubierta();
        void set_marcada(bool);
        bool get_marcada();
        void set_display(char);
        char get_display();
};