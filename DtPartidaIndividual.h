#ifndef DTPARTIDAINDIVIDUAL
#define DTPARTIDAINDIVIDUAL
#include "DtPartida.h"


class DtPartidaIndividual:public DtPartida{

    private:
        bool continuaPartidaAnterior;
    public:
        DtPartidaIndividual();
        DtPartidaIndividual(DtFechaHora* fecha, int duracion, bool continuaPartidaAnterior); 
        bool getContinuaPartidaAnterior();
        ~DtPartidaIndividual();

};

#endif