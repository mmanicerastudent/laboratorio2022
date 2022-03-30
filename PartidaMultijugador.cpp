#include "PartidaMultijugador.h"

        PartidaMulijugador::PartidaMulijugador(){};
        PartidaMulijugador::PartidaMulijugador(DtFechaHora fecha, int duracion, Jugador* jugador, bool trasmitidaEnVivo, int cantParticipantes):Partida(fecha, duracion, jugador){
            this->trasmitidaEnVivo = trasmitidaEnVivo;
            this->cantParticipantes = cantParticipantes;
        };
        void PartidaMulijugador::setTrasmitidaEnVivo(bool trasmitida){
            this->trasmitidaEnVivo = trasmitida;
        };
        void PartidaMulijugador::setCantParticipantes(int cantParticipantes){
            this->cantParticipantes = cantParticipantes;
        };
        bool PartidaMulijugador::getTransmitidaEnVivo(){
            return this->trasmitidaEnVivo;
        };
        int PartidaMulijugador::getCantParticipantes(){
            return this->cantParticipantes;
        };
        int PartidaMulijugador::darTotalHorasParticipantes(){};
        PartidaMulijugador::~PartidaMulijugador(){};