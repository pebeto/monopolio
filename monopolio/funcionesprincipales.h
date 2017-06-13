#ifndef FUNCIONESPRINCIPALES_H_INCLUDED
#define FUNCIONESPRINCIPALES_H_INCLUDED

void mover(jugador *g, casillero _juego[]){
    int movimientos=dado();
    if(movimientos==-1){
        carcel(g->posicion);
        g->carcel=true;
        g->contadorCarcel++;
    }
}


#endif // FUNCIONESPRINCIPALES_H_INCLUDED
