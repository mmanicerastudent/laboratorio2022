#include "Sistema.h"
#include <stdexcept>
#include <iostream>

using namespace std;

Sistema::Sistema()
{
    this->cantJugadores = 0;
    this->cantJuegos = 0;
}

void Sistema::agregarJugador(string nickname, int edad, string password)
{
    Jugador *jugador = new Jugador(nickname, edad, password);

    Jugador *jugadorExistente = this->buscarJugador(nickname);
    if (jugadorExistente != NULL)
    {
        throw invalid_argument("Ya existe un jugador con este nickname.");
    }

    this->jugadores[this->cantJugadores] = jugador;
    this->cantJugadores++;
}

DtJugador **Sistema::obtenerJugadores(int &cantJugadores)
{
    DtJugador **dtJugadores = new DtJugador *[this->cantJugadores];

    for (int i = 0; i < this->cantJugadores; i++)
    {
        DtJugador *dtJugador = this->jugadores[i]->getDtJugador();
        dtJugadores[i] = dtJugador;
    }

    cantJugadores = this->cantJugadores;
    return dtJugadores;
}

void Sistema::agregarVideojuego(string nombre, TipoGenero genero)
{
    Juego *juego = new Juego(nombre, genero);

    Juego *juegoExistente = this->buscarJuego(nombre);
    if (juegoExistente != NULL)
    {
        throw invalid_argument("Ya existe un videojuego con este nombre.");
    }

    this->juegos[this->cantJuegos] = juego;
    this->cantJuegos++;
}

DtJuego **Sistema::obtenerVideoJuegos(int &cantidadVideoJuegos)
{
    DtJuego **dtJuegos = new DtJuego *[this->cantJuegos];

    for (int i = 0; i < this->cantJuegos; i++)
    {
        DtJuego *dtJuego = this->juegos[i]->getDtJuego();
        dtJuegos[i] = dtJuego;
    }

    cantidadVideoJuegos = this->cantJuegos;
    return dtJuegos;
}

void Sistema::iniciarPartida(string nickname, string videojuego, DtPartida *datos)
{
    Jugador *jugador = this->buscarJugador(nickname);
    if (jugador == NULL)
    {
        throw invalid_argument("No existe ningún jugador con este nickname.");
    }

    Juego *juego = this->buscarJuego(videojuego);
    if (juego == NULL)
    {
        throw invalid_argument("No existe ningún videojuego con este nombre.");
    }

    DtPartidaMultijugador *dtm = dynamic_cast<DtPartidaMultijugador *>(datos);
    if (dtm != NULL)
    {
        PartidaMultijugador *pm = new PartidaMultijugador(dtm->getFecha(), dtm->getDuracion(), dtm->getTransmitidaEnVivo(), dtm->getCantParticipantes(), jugador);
        juego->addPartida(pm);
    }
    else
    {
        DtPartidaIndividual *dti = dynamic_cast<DtPartidaIndividual *>(datos);
        if (dti != NULL)
        {
            PartidaIndividual *pi = new PartidaIndividual(dti->getFecha(), dti->getDuracion(), dti->getContinuaPartidaAnterior(), jugador);
            juego->addPartida(pi);
        }
    }
}

DtPartida **Sistema::obtenerPartidas(string videojuego, int &cantPartidas)
{
    Juego *juego = this->buscarJuego(videojuego);
    if (juego == NULL)
    {
        throw invalid_argument("No existe ningún videojuego con este nombre.");
    }

    int cantP;
    Partida **partidas = juego->getPartidas(cantP);
    DtPartida **dtPartidas = new DtPartida *[cantP];
    for (int i = 0; i < cantP; i++)
    {
        PartidaIndividual *partidaI = dynamic_cast<PartidaIndividual *>(partidas[i]);
        if (partidaI != NULL)
        {
            dtPartidas[i] = partidaI->getDtPartidaIndividual();
            cantPartidas++;
        }
        else
        {
            PartidaMultijugador *partidaM = dynamic_cast<PartidaMultijugador *>(partidas[i]);
            if (partidaM != NULL)
            {
                dtPartidas[i] = partidaM->getDtPartidaMultijugador();
                cantPartidas++;
            }
        }
    }
    return dtPartidas;
}

Jugador *Sistema::buscarJugador(string nickname)
{
    for (int i = 0; i < this->cantJugadores; i++)
    {
        if (this->jugadores[i]->getNickname() == nickname)
        {
            return this->jugadores[i];
        };
    };
    return NULL;
}

Juego *Sistema::buscarJuego(string videojuego)
{
    for (int i = 0; i < this->cantJuegos; i++)
    {
        if (this->juegos[i]->getNombre() == videojuego)
        {
            return this->juegos[i];
        };
    };
    return NULL;
}

DtFechaHora *Sistema::fechaHoraActual()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);

    int dia = ltm->tm_mday;
    int mes = 1 + ltm->tm_mon;
    int anio = 1900 + ltm->tm_year;

    int hora = ltm->tm_hour;
    int minutos = ltm->tm_min;

    DtFechaHora *fechaHora = new DtFechaHora(dia, mes, anio, hora, minutos);
    return fechaHora;
}

void Sistema::printSuccess(string text)
{
    int n = text.length() + 10;
    char c = '-';

    cout << "\n";
    cout << string(n, c) << endl;
    cout << "| \u2713 - " << text <<  "   |" << endl;
    cout << string(n, c) << endl;
}

void Sistema::printError(string text)
{
    int n = text.length() + 10;
    char c = '-';

    cout << "\n";
    cout << string(n, c) << endl;
    cout << "| \u00D7 - " << text <<  "   |" << endl;
    cout << string(n, c) << endl;
}

void Sistema::printJugadores(DtJugador** jugadores, int cant)
{
    cout << "\n";
    cout << "Listado de jugadores: " << endl;
    cout << "--------------------------" << endl;
    cout << "| Nombre         | Edad  |" << endl;
    cout << "|------------------------|" << endl;

    for (int i = 0; i < cant; i++)
    {
        int cantEspaciosNickname = MAX_NICKNAME - jugadores[i]->getNickname().length();
        int cantEspaciosEdad = 5 - to_string(jugadores[i]->getEdad()).length();
        char e = ' ';
        cout <<  "| " + jugadores[i]->getNickname() + string(cantEspaciosNickname, e) + "| " + to_string(jugadores[i]->getEdad()) + string(cantEspaciosEdad, e) + " |" << endl;
    }

    cout << "--------------------------" << endl;
}