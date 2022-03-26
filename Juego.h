#ifndef JUEGO
#define JUEGO

#include <string>
#include "TipoGenero.h"

using namespace std;

class Juego {
    private:
        string nombre;
        TipoGenero genero;
    public:
        Juego();
        Juego(string nombre, TipoGenero genero);
        void setNombre(string nombre);
        string getNombre();
        void setGenero(TipoGenero genero);
        TipoGenero getGenero();
        ~Juego();
};

#endif