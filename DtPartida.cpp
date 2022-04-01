#include "DtPartida.h"

DtPartida::DtPartida(){};
DtPartida::DtPartida(DtFechaHora* fecha, int duracion){
    this->fecha = fecha;
    this->duracion = duracion;
};

DtFechaHora* DtPartida::getFecha(){
    return this->fecha;
};

int DtPartida::getDuracion(){
    return this->duracion;
};

DtPartida::~DtPartida(){};