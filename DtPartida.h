#ifndef DTPARTIDA
#define DTPARTIDA
#include "DtFechaHora.h"

class DtPartida{
    private:
        DtFechaHora* fecha;
        int duracion;
    public:
        DtPartida();
        DtPartida(DtFechaHora* fecha, int duracion);
        DtFechaHora* getFecha();
        int getDuracion();
        virtual ~DtPartida() = 0; // si no hago al menos una funcion virtual da error al usar dynamic_cast
};

#endif