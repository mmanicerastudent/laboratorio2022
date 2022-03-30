#include "Partida.h"

        Partida::Partida(){};
        Partida::Partida(DtFechaHora fecha, int duracion, Jugador* jugador){
            this->fecha = fecha;
            this->duracion = duracion;
        };

        void Partida::setFecha(DtFechaHora fecha){
            this->fecha = fecha;
        };
        void Partida::setDuracion(int duracion){
            this->duracion = duracion;
        };
        DtFechaHora Partida::getFecha(){
            return this->fecha;
        };
        int Partida::getDuracion(){
            return this->duracion;
        };
        Partida::~Partida(){};