#ifndef CASILLERO_H_INCLUDED
#define CASILLERO_H_INCLUDED
using namespace std;

struct casillero{
    char nombre[100];
    int valor;
    char color;
    bool propietario;
    int numeroDelJugador;
    int numeroCasas=0;
    int numeroHoteles=0;
};

#endif // CASILLERO_H_INCLUDED
