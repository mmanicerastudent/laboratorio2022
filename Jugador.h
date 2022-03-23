#ifndef JUGADOR
#define JUGADOR
#include <string>
using namespace std;

class Jugador {
    private:
        string nickname;
        int edad;
        string password;

    public:
        Jugador();
        Jugador(string nickname, int edad, string password);
        string getNickname();
        void setNickname(string nickname);
        int getEdad();
        void setEdad(int edad);
        string getPassword();
        void setPassword(string password);
        ~Jugador();
};

#endif