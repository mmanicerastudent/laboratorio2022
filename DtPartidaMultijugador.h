#ifndef DTPARTIDAMULTIJUGADOR
#define DTPARTIDAMULTIJUGADOR
#include "DtPartida.h"


class DtPartidaMultijugador:public DtPartida{
    
    private:
        bool trasmitidaEnVivo;
        int cantParticipantes;

    public:
        DtPartidaMultijugador();
        DtPartidaMultijugador(DtFechaHora* fecha, int duracion, bool trasmitidaEnVivo, int cantParticipantes);
        bool getTransmitidaEnVivo();
        int getCantParticipantes();
        ~DtPartidaMultijugador();
};

#endif