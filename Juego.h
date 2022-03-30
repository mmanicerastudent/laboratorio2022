#ifndef JUEGO
#define JUEGO

#include <string>
#include "TipoGenero.h"
#include "DtJuego.h"
#include "Partida.h"

using namespace std;

class Juego {
    private:
        string nombre;
        TipoGenero genero;
        Partida* partidas[50];
        int tope=0;
    public:
        Juego();
        Juego(string nombre, TipoGenero genero);
        void setNombre(string nombre);
        string getNombre();
        void setGenero(TipoGenero genero);
        TipoGenero getGenero();
        DtJuego* getDtJuego();
        void addPartida(Partida* partida);
        Partida** getPartidas(int& cantPartidas);
        ~Juego();
};

#endif