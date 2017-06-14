#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <fstream>
#include "casillero.h"
#include "jugadores.h"
#include "dado.h"
#include "parada.h"
#include "funcionesprincipales.h"
#include "menu.h"
using namespace std;

int main(){
    //VARIABLES PRINCIPALES
    int accion;
    int * const nJugadores=new int;
    casillero juego[39];
    srand(time(NULL));

    //GAME LOOP
    while(true){
    cout<<dado();
    cout<<endl;
    cout<<dado();
    cout<<endl;
    cout<<dado();
    /*
    ingresarNJug(nJugadores);
    jugador * const players=new jugador[*nJugadores];
    ingresarDatosJug(nJugadores,players);
    */
    dibujarmenu();
    do{
        cout<<"                               "<<"Ingresa accion: ";
        cin>>accion;
    }while(accion<1 || accion>4);
    switch(accion){
    case 1 :

    case 2 :

    case 3 :

    case 4 :
        exit(0);
    }
    system("clear");
    }
    return 0;
}
