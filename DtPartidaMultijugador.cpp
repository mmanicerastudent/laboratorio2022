#include "DtPartidaMultijugador.h"

        DtPartidaMulijugador::DtPartidaMulijugador(){};
        DtPartidaMulijugador::DtPartidaMulijugador(DtFechaHora fecha, int duracion, bool trasmitidaEnVivo, int cantParticipantes):DtPartida(fecha, duracion){
            this->trasmitidaEnVivo = trasmitidaEnVivo;
            this->cantParticipantes = cantParticipantes;
        };
        bool DtPartidaMulijugador::getTransmitidaEnVivo(){
            return this->trasmitidaEnVivo;
        };
        int DtPartidaMulijugador::getCantParticipantes(){
            return this->cantParticipantes;
        };
        int DtPartidaMulijugador::darTotalHorasParticipantes(){};
        DtPartidaMulijugador::~DtPartidaMulijugador(){};