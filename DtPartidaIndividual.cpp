#include "DtPartidaIndividual.h"

DtPartidaIndividual::DtPartidaIndividual(){};

DtPartidaIndividual::DtPartidaIndividual(DtFechaHora* fecha, int duracion, bool continuaPartidaAnterior):DtPartida(fecha, duracion){
    this->continuaPartidaAnterior = continuaPartidaAnterior;
};

bool DtPartidaIndividual::getContinuaPartidaAnterior(){
    return this->continuaPartidaAnterior;
};

DtPartidaIndividual::~DtPartidaIndividual(){};