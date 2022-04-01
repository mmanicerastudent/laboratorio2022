#include "DtPartidaMultijugador.h"

DtPartidaMultijugador::DtPartidaMultijugador(){};

DtPartidaMultijugador::DtPartidaMultijugador(DtFechaHora* fecha, int duracion, bool trasmitidaEnVivo, int cantParticipantes):DtPartida(fecha, duracion){
    this->trasmitidaEnVivo = trasmitidaEnVivo;
    this->cantParticipantes = cantParticipantes;
};

bool DtPartidaMultijugador::getTransmitidaEnVivo(){
    return this->trasmitidaEnVivo;
};

int DtPartidaMultijugador::getCantParticipantes(){
    return this->cantParticipantes;
};

int DtPartidaMultijugador::darTotalHorasParticipantes(){
    // todo
    return 0;
};

DtPartidaMultijugador::~DtPartidaMultijugador(){};