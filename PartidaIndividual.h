#ifndef PARTIDAINDIVIDUAL
#define PARTIDAINDIVIDUAL
#include "Partida.h"
#include "DtPartidaIndividual.h"

class PartidaIndividual:public Partida{
    private:
        bool continuaPartidaAnterior;
    public:
        PartidaIndividual();
        PartidaIndividual(DtFechaHora* fecha, int duracion, bool continuaPartidaAnterior, Jugador* jugador);
        void setContinuaPartidaAnterior(bool continua);
        bool getContinuaPartidaAnterior();
        int darTotalHorasParticipantes();
        DtPartidaIndividual* getDtPartidaIndividual();
        ~PartidaIndividual();
};

#endif