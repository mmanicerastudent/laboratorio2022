#include "DtFechaHora.h"

DtFechaHora::DtFechaHora(){};
DtFechaHora::DtFechaHora(int dia, int mes, int anio, int hora, int minuto){
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
    this->hora = hora;
    this->minuto = minuto;
};

int DtFechaHora::getDia(){
    return this->dia;
};

int DtFechaHora::getMes(){
    return this->mes;
};
int DtFechaHora::getAnio(){
    return this->anio;
};
int DtFechaHora::getHora(){
    return this->hora;
};
int DtFechaHora::getMinuto(){
    return this->minuto;
};

DtFechaHora::~DtFechaHora(){}