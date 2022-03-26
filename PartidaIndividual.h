#ifndef PARTIDAINDIVIDUAL
#define PARTIDAINDIVIDUAL
#include "Partida.h"


class PartidaIndividual:public Partida{

    private:
        bool continuaPartidaAnterior;
    public:
        PartidaIndividual();
        PartidaIndividual(DtFechaHora fecha, int duracion, bool continuaPartidaAnterior);
        void setContinuaPartidaAnterior(bool continua);
        bool getContinuaPartidaAnterior();
        int darTotalHorasParticipantes();
        ~PartidaIndividual();

};

#endif