#include "Sistema.h"
#include <stdexcept>

using namespace std;

Sistema::Sistema() {
    this->cantJugadores = 0;
    this->cantJuegos = 0;   
}

void Sistema::agregarJugador(string nickname, int edad, string password){
    Jugador* jugador = new Jugador(nickname, edad, password);

    for(int i = 0; i < this->cantJugadores; i++) {
        if(this->jugadores[i]->getNickname() == nickname) {
            throw invalid_argument("Ya existe un jugador con este nickname.");
        }
    }

    this->jugadores[this->cantJugadores] = jugador;
    this->cantJugadores++;    
}

DtJugador** Sistema::obtenerJugadores(int& cantJugadores) {
    DtJugador** dtJugadores = new DtJugador*[this->cantJugadores];

    for(int i = 0; i < this->cantJugadores; i++) {
        DtJugador* dtJugador = this->jugadores[i]->getDtJugador();
        dtJugadores[i] = dtJugador;
    }

    cantJugadores = this->cantJugadores;
    return dtJugadores;
}

void Sistema::agregarVideojuego(string nombre, TipoGenero genero) {
    Juego* juego = new Juego(nombre, genero);

    for(int i = 0; i < this->cantJuegos; i++) {
        if(this->juegos[i]->getNombre() == nombre) {
            throw invalid_argument("Ya existe un videojuego con este nombre.");
        }
    }

    this->juegos[this->cantJuegos] = juego;
    this->cantJuegos++;
}



DtJuego** Sistema::obtenerVideoJuegos(int& cantidadVideoJuegos){
     DtJuego** dtJuegos = new DtJuego*[this->cantJuegos];

    for(int i = 0; i < this->cantJuegos; i++) {
        DtJuego* dtJuego = this->juegos[i]->getDtJuego();
        dtJuegos[i] = dtJuego;
    }

    cantidadVideoJuegos = this->cantJuegos;
    return dtJuegos;

}

void Sistema::iniciarPartida(string nickname, string videojuego, DtPartida* datos){} 

Jugador* Sistema::buscarJugador(string nickname){
    for(int i = 0; i < this->cantJugadores; i++) {
        if(this->jugadores[i]->getNickname() == nickname) {
            return this->jugadores[i];
        };           
    };
    throw invalid_argument("No existe un jugador con este nickname.");
}

Juego* Sistema::buscarJuego(string videojuego){
     for(int i = 0; i < this->cantJuegos; i++) {
        if(this->juegos[i]->getNombre() == videojuego) {
            return this->juegos[i];
        };
    };
    throw invalid_argument("No existe un juego con este nombre.");
}