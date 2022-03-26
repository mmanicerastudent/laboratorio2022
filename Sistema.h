#ifndef SISTEMA
#define SISTEMA
#include <string>

#include "DtJugador.h"
#include "Jugador.h"

using namespace std;

class Sistema {
    private:

    public:
        Sistema();
        void agregarJugador(string nickname, int edad, string password);
        DtJugador** obtenerJugadores(int& cantJugadores);
        ~Sistema();
};

#endif