#ifndef JUGADORES_H_INCLUDED
#define JUGADORES_H_INCLUDED

using namespace std;

struct jugador{
    int dinero=1500;
    char nombre[100];
    int color;
    bool carcel=false;
    int contadorCarcel=0;
    int posicion=0;
    int nvueltas=0;
    bool posesiones[40];
    int numeroCasas=0;
    int numeroHoteles=0;
    int numeroFerrocarriles=0;
    int numeroServicios=0;
};

#endif // JUGADORES_H_INCLUDED
