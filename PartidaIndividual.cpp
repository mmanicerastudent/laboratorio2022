#include "PartidaIndividual.h"

PartidaIndividual::PartidaIndividual(){};

PartidaIndividual::PartidaIndividual(DtFechaHora* fecha, int duracion, bool continuaPartidaAnterior, Jugador* jugador):Partida(fecha, duracion, jugador){
    this->continuaPartidaAnterior = continuaPartidaAnterior;
};

void PartidaIndividual::setContinuaPartidaAnterior(bool continua){
    this->continuaPartidaAnterior = continua;
};

bool PartidaIndividual::getContinuaPartidaAnterior(){
    return this->continuaPartidaAnterior;
};

int PartidaIndividual::darTotalHorasParticipantes(){
    return 0;
};

DtPartidaIndividual* PartidaIndividual::getDtPartidaIndividual() {
    DtPartidaIndividual* dtPartida = new DtPartidaIndividual(this->getFecha(), this->getDuracion(), this->getContinuaPartidaAnterior());
    return dtPartida;
}

PartidaIndividual::~PartidaIndividual(){};