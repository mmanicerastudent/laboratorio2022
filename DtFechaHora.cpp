#include "DtFechaHora.h"
#include <stdexcept>

using namespace std;

DtFechaHora::DtFechaHora(){}
DtFechaHora::DtFechaHora(int dia, int mes, int anio, int hora, int minuto){
    this->setDia(dia);
    this->setMes(mes);
    this->setAnio(anio);
    this->setHora(hora);
    this->setMinuto(minuto);
}

int DtFechaHora::getDia(){
    return this->dia;
}

void DtFechaHora::setDia(int dia){
    if(dia < 1 || dia > 31) {
        throw invalid_argument("Día inválido");
    }
    this->dia = dia;
}

int DtFechaHora::getMes(){
    return this->mes;
}

void DtFechaHora::setMes(int mes){
    if(mes < 1 || mes > 12) {
        throw invalid_argument("Mes inválido");
    }
    this->mes = mes;
}

int DtFechaHora::getAnio(){
    return this->anio;
}

void DtFechaHora::setAnio(int anio){
    if(anio < 1900) {
        throw invalid_argument("Año inválido");
    }
    this->anio = anio;
}

int DtFechaHora::getHora(){
    return this->hora;
}

void DtFechaHora::setHora(int hora){
    if(hora < 0 || hora > 23) {
        throw invalid_argument("Hora inválido");
    }
    this->hora = hora;
}

int DtFechaHora::getMinuto(){
    return this->minuto;
}

void DtFechaHora::setMinuto(int minuto){
    if(minuto < 0 || minuto > 59) {
        throw invalid_argument("Minuto inválido");
    }
    this->minuto = minuto;
}
