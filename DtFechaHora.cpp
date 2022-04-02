#include "DtFechaHora.h"
#include <stdexcept>

using namespace std;

DtFechaHora::DtFechaHora(){};
DtFechaHora::DtFechaHora(int dia, int mes, int anio, int hora, int minuto){
    if(dia > 31 || dia < 1 || mes > 12 || mes < 1 || anio < 1900) {
        throw invalid_argument("Fecha invalida");
    }
    if(hora > 23 || hora < 0 || minuto > 59 || minuto < 0) {
        throw invalid_argument("Hora invalida");
    }

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