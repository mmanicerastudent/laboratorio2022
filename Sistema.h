#ifndef SISTEMA
#define SISTEMA
#include <string>

#include "Jugador.h"
#include "Juego.h"
#include "DtPartida.h"
#include "DtJuego.h"

#define MAX_JUGADORES 30
#define MAX_VIDEOJUEGOS 30
#define MAX_PARTIDAS 100

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
        Jugador* buscarJugador(string nickname);
        Juego* buscarJuego(string videojuego);
        ~Sistema();
};

#endif