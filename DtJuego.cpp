#include "DtJuego.h"

DtJuego::DtJuego(){}
DtJuego::DtJuego(string nombre, TipoGenero genero, int totalHorasJuego){
    this->nombre = nombre;
    this->genero = genero;
    this->totalHorasJuego = totalHorasJuego;
}

string DtJuego::getNombre() {
    return this->nombre;
}

void DtJuego::setNombre(string nombre) {
    this->nombre = nombre;
}

TipoGenero DtJuego::getTipoGenero() {
    return this->genero;
}

void DtJuego::setTipoGenero(TipoGenero genero) {
    this->genero = genero;
}

int DtJuego::getTotalHorasJuegos() {
    return this->totalHorasJuego;
}

void DtJuego::setTotalHorasJuegos(int totalHorasJuego) {
    this->totalHorasJuego = totalHorasJuego;
}

string DtJuego::traducirGenero(){
    
    switch(this->genero){
        case 0:
            return "ACCION";
        case 1:
            return "AVENTURA";
        case 2:
            return "DEPORTE";
        case 3:
            return "OTRO";
        default:
            return "No genero";
    }
}