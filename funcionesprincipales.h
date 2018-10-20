#ifndef FUNCIONESPRINCIPALES_H_INCLUDED
#define FUNCIONESPRINCIPALES_H_INCLUDED
#include "posiciones.h"

using namespace std;

void venderLugar(jugador *_players, int *_nJugadores, int _nJugador, casillero *aux){
    int opcion;
    cout<<"A que jugador deseas venderle la propiedad "<<aux->nombre<<"?"<<endl;
    for(int i=0; i<*_nJugadores; i++){
        if(i!=_nJugador)
            cout<<"     "<<i+1<<". "<<(*(_players+i)).nombre<<endl;
    }
    do{
        if(opcion-1==_nJugador)
            cout<<"No puedes vender tu propiedad a ti mismo."<<endl;
        cin>>opcion;
    }while(opcion<=0 || opcion>*_nJugadores || opcion-1==_nJugador);
    switch(opcion-1){
    case 0 :
        cout<<"Quieres realmente venderle la propiedad "<<aux->nombre<<"? No hay vuelta atras..."<<endl;
        cout<<"Precio de la propiedad: "<<aux->valor/2<<"$"<<endl;
        cout<<"1. SI"<<endl;
        cout<<"2. NO"<<endl;
        do{
            cin>>opcion;
        }while(opcion!=1 && opcion!=2);
        switch(opcion){
        case 1 :
            aux->numeroDelJugador=0;
            (*(_players+_nJugador)).posesiones[(*(_players+_nJugador)).posicion]=false;
            (*(_players+0)).posesiones[(*(_players+_nJugador)).posicion]=true;
            (*(_players+0)).dinero-=aux->valor/2;
            (*(_players+_nJugador)).dinero+=aux->valor/2;
            cout<<"Has vendido satisfactoriamente la propiedad "<<aux->nombre<<endl;
            cout<<"al jugador "<<(*(_players+0)).nombre;
            cout<<"Tu dinero: "<<(*(_players+_nJugador)).dinero;
            cout<<"Su dinero: "<<(*(_players+0)).dinero;
            system("PAUSE");
            break;
        case 2 :
            break;
        }
        break;
    case 1 :
                cout<<"Quieres realmente venderle la propiedad "<<aux->nombre<<"? No hay vuelta atras..."<<endl;
        cout<<"Precio de la propiedad: "<<aux->valor/2<<"$"<<endl;
        cout<<"1. SI"<<endl;
        cout<<"2. NO"<<endl;
        do{
            cin>>opcion;
        }while(opcion!=1 && opcion!=2);
        switch(opcion){
        case 1 :
            aux->numeroDelJugador=1;
            (*(_players+_nJugador)).posesiones[(*(_players+_nJugador)).posicion]=false;
            (*(_players+1)).posesiones[(*(_players+_nJugador)).posicion]=true;
            (*(_players+1)).dinero-=aux->valor/2;
            (*(_players+_nJugador)).dinero+=aux->valor/2;
            cout<<"Has vendido satisfactoriamente la propiedad "<<aux->nombre<<endl;
            cout<<"al jugador "<<(*(_players+1)).nombre;
            cout<<"Tu dinero: "<<(*(_players+_nJugador)).dinero;
            cout<<"Su dinero: "<<(*(_players+1)).dinero;
            system("PAUSE");
            break;
        case 2 :
            break;
        }
        break;
    case 2 :
                cout<<"Quieres realmente venderle la propiedad "<<aux->nombre<<"? No hay vuelta atras..."<<endl;
        cout<<"Precio de la propiedad: "<<aux->valor/2<<"$"<<endl;
        cout<<"1. SI"<<endl;
        cout<<"2. NO"<<endl;
        do{
            cin>>opcion;
        }while(opcion!=1 && opcion!=2);
        switch(opcion){
        case 1 :
            aux->numeroDelJugador=2;
            (*(_players+_nJugador)).posesiones[(*(_players+_nJugador)).posicion]=false;
            (*(_players+2)).posesiones[(*(_players+_nJugador)).posicion]=true;
            (*(_players+2)).dinero-=aux->valor/2;
            (*(_players+_nJugador)).dinero+=aux->valor/2;
            cout<<"Has vendido satisfactoriamente la propiedad "<<aux->nombre<<endl;
            cout<<"al jugador "<<(*(_players+2)).nombre;
            cout<<"Tu dinero: "<<(*(_players+_nJugador)).dinero;
            cout<<"Su dinero: "<<(*(_players+2)).dinero;
            system("PAUSE");
            break;
        case 2 :
            break;
        }
        break;
    case 3 :
                cout<<"Quieres realmente venderle la propiedad "<<aux->nombre<<"? No hay vuelta atras..."<<endl;
        cout<<"Precio de la propiedad: "<<aux->valor/2<<"$"<<endl;
        cout<<"1. SI"<<endl;
        cout<<"2. NO"<<endl;
        do{
            cin>>opcion;
        }while(opcion!=1 && opcion!=2);
        switch(opcion){
        case 1 :
            aux->numeroDelJugador=3;
            (*(_players+_nJugador)).posesiones[(*(_players+_nJugador)).posicion]=false;
            (*(_players+3)).posesiones[(*(_players+_nJugador)).posicion]=true;
            (*(_players+3)).dinero-=aux->valor/2;
            (*(_players+_nJugador)).dinero+=aux->valor/2;
            cout<<"Has vendido satisfactoriamente la propiedad "<<aux->nombre<<endl;
            cout<<"al jugador "<<(*(_players+3)).nombre<<endl;
            cout<<"Tu dinero: "<<(*(_players+_nJugador)).dinero<<endl;
            cout<<"Su dinero: "<<(*(_players+3)).dinero<<endl;
            system("PAUSE");
            break;
        case 2 :
            break;
        }
        break;
    case 4 :
                cout<<"Quieres realmente venderle la propiedad "<<aux->nombre<<"? No hay vuelta atras..."<<endl;
        cout<<"Precio de la propiedad: "<<aux->valor/2<<"$"<<endl;
        cout<<"1. SI"<<endl;
        cout<<"2. NO"<<endl;
        do{
            cin>>opcion;
        }while(opcion!=1 && opcion!=2);
        switch(opcion){
        case 1 :
            aux->numeroDelJugador=4;
            (*(_players+_nJugador)).posesiones[(*(_players+_nJugador)).posicion]=false;
            (*(_players+4)).posesiones[(*(_players+_nJugador)).posicion]=true;
            (*(_players+4)).dinero-=aux->valor/2;
            (*(_players+_nJugador)).dinero+=aux->valor/2;
            cout<<"Has vendido satisfactoriamente la propiedad "<<aux->nombre<<endl;
            cout<<"al jugador "<<(*(_players+4)).nombre;
            cout<<"Tu dinero: "<<(*(_players+_nJugador)).dinero;
            cout<<"Su dinero: "<<(*(_players+4)).dinero;
            system("PAUSE");
            break;
        case 2 :
            break;
        }
        break;
    case 5 :
                cout<<"Quieres realmente venderle la propiedad "<<aux->nombre<<"? No hay vuelta atras..."<<endl;
        cout<<"Precio de la propiedad: "<<aux->valor/2<<"$"<<endl;
        cout<<"1. SI"<<endl;
        cout<<"2. NO"<<endl;
        do{
            cin>>opcion;
        }while(opcion!=1 && opcion!=2);
        switch(opcion){
        case 1 :
            aux->numeroDelJugador=5;
            (*(_players+_nJugador)).posesiones[(*(_players+_nJugador)).posicion]=false;
            (*(_players+5)).posesiones[(*(_players+_nJugador)).posicion]=true;
            (*(_players+5)).dinero-=aux->valor/2;
            (*(_players+_nJugador)).dinero+=aux->valor/2;
            cout<<"Has vendido satisfactoriamente la propiedad "<<aux->nombre<<endl;
            cout<<"al jugador "<<(*(_players+5)).nombre;
            cout<<"Tu dinero: "<<(*(_players+_nJugador)).dinero;
            cout<<"Su dinero: "<<(*(_players+5)).dinero;
            system("PAUSE");
            break;
        case 2 :
            break;
        }
        break;
    }
}

