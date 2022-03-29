#include "Juego.h"
#include "DtJuego.h"

Juego::Juego(){}
Juego::Juego(string nombre, TipoGenero genero){
    this->nombre = nombre;
    this->genero = genero;
}

string Juego::getNombre() {
    return this->nombre;
}

void Juego::setNombre(string nombre) {
    this->nombre = nombre;
}

TipoGenero Juego::getGenero() {
    return this->genero;
}

void Juego::setGenero(TipoGenero genero) {
    this->genero = genero;
}

DtJuego* Juego::getDtJuego() {
    //agregar las horas y no dejar el cero
    DtJuego* dtJuego = new DtJuego(this->getNombre(), this->getGenero(), 0);
    return dtJuego;
}
