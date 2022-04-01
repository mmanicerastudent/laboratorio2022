#ifndef PARTIDAMULTIJUGADOR
#define PARTIDAMULTIJUGADOR
#include "Partida.h"
#include "DtPartidaMultijugador.h"


class PartidaMultijugador:public Partida{
    
    private:
        bool trasmitidaEnVivo;
        int cantParticipantes;

    public:
        PartidaMultijugador();
        PartidaMultijugador(DtFechaHora* fecha, int duracion, bool trasmitidaEnVivo, int cantParticipantes, Jugador* jugador);
        void setTrasmitidaEnVivo(bool trasmitida);
        void setCantParticipantes(int cantParticipantes);
        bool getTransmitidaEnVivo();
        int getCantParticipantes();
        int darTotalHorasParticipantes();
        DtPartidaMultijugador* getDtPartidaMultijugador();
        ~PartidaMultijugador();
};

#endif