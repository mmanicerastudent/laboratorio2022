#include "Sistema.h"
#include <stdexcept>

using namespace std;

#define MAX_JUGADORES 30
#define MAX_VIDEOJUEGOS 30
#define MAX_PARTIDAS 100

struct Jugadores {
    Jugador* j[MAX_JUGADORES];
    int cant;
} colJugadores;

struct Juegos {
    Juego* j[MAX_VIDEOJUEGOS];
    int cant;
} colJuegos;

Sistema::Sistema() {
    colJugadores.cant = 0;
}

void Sistema::agregarJugador(string nickname, int edad, string password){
    Jugador* jugador = new Jugador(nickname, edad, password);

    for(int i = 0; i < colJugadores.cant; i++) {
        if(colJugadores.j[i]->getNickname() == nickname) {
            throw invalid_argument("Ya existe un jugador con este nickname.");
        }
    }

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

void Sistema::agregarVideojuego(string nombre, TipoGenero genero) {
    Juego* juego = new Juego(nombre, genero);

    for(int i = 0; i < colJuegos.cant; i++) {
        if(colJuegos.j[i]->getNombre() == nombre) {
            throw invalid_argument("Ya existe un videojuego con este nombre.");
        }
    }

    colJuegos.j[colJuegos.cant] = juego;
    colJuegos.cant++;
}
