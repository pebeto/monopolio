#ifndef JUGADORES_H_INCLUDED
#define JUGADORES_H_INCLUDED

using namespace std;

struct jugador{
    int dinero=1500;
    string nombre;
    int color;
    bool carcel;
    int contadorCarcel=0;
    int posicion;
    bool posesiones[40];
    int numeroCasas=0;
    int numeroHoteles=0;
    int numeroFerrocarriles=0;
    int numeroServicios=0;
};

#endif // JUGADORES_H_INCLUDED
