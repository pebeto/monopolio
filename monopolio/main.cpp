#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "casillero.h"
#include "jugadores.h"
#include "parada.h"
#include "dado.h"
#include "funcionesprincipales.h"
using namespace std;



int main(){
    int nJugadores;
    casillero juego[39];
    srand(time(NULL));
    cout<<dado()<<endl;
    cout<<dado()<<endl;
    cout<<dado();
    /*
    while(true){
    do{
        cout<<"Ingresa el número de Jugadores: "<<endl;
        cin>>nJugadores;
    }while(nJugadores<=1 || nJugadores>6);
    jugador *nJug=new jugador[nJugadores];

    system("clear");
    }
    */
    return 0;
}
