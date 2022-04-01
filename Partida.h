#ifndef PARTIDA
#define PARTIDA

#include "DtFechaHora.h"
#include "Jugador.h"

class Partida{

    private:
        DtFechaHora* fecha;
        int duracion;
        Jugador* jugador;

    public:
        Partida();
        Partida(DtFechaHora* fecha, int duracion, Jugador* jugador);
        void setFecha(DtFechaHora* fecha);
        void setDuracion(int duracion);
        DtFechaHora* getFecha();
        int getDuracion();
        virtual int darTotalHorasParticipantes()=0;    
        ~Partida();
};


#endif