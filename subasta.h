#ifndef SUBASTA_H_INCLUDED
#define SUBASTA_H_INCLUDED

#include <windows.h>
#include <stdlib.h>
#include <ctime>

using namespace std;

void subasta(casillero *_casillas, int i, jugador *_players, int j, int *_nJugadores)
{
    int numPlayer, iDTemp, mayPuja;
    bool compra;

    cout<<"SUBASTA DE PROPIEDAD"<<endl;
    cout<<"Título de Propiedad "<<_casillas[i]->nombre<<endl;
    cout<<"Costo Real: $"<<_casillas[i]->valor<<endl;
    cout<<endl<<endl;

    cout<<"Ingrese el monto para iniciar la subasta jugador "<<_players[j]->iD; // El jugador que llamo a la puja ingresa su monto
    cin>>_players[j]->puja;
    cout<<"La subasta inicia con la puja del jugador "<<_players[j]->iD<<" con $"<<_players[j]->puja<<"."<<endl;
    cout<<"NOTA: Solo tendrán ocho segundos de intervalos para poder ingresar su ID (lo cual les dara chance a ofertar)"<<endl;
    cout<<"Si no ingresan en ese periodo de tiempo, a pesar de que haya ingresado su ID, nadie podra ofertar y se terminara la subasta."<<endl;
    cout<<"Si nadie desea ofertar ingrese 0 y se culminara la subasta"<<endl;

    system("pause");

    cout<<"La subasta empieza en: "<<endl;
    cout<<"3..."<<endl;
    Sleep(1000);
    cout<<"2..."<<endl;
    Sleep(1000);
    cout<<"1..."<<endl;
    Sleep(1000);
    cout<<"YA!"<<endl;
    cout<<endl;
    clock_t t, t1;
    t = clock();
    t1 = t;

    while(compra != true)
    {
        cout<<"QUIEN DA MAS?"<<endl;
        // Si nadie ingresa su ID en menos de 9 segundos o alguien ingresa 0 la subasta culmina
        cout<<"Ingrese su ID de jugador para apostar: ";
        cin>>iDTemp;
        if(t-clock()/CLOCKS_PER_SEC < 9 || iDTemp == 0)
        {
            cout<<"Se acabo la subasta!"<<endl;
            cout<<"Tiempo transcurrido: "<<t1-clock/CLOCKS_PER_SEC<<endl;
            compra = true;
        }
        else                                          //  SE PODRIA MOSTRAR Y CONTAR CON MULTITHREADING
        {
            cout<<"Ingrese su puja: ";
            cin>>*_players[iDTemp]->puja; // Almacena la puja de cada jugador en su estrucutra
            t = clock();
        }
    }

    mayPuja = _players[0]->puja; // Se le da un valor para comparar
    //iDTemp = _players[0]->iD; (No tiene sentido de ir creo, tengo mucho sueño para razonar al 100%)

    for(int i=1; i< _nJugadores; i++) // Busca la mayor puja para ver quien es el ganador
    {
        if(mayPuja < _players[i]->puja)
        {
            mayPuja = _players[i]->puja; // Almacena la nueva puja mayor
            iDTemp = _players[i]->iD; // Guarda el ID de la puja mayor
            numPlayer = i; // Guarda la posicion en el vector de jugadores
        }
    }

    cout<<"El jugador con la mayor puja es el jugador "<<iDTemp<<" con una puja de "<<mayPuja<<"$"<<endl;
    _casillas[i]->propietario = true; // Marca que la casilla ya tiene dueño
    _casillas[i]->numeroDelJugador = iDTemp; // Marca el ID del jugador que compro la propiedad
    _players[numPlayer]->dinero -= _casillas[i]->valor; // Se realiza la venta
    _players[numPlayer]->posicionDePropiedades = new int {i}; // Arreglo del jugador que tiene las posiciones de las propiedades adquiridas

    for(int i=0; i< _nJugadores; i++) // Reinicia las pujas de todos a 0
    {
        _players[i]->puja = 0;
    }

}


#endif // SUBASTA_H_INCLUDED
