#include "Jugador.h"

Jugador::Jugador() {}
Jugador::Jugador(string nickname, int edad, string password) {
    this->nickname = nickname;
    this->edad = edad;
    this->password = password;
}

string Jugador::getNickname() {
    return this->nickname;
}

void Jugador::setNickname(string nickname) {
    this->nickname = nickname;
}

int Jugador::getEdad() {
    return this->edad;
}

void Jugador::setEdad(int edad) {
    this->edad = edad;
}

string Jugador::getPassword() {
    return this->password;
}

void Jugador::setPassword(string password) {
    this->password = password;
}