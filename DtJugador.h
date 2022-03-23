#ifndef DTJUGADOR
#define DTJUGADOR
#include <string>
using namespace std;

class DtJugador {
    private:
        string nickname;
        int edad;
    public:
        DtJugador();
        DtJugador(string nickname, int edad);
        string getNickname();
        void setNickname(string nickname);
        int getEdad();
        void setEdad(int edad);
        ~DtJugador();
};

#endif