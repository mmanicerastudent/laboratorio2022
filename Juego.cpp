#include "Juego.h"

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
    int cantP;
    int totalHorasJuego = 0;
    Partida** partidas = this->getPartidas(cantP);

    for (int i = 0; i < cantP; i++)
    {
        totalHorasJuego = totalHorasJuego+partidas[i]->darTotalHorasParticipantes();
    } 
    
    DtJuego* dtJuego = new DtJuego(this->getNombre(), this->getGenero(), totalHorasJuego);
    return dtJuego;
}
void Juego::addPartida(Partida* partida) {
    this->partidas[this->tope] = partida;
    this-> tope++;
}

Partida** Juego::getPartidas(int& cantPartidas) {
    cantPartidas = this->tope;
    return this->partidas;
}