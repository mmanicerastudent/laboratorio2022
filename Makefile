principal: Jugador.o DtJugador.o Sistema.o main.o
	g++ Jugador.o DtJugador.o Sistema.o main.o -g -o sistema

Jugador.o: Jugador.cpp
	g++ Jugador.cpp -g -c

DtJugador.o: DtJugador.cpp
	g++ DtJugador.cpp -g -c

Sistema.o: Sistema.cpp
	g++ Sistema.cpp -g -c

main.o: main.cpp
	g++ main.cpp -g -c

clear: 
	rm -rf *.o sistema