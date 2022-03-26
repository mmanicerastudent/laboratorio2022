#include "Sistema.h"
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
        cout << "2 - Obtener Jugadores" << endl;
        cout << "----------------------------------------------------------" << endl;
        cout << "0 - Salir" << endl;
        cout << "==========================================================" << endl;

        cin >> opt;

        switch (opt)
        {
        case 1:
        {
            string nickname;
            string password;
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