void comprarLugar(jugador *_players, int *_nJugadores, int _nJugador, casillero *aux){
    int opcion;
    cout<<"Deseas comprar la propiedad: "<<aux->nombre<<"? :"<<endl;
    cout<<"1. SI"<<endl;
    cout<<"2. NO"<<endl;
    do{
    cin>>opcion;
    }while(opcion!=1 && opcion!=2);
    switch(opcion){
    case 1 :
        aux->propietario=true;
        aux->numeroDelJugador=_nJugador;
        (*(_players+_nJugador)).posesiones[(*(_players+_nJugador)).posicion]=true;
        (*(_players+_nJugador)).dinero-=aux->valor;
        system("cls");
        break;
    case 2 :
        break;
    }
}

void menuTurno(jugador *_players, int *_nJugadores, int _nJugador){
    int _opcion;
    fstream tablero;
    casillero *aux=new casillero;
    tablero.open(".\\data\\tableroMOD.txt", ios::out | ios::in | ios::binary);
    tablero.seekg(((*(_players+_nJugador)).posicion*sizeof(casillero)),ios::beg);
    tablero.read(reinterpret_cast<char*>(aux),sizeof(casillero));
    if(aux->propietario){ //RENTA
        if(aux->numeroDelJugador!=_nJugador){
            cout<<"Has caido en una propiedad ajena."<<endl;
            (*(_players+aux->numeroDelJugador)).dinero+=aux->valor*10/100;
            (*(_players+_nJugador)).dinero-=aux->valor*10/100;
        }
    }
    cout<<"Opciones de casillero: "<<endl;
    if((*(_players+_nJugador)).nvueltas==0){
        cout<<"Es la primera vuelta :)"<<endl;
        system("PAUSE");
    }
    else{
        cout<<"Nombre del casillero: "<<aux->nombre<<endl;
        cout<<"Color: "<<aux->color<<endl;
        cout<<"Precio: "<<aux->valor<<"$"<<endl;
        if(aux->propietario==false)
            cout<<"1. COMPRAR LUGAR."<<endl;
        else
            cout<<"4. VENDER LUGAR."<<endl;
        if(aux->propietario==true)
            cout<<"2. SUBASTAR LUGAR."<<endl;
        cout<<"3. SALTAR TURNO."<<endl;
        do{
            cout<<"OPCION: ";cin>>_opcion;
        }while(_opcion<1 || _opcion>3);
        switch(_opcion){
        case 1 :
            system("cls");
            comprarLugar(_players,_nJugadores,_nJugador,aux);
            tablero.write(reinterpret_cast<char*>(aux),sizeof(casillero));
            cout<<"La propiedad "<<aux->nombre<<"se ha registrado como tuya."<<endl;
            cout<<"Tu dinero: "<<(*(_players+_nJugador)).dinero<<endl;
            cout<<"Posicion de la propiedad: "<<(*(_players+_nJugador)).posicion<<endl;
            system("PAUSE");
            break;
        case 2 :
            system("cls");
            venderLugar(_players,_nJugadores,_nJugador,aux);
            tablero.write(reinterpret_cast<char*>(aux),sizeof(casillero));
            break;
        case 3 :
            break;
        case 4 :
            system("cls");
            venderLugar(_players,_nJugadores,_nJugador,aux);
            tablero.write(reinterpret_cast<char*>(aux),sizeof(casillero));
            break;
        }
    }
    tablero.close();
}

