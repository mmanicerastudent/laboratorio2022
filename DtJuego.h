#ifndef DTJUEGO
#define DTJUEGO
#include <string>
#include <TipoGenero.h>

using namespace std;

class DtJuego {
    private:
        string nombre;
        TipoGenero genero;
        int totalHorasJuego;
    public:
        DtJuego();
        DtJuego(string nombre, TipoGenero genero, int totalHorasJuego);
        void setNombre(string nombre);
        string getNombre();
        void setTipoGenero(TipoGenero genero);
        TipoGenero getTipoGenero();
        void setTotalHorasJuegos(int totalHorasJuego);
        int getTotalHorasJuegos();  
        ~DtJuego();
};

#endif 