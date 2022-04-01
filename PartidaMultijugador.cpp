#include "PartidaMultijugador.h"

PartidaMultijugador::PartidaMultijugador(){};

PartidaMultijugador::PartidaMultijugador(DtFechaHora* fecha, int duracion, bool trasmitidaEnVivo, int cantParticipantes, Jugador* jugador):Partida(fecha, duracion, jugador){
    this->trasmitidaEnVivo = trasmitidaEnVivo;
    this->cantParticipantes = cantParticipantes;
};

void PartidaMultijugador::setTrasmitidaEnVivo(bool trasmitida){
    this->trasmitidaEnVivo = trasmitida;
};

void PartidaMultijugador::setCantParticipantes(int cantParticipantes){
    this->cantParticipantes = cantParticipantes;
};

bool PartidaMultijugador::getTransmitidaEnVivo(){
    return this->trasmitidaEnVivo;
};

int PartidaMultijugador::getCantParticipantes(){
    return this->cantParticipantes;
};

int PartidaMultijugador::darTotalHorasParticipantes(){
   int duracionP = this->getDuracion();
   int cantP =this->getCantParticipantes();
   
    return duracionP*cantP;
};

DtPartidaMultijugador* PartidaMultijugador::getDtPartidaMultijugador() {
    DtPartidaMultijugador* dtPartida = new DtPartidaMultijugador(this->getFecha(), this->getDuracion(), this->getTransmitidaEnVivo(), this->getCantParticipantes());
    return dtPartida;
}

PartidaMultijugador::~PartidaMultijugador(){};