void mover(jugador *_players,int *_nJugadores, int _nJugador){
    //Dado y valores a mover
    int dado1, dado2, intentos=1,cantidadDeMovimientos=0;
    dado1= rand()%6+1;
    dado2= rand()%6+1;
    intentos++;
    cantidadDeMovimientos+=dado1+dado2;
    while(dado1==dado2){
        dado1= rand()%6+1;
        dado2= rand()%6+1;
        intentos++;
        cantidadDeMovimientos+=dado1+dado2;
    }
    if(intentos>=3 && (*(_players+_nJugador)).nvueltas!=0){
       cout<<"Haz tirado 3 veces dobles!"<<endl;
       cantidadDeMovimientos=-1;
       (*(_players+_nJugador)).posicion=cantidadDeMovimientos;
       system("PAUSE");
    }
    else{
        if((*(_players+_nJugador)).carcel==false){
            (*(_players+_nJugador)).posicion+=cantidadDeMovimientos;
            if((*(_players+_nJugador)).posicion>=40){
                (*(_players+_nJugador)).posicion-=40;
                (*(_players+_nJugador)).nvueltas++;
                (*(_players+_nJugador)).dinero+=200;
            }
            for(int i=0; i<*_nJugadores; i++){
                if((*(_players+i)).carcel==true){
                    if((*(_players+i)).contadorCarcel==3){
                        (*(_players+i)).carcel=false;
                        (*(_players+i)).contadorCarcel==0;
                    }
                    else{
                        (*(_players+i)).contadorCarcel++;
                    }
                }
            }
        }
    }
    switch((*(_players+_nJugador)).posicion){
    case 0 :
        cout<<"\aCaiste en GO! Recibes $200"<<endl;
        cout<<endl;
        cout<<"Valor del primer dado: "<<dado1<<endl;
        cout<<"Valor del segundo dado: "<<dado2<<endl;
        cout<<endl;
        cout<<"Posicion del jugador N."<<_nJugador+1<<": "<<(*(_players+_nJugador)).posicion+1<<endl;
        cout<<"Numero de vueltas del jugador N."<<_nJugador+1<<": "<<(*(_players+_nJugador)).nvueltas<<endl;
        cout<<endl;
        system("PAUSE");
        break;
    case 10 : //CASO CARCEL VISITA
        if(!(*(_players+_nJugador)).carcel){
            cout<<"Estas de visita, no te preocupes :)"<<endl;
            cout<<endl;
            cout<<"Valor del primer dado: "<<dado1<<endl;
            cout<<"Valor del segundo dado: "<<dado2<<endl;
            cout<<endl;
            cout<<"Posicion del jugador N."<<_nJugador+1<<": "<<(*(_players+_nJugador)).posicion+1<<endl;
            cout<<"Numero de vueltas del jugador N."<<_nJugador+1<<": "<<(*(_players+_nJugador)).nvueltas<<endl;
            cout<<endl;
            system("PAUSE");
        }
        else{
            int _opcion;
            cout<<endl;
            cout<<"Valor del primer dado: "<<dado1<<endl;
            cout<<"Valor del segundo dado: "<<dado2<<endl;
            cout<<endl;
            cout<<"Posicion del jugador N."<<_nJugador+1<<": "<<(*(_players+_nJugador)).posicion+1<<endl;
            cout<<"Numero de vueltas del jugador N."<<_nJugador+1<<": "<<(*(_players+_nJugador)).nvueltas<<endl;
            cout<<endl;
            cout<<"\aESTAS EN LA CARCEL POR 3 TURNOS."<<endl;
            cout<<"Deseas pagar 50$ para salir? (1. SI / 2. NO): "<<endl;
            do{
            cin>>_opcion;
            }while(_opcion!=1 && _opcion !=2);
            switch(_opcion){
            case 1 :
                (*(_players+_nJugador)).dinero-=50;
                (*(_players+_nJugador)).carcel=false;
                cout<<"Has pagado satisfactoriamente 50$. "<<endl;
                cout<<"Estas fuera de la carcel :) "<<endl;
                system("PAUSE");
                break;
            case 2 :
                break;
            }
        }
        break;
    case 20 : //PARADA LIBRE
        cout<<"PARADA LIBRE"<<endl;
        cout<<endl;
        cout<<"Valor del primer dado: "<<dado1<<endl;
        cout<<"Valor del segundo dado: "<<dado2<<endl;
        cout<<endl;
        cout<<"Posicion del jugador N."<<_nJugador+1<<": "<<(*(_players+_nJugador)).posicion+1<<endl;
        cout<<"Numero de vueltas del jugador N."<<_nJugador+1<<": "<<(*(_players+_nJugador)).nvueltas<<endl;
        cout<<endl;
        system("PAUSE");
        break;
    case 30 : case -1: //CASO CARCEL
        int _opcion;
        if(!(*(_players+_nJugador)).nvueltas==0){
        (*(_players+_nJugador)).carcel=true;
        (*(_players+_nJugador)).posicion=10;
        cout<<"\aCAISTE EN LA CARCEL >:("<<endl;
        cout<<endl;
        cout<<"Valor del primer dado: "<<dado1<<endl;
        cout<<"Valor del segundo dado: "<<dado2<<endl;
        cout<<endl;
        cout<<"Posicion del jugador N."<<_nJugador+1<<": "<<(*(_players+_nJugador)).posicion+1<<endl;
        cout<<"Numero de vueltas del jugador N."<<_nJugador+1<<": "<<(*(_players+_nJugador)).nvueltas<<endl;
        cout<<endl;
        cout<<"Deseas pagar 50$ para salir? (1. SI / 2. NO): "<<endl;
        do{
        cin>>_opcion;
        }while(_opcion!=1 && _opcion !=2);
        switch(_opcion){
        case 1 :
            (*(_players+_nJugador)).dinero-=50;
            (*(_players+_nJugador)).carcel=false;
            cout<<"Has pagado satisfactoriamente 50$. "<<endl;
            cout<<"Estas fuera de la carcel :) "<<endl;
            system("PAUSE");
            break;
        case 2 :
            break;
        }
        system("PAUSE");
        }
        break;
    case 2 : case 17 : case 33 : //CASO ARCA COMUNAL
        if(!(*(_players+_nJugador)).nvueltas==0){
        cout<<"\aCAISTE EN ARCA COMUNAL"<<endl;
        //system("PAUSE");
        }
        cout<<endl;
        cout<<"Valor del primer dado: "<<dado1<<endl;
        cout<<"Valor del segundo dado: "<<dado2<<endl;
        cout<<endl;
        cout<<"Posicion del jugador N."<<_nJugador+1<<": "<<(*(_players+_nJugador)).posicion+1<<endl;
        cout<<"Numero de vueltas del jugador N."<<_nJugador+1<<": "<<(*(_players+_nJugador)).nvueltas<<endl;
        cout<<endl;
        system("PAUSE");
        break;
    case 7 : case 22 : case 36 : //CASO CASUALIDAD
        if(!(*(_players+_nJugador)).nvueltas==0){
        cout<<"\aCAISTE EN CASUALIDAD"<<endl;
        //system("PAUSE");
        }
        cout<<endl;
        cout<<"Valor del primer dado: "<<dado1<<endl;
        cout<<"Valor del segundo dado: "<<dado2<<endl;
        cout<<endl;
        cout<<"Posicion del jugador N."<<_nJugador+1<<": "<<(*(_players+_nJugador)).posicion+1<<endl;
        cout<<"Numero de vueltas del jugador N."<<_nJugador+1<<": "<<(*(_players+_nJugador)).nvueltas<<endl;
        cout<<endl;
        system("PAUSE");
        break;
    case 4 : //CASO IMPUESTO CARO
        if(!(*(_players+_nJugador)).nvueltas==0){
        (*(_players+_nJugador)).dinero-=200;
        cout<<"\aACABAS DE PAGAR $200 EN IMPUESTOS."<<endl;
        //system("PAUSE");
        }
        cout<<endl;
        cout<<"Valor del primer dado: "<<dado1<<endl;
        cout<<"Valor del segundo dado: "<<dado2<<endl;
        cout<<endl;
        cout<<"Posicion del jugador N."<<_nJugador+1<<": "<<(*(_players+_nJugador)).posicion+1<<endl;
        cout<<"Numero de vueltas del jugador N."<<_nJugador+1<<": "<<(*(_players+_nJugador)).nvueltas<<endl;
        cout<<endl;
        system("PAUSE");
        break;
    case 38 : //CASO IMPUESTO BARATO
        if(!(*(_players+_nJugador)).nvueltas==0){
        (*(_players+_nJugador)).dinero-=75;
        cout<<"\aACABAS DE PAGAR $75 EN IMPUESTOS."<<endl;
       // system("PAUSE");
        }
        cout<<endl;
        cout<<"Valor del primer dado: "<<dado1<<endl;
        cout<<"Valor del segundo dado: "<<dado2<<endl;
        cout<<endl;
        cout<<"Posicion del jugador N."<<_nJugador+1<<": "<<(*(_players+_nJugador)).posicion+1<<endl;
        cout<<"Numero de vueltas del jugador N."<<_nJugador+1<<": "<<(*(_players+_nJugador)).nvueltas<<endl;
        cout<<endl;
        system("PAUSE");
        break;
    default :
        cout<<endl;
        cout<<"Valor del primer dado: "<<dado1<<endl;
        cout<<"Valor del segundo dado: "<<dado2<<endl;
        cout<<endl;
        cout<<"Posicion del jugador N."<<_nJugador+1<<": "<<(*(_players+_nJugador)).posicion+1<<endl;
        cout<<"Numero de vueltas del jugador N."<<_nJugador+1<<": "<<(*(_players+_nJugador)).nvueltas<<endl;
        cout<<endl;
        system("PAUSE");
        menuTurno(_players,_nJugadores,_nJugador);
        break;
    }
}

