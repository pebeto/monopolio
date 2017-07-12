#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <fstream>
#include "casillero.h"
#include "jugadores.h"
#include "dado.h"
#include "remplazoarchivo.h"
#include "funcionesprincipales.h"
#include "menu.h"
using namespace std;

int main(){
    /*
    {"GO!",0,'G',false,-1,0,0}, //n=0 COLOR GO
    {"AVENIDA MEDITERRANEO",60,'M',false,-1,0,0}, //n=1 COLOR MARRON
    {"ARCA COMUNAL",0,'A',false,-1,0,0}, //n=2 COLOR ARCA COMUNAL
    {"AVENIDA BALTICA",60,'M',false,-1,0,0}, //n=3 COLOR MARRON
    {"IMPUESTO SOBRE INGRESOS",0,'I',false,-1,0,0}, //n=4 COLOR IMPUESTO
    {"FERROCARRIL READING",200,'N',false,-1,0,0}, //n=5 COLOR TREN
    {"AVENIDA ORIENTAL",100,'C',false,-1,0,0}, //n=6 COLOR CELESTE
    {"CASUALIDAD",0,'Q',false,-1,0,0}, //n=7 COLOR CASUALIDAD
    {"AVENIDA VERMONT",100,'C',false,-1,0,0}, //n=8 COLOR CELESTE
    {"AVENIDA CONNECTICUT",120,'C',false,-1,0,0}, //n=9 COLOR CELESTE
    {"CARCEL",0,'K',false,-1,0,0}, //n=10 COLOR CARCEL
    {"PLAZA SAN CARLOS",140,'P',false,-1,0,0}, //n=11 COLOR MORADO
    {"COMPANIA DE ELECTRICIDAD",150,'F',false,-1,0,0}, //n=12 COLOR COMPANIA
    {"AVENIDA STATUS",140,'P',false,-1,0,0}, //n=13 COLOR MORADO
    {"AVENIDA VIRGINIA",160,'P',false,-1,0,0}, //n=14 COLOR MORADO
    {"FERROCARRIL PENNSYLVANIA",200,'N',false,-1,0,0}, //n=15 COLOR TREN
    {"PLAZA ST.JAMES",180,'O',false,-1,0,0}, //n=16 COLOR NARANJA
    {"ARCA COMUNAL",0,'A',false,-1,0,0}, //n=17 COLOR ARCA COMUNAL
    {"AVENIDA TENNESSEE",180,'O',false,-1,0,0}, //n=18 COLOR NARANJA
    {"AVENIDA NUEVA YORK",200,'O',false,-1,0,0}, //n=19 COLOR NARANJA
    {"PARADA LIBRE",0,'L',false,-1,0,0}, //n=20 COLOR PARADA LIBRE
    {"AVENIDA KENTUCKY",220,'R',false,-1,0,0}, //n=21 COLOR ROJO
    {"CASUALIDAD",0,'Q',false,-1,0,0}, //n=22 COLOR CASUALIDAD
    {"AVENIDA INDIANA",220,'R',false,-1,0,0}, //n=23 COLOR ROJO
    {"AVENIDA ILLINOIS",240,'R',false,-1,0,0}, //n=24 COLOR ROJO
    {"FERROCARRIL B. & O.",200,'N',false,-1,0,0}, //n=25 COLOR TREN
    {"AVENIDA ATLANTICO",260,'Y',false,-1,0,0}, //n=26 COLOR AMARILLO
    {"AVENIDA VENTNOR",260,'Y',false,-1,0,0}, //n=27 COLOR AMARILLO
    {"COMPANIA DE AGUA",150,'F',false,-1,0,0}, //n=28 COLOR COMPANIA
    {"JARDINES MARVIN",280,'Y',false,-1,0,0}, //n=29 COLOR AMARILLO
    {"VAYASE A LA CARCEL!",0,'K',false,-1,0,0}, //n=30 COLOR CARCEL
    {"AVENIDA PACIFICO",300,'V',false,-1,0,0}, //n=31 COLOR VERDE
    {"AVENIDA CAROLINA DEL NORTE",300,'V',false,-1,0,0}, //n=32 COLOR VERDE
    {"ARCA COMUNAL",0,'A',false,-1,0,0}, //n=33 COLOR ARCA COMUNAL
    {"AVENIDA PENNSYLVANIA",320,'V',false,-1,0,0}, //n=34 COLOR VERDE
    {"FERROCARRIL VIA RAPIDA",200,'N',false,-1,0,0}, //n=35 COLOR TREN
    {"CASUALIDAD",0,'Q',false,-1,0,0}, //n=36 COLOR CASUALIDAD
    {"PLAZA PARK",350,'B',false,-1,0,0}, //n=37 COLOR AZUL
    {"IMPUESTO SOBRE POSESIONES DE LUJO",0,'I',false,-1,0,0}, //n=38 COLOR IMPUESTO
    {"EL MUELLE",400,'B',false,-1,0,0} //n=39 COLOR AZUL
    };
    */
    /*
    casillero *juegos=new casillero;
    int i=0;
    tablero.open(".\\data\\tablero.txt", ios::out | ios::app | ios::binary);
    if(tablero.is_open())
        while(i<=39){
        cout<<"CASILLERO N° "<<i+1<<endl;
        cout<<"NOMBRE DE LA PROPIEDAD: "<<endl;
        fflush(stdin);
        gets(juegos->nombre);
        cout<<"VALOR DE LA PROPIEDAD: "<<endl;
        cin>>juegos->valor;
        cout<<"COLOR:"<<endl;
        cin>>juegos->color;
        juegos->propietario=false;
        juegos->numeroDelJugador=-1;
        juegos->numeroCasas=0;
        juegos->numeroHoteles=0;
        tablero.write(reinterpret_cast<char*>(juegos),sizeof(casillero));
        i++;
        }
    else
        cout<<"no";

    casillero *aux=new casillero;

    tablero.open(".\\data\\tableroMOD.txt", ios::out | ios::in | ios::binary);
    tablero.read(reinterpret_cast<char*>(aux),sizeof(casillero));
    if(tablero.is_open()){
        for(int i=0; i<39; i++){
            cout<<aux->color<<endl;
            cout<<aux->nombre<<endl;
            cout<<aux->numeroCasas<<endl;
            tablero.read(reinterpret_cast<char*>(aux),sizeof(casillero));
        }
    }
    else{
        cerr<<"nel prro";
    }
    */

    //VARIABLES PRINCIPALES
    int *nJugadores= new int;
    srand((unsigned)time(NULL));

    //COPIA EL ARCHIVO DEL TABLERO ORIGINAL AL MODIFICABLE
    //El archivo "tableroOR.txt" de la carpeta "data" se copia
    //en el "tableroMOD.txt" para la nueva inicializacion de la partida.
    nuevoArchivo();

    //GAME LOOP
    while(true){
        inicioPartida(nJugadores);
    }

    delete nJugadores;
    return 0;
}
