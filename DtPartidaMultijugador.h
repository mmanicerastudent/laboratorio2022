#ifndef DTPARTIDAMULTIJUGADOR
#define DTPARTIDAMULTIJUGADOR
#include "DtPartida.h"


class DtPartidaMulijugador:public DtPartida{
    
    private:
        bool trasmitidaEnVivo;
        int cantParticipantes;

    public:
        DtPartidaMulijugador();
        DtPartidaMulijugador(DtFechaHora fecha, int duracion, bool trasmitidaEnVivo, int cantParticipantes);
        bool getTransmitidaEnVivo();
        int getCantParticipantes();
        int darTotalHorasParticipantes();
        ~DtPartidaMulijugador();


};

#endif