#include "Sistema.h"
#include "TipoGenero.h"
#include "PartidaIndividual.h"
#include "DtFechaHora.h"
#include "iostream"

using namespace std;

Sistema* sistema;


int main()
{
    sistema = new Sistema();

    /* ========== INTERFAZ ========== */
    int opt = 1;

    while (opt != 0)
    {

        cout << "==========================================================" << endl;
        cout << "Bienvenido, elija una de las siguientes opciones:" << endl;
        cout << "\n";
        cout << "1 - Agregar Jugador" << endl;
        cout << "2 - Agregar Videojuego" << endl;
        cout << "3 - Obtener Jugadores" << endl;
        cout << "4 - Obtener Videojuegos" << endl;
        cout << "5 - Iniciar Partida" << endl;
        cout << "6 - Obtener Partidas" << endl;
        cout << "----------------------------------------------------------" << endl;
        cout << "0 - Salir" << endl;
        cout << "==========================================================" << endl;

        cin >> opt;

        switch (opt)
        {
            case 1:
                {
                    string nickname, password;
                    int edad;

                    cout << "Ingrese nickname:" << endl;
                    cin >> nickname;

                    cout << "\n";

                    cout << "Ingrese edad:" << endl;
                    cin >> edad;

                    cout << "\n";

                    cout << "Ingrese password:" << endl;
                    cin >> password;

                    try
                    {
                        sistema->agregarJugador(nickname, edad, password);
                        cout << "\n";
                        cout << "Jugador agregado exitosamente!" << endl;
             
                    }
                    catch(invalid_argument ex)
                    {
                        cout << "\n";
                        cout << ex.what() << endl;
                    }
                
                    break;
                }
            case 2:
                {
                    string nombre;
                    TipoGenero genero;
                    int optGenero;

                    cout << "Ingrese nombre:" << endl;
                    cin >> nombre;

                    cout << "\nIngrese tipo de genero" << endl << "\n1.Acccion\n2.Aventura\n3.Deporte\n4.Otros\n\nIngrese valor: ";
                    cin >> optGenero;

                    switch(optGenero){
                        case 1:
                            genero = ACCION;
                            break;
                        case 2:
                            genero = AVENTURA;
                            break;
                        case 3:
                            genero = DEPORTE;
                            break;
                        case 4:
                            genero = OTRO;
                            break;
                        default:
                            break;
                    }

                    try
                    {       
                        if(optGenero < 1 || optGenero > 5) {
                            throw invalid_argument("Número ingresado inválido");
                        }
                        sistema->agregarVideojuego(nombre, genero);
                        cout << "\n";
                        cout << "Juego agregado exitosamente!" << endl;
                    }
                    catch(invalid_argument ex)
                    {
                        cout << "\n";
                        cout << ex.what() << endl;
                    }
                    break;
                }
            case 3:
                {
                    cout << "\n";
                    cout << "Listado de jugadores:" << endl;

                    int cant = 0;
                    DtJugador **jugadores = sistema->obtenerJugadores(cant);

                    // Contemplar caso en que no haya jugadores
                    for (int i = 0; i < cant; i++)
                    {
                        cout << jugadores[i]->getNickname() << endl;
                    }

                    break;
                }
            case 4:
                {
                    cout << "\n";
                    cout << "Listado de Juegos:" << endl;

                    int cant = 0;
                    DtJuego **juegos = sistema->obtenerVideoJuegos(cant);

                    // Contemplar caso en que no haya videojuegos
                    for (int i = 0; i < cant; i++)
                    {
                        cout << juegos[i]->getNombre() << endl;
                        cout << juegos[i]->traducirGenero() << endl;
                        cout << juegos[i]->getTotalHorasJuegos() << endl;
                    }

                    break;
                }
            case 5:
                {
                    int optPartida;

                    cout << "¿Qué tipo de partida deseas iniciar?" << endl;
                    cout << "1. Partida individual" << endl;
                    cout << "2. Partida multijugador" << endl;
                    cout << "0. Atrás" << endl;

                    cin >> optPartida;

                    switch(optPartida){
                        case 1: 
                            {
                                int duracion;
                                cout << "Indique la duración en horas de la partida:" << endl;
                                cin >> duracion;

                                string nickname;
                                cout << "Indique su nickname:" << endl;
                                cin >> nickname;

                                string nombreJuego;
                                cout << "Indique el nombre del juego:" << endl;
                                cin >> nombreJuego;

                                bool continuaPartida;
                                int continuaPartidaOpt;
                                cout << "¿Es una continuación de otra partida?" << endl;
                                cout << "1. Si" << endl;
                                cout << "2. No" << endl;
                                cin >> continuaPartidaOpt;
                                
                                switch(continuaPartidaOpt){ 
                                    case 1:
                                        {
                                            continuaPartida = true;
                                            break;
                                        }
                                    case 2:
                                    default:
                                        {
                                            continuaPartida = false;
                                            break;
                                        }
                                }

                                Jugador* jugador = sistema->buscarJugador(nickname);
                                if(jugador == NULL) {
                                    cout << "No existe un jugador con el nickname ingresado." << endl;
                                    break;
                                }

                                Juego* juego = sistema->buscarJuego(nombreJuego);
                                if(juego == NULL) {
                                    cout << "No existe ningún juego con el nombre ingresado." << endl;
                                    break;
                                }

                                DtFechaHora* fechaHora = sistema->fechaHoraActual();
                                PartidaIndividual* partida = new PartidaIndividual(fechaHora, duracion, continuaPartida, jugador);

                                sistema->iniciarPartida(nickname, nombreJuego, partida->getDtPartidaIndividual());
                                break;
                            }
                        case 2:
                            {
                                //todo para partidas multi
                                break;
                            }
                        case 0:   
                        default:
                            break;
                    }          
                    break;  
                }
            case 6: 
                {
                    string nombreJuego;
                    cout << "Indique el nombre del juego:" << endl;
                    cin >> nombreJuego;
                    
                    int cantPartidas = 0;
                    try {
                        DtPartida** partidas = sistema->obtenerPartidas(nombreJuego, cantPartidas);
                    
                        for (int i = 0; i < cantPartidas; i++)
                        {
                            cout << partidas[i]->getDuracion() << endl;
                        }

                    } catch (invalid_argument ex) {
                        cout << "\n";
                        cout << ex.what() << endl;                        
                    }

                    break;
                }
            case 0:
                {
                    break;
                }
            default:
                cout << "Opción no válida." << endl;
                break;
            }
    }
}