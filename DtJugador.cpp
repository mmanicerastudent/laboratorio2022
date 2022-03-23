#include "DtJugador.h"

DtJugador::DtJugador() {}
DtJugador::DtJugador(string nickname, int edad) {
    this->nickname = nickname;
    this->edad = edad;
}

string DtJugador::getNickname() {
    return this->nickname;
}

void DtJugador::setNickname(string nickname) {
    this->nickname = nickname;
}

int DtJugador::getEdad() {
    return this->edad;
}

void DtJugador::setEdad(int edad) {
    this->edad = edad;
}