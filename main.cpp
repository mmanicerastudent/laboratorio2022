#include "Sistema.h"
#include "TipoGenero.h"
#include "iostream"

using namespace std;

int main()
{
    Sistema *sistema = new Sistema();

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

                    for (int i = 0; i < cant; i++)
                    {
                        cout << juegos[i]->getNombre() << endl;


                        cout << juegos[i]->traducirGenero() << endl;
                        cout << juegos[i]->getTotalHorasJuegos() << endl;
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