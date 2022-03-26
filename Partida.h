#ifndef PARTIDA
#define PARTIDA
#include "DtFechaHora.h"

class Partida{

    private:
        DtFechaHora fecha;
        int duracion;

    public:
        Partida();
        Partida(DtFechaHora fecha, int duracion);
        void setFecha(DtFechaHora fecha);
        void setDuracion(int duracion);
        DtFechaHora getFecha();
        int getDuracion();
        ~Partida();

    virtual int darTotalHorasParticipantes()=0;

    

};


#endif