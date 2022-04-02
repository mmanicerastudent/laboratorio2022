#ifndef SISTEMA
#define SISTEMA
#include <string>

#include "Jugador.h"
#include "DtJuego.h"
#include "Juego.h"
#include "DtPartidaMultijugador.h"
#include "PartidaMultijugador.h"
#include "DtPartidaIndividual.h"
#include "PartidaIndividual.h"

#define MAX_JUGADORES 30
#define MAX_VIDEOJUEGOS 30
#define MAX_PARTIDAS 100

#define MAX_NICKNAME 15
#define MAX_EDAD 3

using namespace std;

class Sistema {
    private:
        Jugador* jugadores[MAX_JUGADORES];
        int cantJugadores;
        Juego* juegos[MAX_VIDEOJUEGOS];
        int cantJuegos;

    public:
        Sistema();
        void agregarJugador(string nickname, int edad, string password);
        DtJugador** obtenerJugadores(int& cantJugadores);
        void agregarVideojuego(string nombre, TipoGenero genero);
        DtJuego** obtenerVideoJuegos(int& cantVideojuegos);
        void iniciarPartida(string nickname, string videojuego, DtPartida* datos);
        DtPartida** obtenerPartidas(string videojuego, int &cantPartidas);
        Jugador* buscarJugador(string nickname);
        Juego* buscarJuego(string videojuego);
        void printSuccess(string text);
        void printError(string text);
        DtFechaHora* fechaHoraActual();
        void printJugadores(DtJugador** jugadores, int cant);
        ~Sistema();
};

#endif