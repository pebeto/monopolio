#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <fstream>
#include "casillero.h"
#include "jugadores.h"
#include "dado.h"
#include "parada.h"
#include "funcionesprincipales.h"
using namespace std;

int main(){
    //VARIABLES PRINCIPALES
    int * const nJugadores=new int;
    casillero juego[39];
    srand(time(NULL));

    //GAME LOOP
    while(true){
    ingresarNJug(nJugadores);
    jugador * const players=new jugador[*nJugadores];
    ingresarDatosJug(nJugadores,players);
    }
    return 0;
}
