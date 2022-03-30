#ifndef PARTIDAMULTIJUGADOR
#define PARTIDAMULTIJUGADOR
#include "Partida.h"


class PartidaMulijugador:public Partida{
    
    private:
        bool trasmitidaEnVivo;
        int cantParticipantes;

    public:
        PartidaMulijugador();
        PartidaMulijugador(DtFechaHora fecha, int duracion, Jugador* jugador, bool trasmitidaEnVivo, int cantParticipantes);
        void setTrasmitidaEnVivo(bool trasmitida);
        void setCantParticipantes(int cantParticipantes);
        bool getTransmitidaEnVivo();
        int getCantParticipantes();
        int darTotalHorasParticipantes();
        ~PartidaMulijugador();


};

#endif