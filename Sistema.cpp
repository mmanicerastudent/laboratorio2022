#include "Sistema.h"

#define MAX_JUGADORES 30
#define MAX_VIDEOJUEGOS 30
#define MAX_PARTIDAS 100

struct Jugadores {
    Jugador* j[MAX_JUGADORES];
    int cant;
} colJugadores;

Sistema::Sistema() {
    colJugadores.cant = 0;
}

void Sistema::agregarJugador(string nickname, int edad, string password){
    Jugador* jugador = new Jugador(nickname, edad, password);
    colJugadores.j[colJugadores.cant] = jugador;
    colJugadores.cant++;
}

DtJugador** Sistema::obtenerJugadores(int& cantJugadores) {
    DtJugador** dtJugadores = new DtJugador*[colJugadores.cant];

    for(int i = 0; i < colJugadores.cant; i++) {
        DtJugador* dtJugador = colJugadores.j[i]->getDtJugador();
        dtJugadores[i] = dtJugador;
    }

    cantJugadores = colJugadores.cant;
    return dtJugadores;
}
