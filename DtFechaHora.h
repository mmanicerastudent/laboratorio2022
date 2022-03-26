#ifndef DTFECHAHORA
#define DTFECHAHORA

class DtFechaHora{

private:
    int dia;
    int mes;
    int anio;
    int hora;
    int minuto;

public:
    DtFechaHora();
    DtFechaHora(int dia, int mes, int anio, int hora, int minuto);
    int getDia();
    int getMes();
    int getAnio();
    int getHora();
    int getMinuto();
    ~DtFechaHora();

};











#endif