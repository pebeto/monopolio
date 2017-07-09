#ifndef CASILLERO_H_INCLUDED
#define CASILLERO_H_INCLUDED

struct casillero{
    char nombre[100];
    char color;
    int valor;
    int numeroDelJugador;
    int numeroCasas;
    int numeroHoteles;
    bool propietario;
};

#endif // CASILLERO_H_INCLUDED
