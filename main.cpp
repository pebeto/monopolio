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

#define TECLA_ARRIBA 72
#define TECLA_ABAJO 80
#define ENTER 13

using namespace std;

int menu(const char *titulo, const char *opciones[],int n);

void monopolio()
{
system("mode 650");
gotoxy(48,6); printf("BIENVENIDOS A...");

cout<<endl;
cout<<endl;

    gotoxy(39,8); printf(" /$$      /$$  /$$$$$$  /$$   /$$  /$$$$$$  /$$$$$$$   /$$$$$$  /$$   /$$$$$$  /$$$$$$ ");
    gotoxy(39,9); printf("| $$$    /$$$ /$$__  $$| $$$ | $$ /$$__  $$| $$__  $$ /$$__  $$| $$  |_  $$_/ /$$__  $$");
    gotoxy(39,10); printf("| $$$$  /$$$$| $$  \\ $$| $$$$| $$| $$  \\ $$| $$  \\ $$| $$  \\ $$| $$    | $$  | $$  \\ $$");
    gotoxy(39,11); printf("| $$ $$/$$ $$| $$  | $$| $$ $$ $$| $$  | $$| $$$$$$$/| $$  | $$| $$    | $$  | $$  | $$");
    gotoxy(39,12); printf("| $$  $$$| $$| $$  | $$| $$  $$$$| $$  | $$| $$____/ | $$  | $$| $$    | $$  | $$  | $$");
    gotoxy(39,13); printf("| $$\\  $ | $$| $$  | $$| $$\\  $$$| $$  | $$| $$      | $$  | $$| $$    | $$  | $$  | $$");
    gotoxy(39,14); printf("| $$ \\/  | $$|  $$$$$$/| $$ \\  $$|  $$$$$$/| $$      |  $$$$$$/| $$$$$/$$$$$$|  $$$$$$/");
    gotoxy(39,15); printf("|__/     |__/ \\______/ |__/  \\__/ \\______/ |__/       \\______/ |_____/______/ \\______/");


}

void reglas()
{

cout<<"\n\t\t\t\t      ==============";
cout<<"\n\t\t\t\t      ==Como ganar==";
cout<<"\n\t\t\t\t      ==============";
cout<<endl;
cout<<"\n\t Siendo la unica persona que siga en el juego despues de que todos se hayan quedado";
cout<<"\n\t en bancarrota.";
cout<<endl;
cout<<"\n\t\t\t\t=========================";
cout<<"\n\t\t\t\t==Puedes conseguir esto==";
cout<<"\n\t\t\t\t=========================";
cout<<endl;
cout<<"\n\t Comprando las propiedads y cobrando a los demás jugadores la renta por caer en ellas. ";
cout<<"\n\t Junta grupos de propiedades para aumentar la renta, entonces puedes construir casas y ";
cout<<"\n\t hoteles para incrementar al máximo tus ganancias.";
cout<<endl;
cout<<"\n\t\t\t\t    ==================";
cout<<"\n\t\t\t\t    ==Quien empieza?==";
cout<<"\n\t\t\t\t    ==================";
cout<<endl;
cout<<"\n\t Cada jugador tira los dos dados blancos. El que saque el tiro mayor toma el primer turno. Cada jugador empieza con $1500";
cout<<endl;
cout<<"\n\t\t\t\t     ===============";
cout<<"\n\t\t\t\t     ==En tu turno==";
cout<<"\n\t\t\t\t     ===============";
cout<<endl;
cout<<"\n\t$.Tira los dados ";
cout<<"\n\t$.Mueve tu peon en el sentido de las manecillas del reloj recorriendo el tablero el mismo ";
cout<<"\n\t  numero de casillas que marquen los dados.";
cout<<"\n\t$.Debes actuar dependiendo de la casilla en donde caigas";
cout<<"\n\t$.Si al mover tu peon te lleva a la casilla de SALIDA o pasas por ahí, le cobras al banco $200";
cout<<"\n\t$.Si tiraste dobles, tira los dados nuevamente y vuleves a mover, pero si tiras 3 dobles ";
cout<<"\n\t  tres veces en el mismo turno, debes ir a la cárcel.";
cout<<endl;
cout<<"\n\t\t\t\t     ================";
cout<<"\n\t\t\t\t     ==Cobra Rentas==";
cout<<"\n\t\t\t\t     ================";
cout<<endl;
cout<<"\n\t Si otro de los jugadores cae en una de tus propiedades que no este hipotecada, puedes exigirle ";
cout<<"\n\t la renta que se muestra en el titulo de propiedad";
cout<<endl;
cout<<"\n\t\t\t\t       ===========";
cout<<"\n\t\t\t\t       ==Subasta==";
cout<<"\n\t\t\t\t       ===========";
cout<<endl;
cout<<"\n\tEl banquero llama a una subasta cuando";
cout<<endl;
cout<<"\n\t$.Uno de los jugadores cae en una propiedad en venta y decide no comprarla al precio de lista";
cout<<"\n\t$.Uno de los jugadores queda en bancarrota y devuelve al banco todas sus propiedades hipotecadas, ";
cout<<"\n\t  las cuales son subastadas sin hipoteca";
cout<<"\n\t$.Hay una escasez de casas o de hoteles y dos o mas jugadores están interesados en comprar la misa";
cout<<"\n\t  construcción. Las ofertasen la subasta pueden hacerse solamente en efectico. Cualquiera de los ";
cout<<"\n\t  jugadores puede comenzar ofreciendo únicamente $1. Si nadie hace una oferta mas alta, el ultimo ";
cout<<"\n\n\ten ofrecer debe comprar la propiedad.";
}



