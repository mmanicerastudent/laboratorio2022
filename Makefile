principal: DtFechaHora.o Jugador.o DtJugador.o Juego.o DtJuego.o PartidaMultijugador.o DtPartidaMultijugador.o PartidaIndividual.o DtPartidaIndividual.o Partida.o DtPartida.o Sistema.o main.o
	g++ DtFechaHora.o Jugador.o DtJugador.o Juego.o DtJuego.o PartidaMultijugador.o DtPartidaMultijugador.o PartidaIndividual.o DtPartidaIndividual.o Partida.o DtPartida.o Sistema.o main.o -g -o sistema

DtFechaHora.o: DtFechaHora.cpp
	g++ DtFechaHora.cpp -g -c

Jugador.o: Jugador.cpp
	g++ Jugador.cpp -g -c

DtJugador.o: DtJugador.cpp
	g++ DtJugador.cpp -g -c

Juego.o: Juego.cpp
	g++ Juego.cpp -g -c

DtJuego.o: DtJuego.cpp
	g++ DtJuego.cpp -g -c

Partida.o: Partida.cpp
	g++ Partida.cpp -g -c

DtPartida.o: DtPartida.cpp
	g++ DtPartida.cpp -g -c

PartidaIndividual.o: PartidaIndividual.cpp
	g++ PartidaIndividual.cpp -g -c

DtPartidaIndividual.o: DtPartidaIndividual.cpp
	g++ DtPartidaIndividual.cpp -g -c

PartidaMultijugador.o: PartidaMultijugador.cpp
	g++ PartidaMultijugador.cpp -g -c

DtPartidaMultijugador.o: DtPartidaMultijugador.cpp
	g++ DtPartidaMultijugador.cpp -g -c

Sistema.o: Sistema.cpp
	g++ Sistema.cpp -g -c

main.o: main.cpp
	g++ main.cpp -g -c

clear: 
	rm -rf *.o sistema

run: sistema
	./sistema