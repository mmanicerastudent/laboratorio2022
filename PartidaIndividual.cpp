#include "PartidaIndividual.h"

        PartidaIndividual::PartidaIndividual(){};
        PartidaIndividual::PartidaIndividual(DtFechaHora fecha, int duracion, bool continuaPartidaAnterior):Partida(fecha, duracion){
            this->continuaPartidaAnterior = continuaPartidaAnterior;
        };

        void PartidaIndividual::setContinuaPartidaAnterior(bool continua){
            this->continuaPartidaAnterior = continua;
        };
        bool PartidaIndividual::getContinuaPartidaAnterior(){
            return this->continuaPartidaAnterior;
        };
        int PartidaIndividual::darTotalHorasParticipantes(){};

        PartidaIndividual::~PartidaIndividual(){};