void CrearMenu ()
{

    bool repite = true;
    int opcion,cantidad;
    int *nJugadores= new int;
    srand((unsigned)time(NULL));

    const char *titulo = "Menu Principal";
    const char *opciones[]={"Iniciar", "Instrucciones", "Opciones","Creditos","Salir"};
    int n = 5; //Número de opciones
    monopolio();
    gotoxy(72,17); printf("PRESS ANY KEY TO CONTINUE");
    system("pause>arch"); // BORRAR MENSAJES
    //system("cls");

    do
    {
    opcion = menu(titulo,opciones,n);

    switch(opcion)
        {
            case 1://system("cls");
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


                //COPIA EL ARCHIVO DEL TABLERO ORIGINAL AL MODIFICABLE
                //El archivo "tableroOR.txt" de la carpeta "data" se copia
                //en el "tableroMOD.txt" para la nueva inicializacion de la partida.
                nuevoArchivo();

                //GAME LOOP
                while(true){
                    inicioPartida(nJugadores);
                }

                delete nJugadores;

                break;
            case 2:
                system("cls");
                reglas();
                system("pause");
                system("cls");
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                exit(EXIT_SUCCESS);
                break;
        }

    }while(repite);
}

int menu(const char *titulo, const char *opciones[],int n)
{
    int OpcionSeleccionada = 1;
    int tecla;
    bool repite = true;

    do{
        system("cls");
        monopolio();

        gotoxy(70,19+OpcionSeleccionada);cout<<"==>";

        gotoxy(78,18); cout<<titulo;

        for(int i = 0; i < n; i++){
            gotoxy(75,20 + i); cout<< i + 1<< ")" <<opciones[i];
        }

        do{
            tecla = getch();
        } while(tecla!= TECLA_ARRIBA && tecla!= TECLA_ABAJO && tecla!= ENTER);

        switch(tecla){
            case TECLA_ARRIBA:
                OpcionSeleccionada--;

                if(OpcionSeleccionada < 1)
                {
                    OpcionSeleccionada = n;
                }
                break;
            case TECLA_ABAJO:
                OpcionSeleccionada++;
                 if(OpcionSeleccionada > n)
                {
                    OpcionSeleccionada = 1;
                }
                break;
            case ENTER:
                repite = false;
                break;
        }

    }while(repite);


    return OpcionSeleccionada;
}

int main ()
{
    CrearMenu();
}

