#ifndef SISTEMA
#define SISTEMA
#include <string>

#include "Jugador.h"
#include "Juego.h"

using namespace std;

class Sistema {
    private:

    public:
        Sistema();
        void agregarJugador(string nickname, int edad, string password);
        DtJugador** obtenerJugadores(int& cantJugadores);
        void agregarVideojuego(string nombre, TipoGenero genero);
        ~Sistema();
};

#endif