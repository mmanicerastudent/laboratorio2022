#ifndef DTPARTIDA
#define DTPARTIDA
#include "DtFechaHora.h"

class DtPartida{
    private:
        DtFechaHora fecha;
        int duracion;
    public:
        DtPartida();
        DtPartida(DtFechaHora fecha, int duracion);
        DtFechaHora getFecha();
        void setFecha(DtFechaHora fecha);
        int getDuracion();
        void setDuracion(int duracion);
        ~DtPartida();
};

#endif