void turno(jugador *_players, int *_nJugadores){
    int nJugador=0;
    while(nJugador<*_nJugadores){
        system("cls");
        graficarTablero(_players,_nJugadores,nJugador);
        gotoxy(5,61); cout<<"PRESIONE CUALQUIER TECLA PARA LANZAR LOS DADOS JUGADOR "<<nJugador+1<<endl;
        cout<<endl;
        system("pause>arch"); // BORRAR MENSAJES
        cout<<endl;
        cout<<"TURNO DEL JUGADOR: "<<(*(_players+nJugador)).nombre<<endl;
        cout<<"Dinero del jugador:"<<(*(_players+nJugador)).dinero<<endl;
        cout<<endl;
        mover(_players,_nJugadores,nJugador);
        graficarTablero(_players,_nJugadores,nJugador);
        nJugador++;
        if(nJugador==*_nJugadores)
            nJugador=0;
    }
}

void ingresarDatosJug(int *_nJugadores, jugador *_players){
    for(int i=0; i<*_nJugadores; i++){
        gotoxy(39,29+i+1);
        cout<<"Ingresa tu nombre, jugador N."<<i+1<<": ";
        cin.ignore();
        cin>>(*(_players+i)).nombre;
    }
}

void ingresarNJug(int *_nJugadores){
    do{
        gotoxy(39,28);
        cout<<"Ingrese el numero de jugadores (2 min. / 6 max.): ";
        cin>>*_nJugadores;
    }while(*_nJugadores<=1 || *_nJugadores>6);
}

void inicioPartida(int *_nJugadores){
    ingresarNJug(_nJugadores);
    jugador *_players= new jugador[*_nJugadores];
    ingresarDatosJug(_nJugadores, _players);
    cin.ignore();
    turno(_players,_nJugadores);
    delete _players;
}

#endif // FUNCIONESPRINCIPALES_H_INCLUDED
