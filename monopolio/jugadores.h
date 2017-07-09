#ifndef JUGADORES_H_INCLUDED
#define JUGADORES_H_INCLUDED

struct jugador{
    char nombre[100];
    int dinero=1500;
    int contadorCarcel=0;
    int posicion=0;
    int nvueltas=0;
    int numeroCasas=0;
    int numeroHoteles=0;
    int numeroFerrocarriles=0;
    int numeroServicios=0;
    bool quiebra;
    bool posesiones[40];
    bool carcel;
};

#endif // JUGADORES_H_INCLUDED
