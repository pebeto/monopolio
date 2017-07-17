#ifndef FUNCIONESPRINCIPALES_H_INCLUDED
#define FUNCIONESPRINCIPALES_H_INCLUDED
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

        break;
    case 1 :
        break;
    case 2 :
        break;
    case 3 :
        break;
    case 4 :
        break;
    case 5 :
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
        if(aux->numeroDelJugador==_nJugador){
            system("cls");
            cout<<"Opciones de casillero: "<<endl;
            cout<<"Nombre del casillero: "<<aux->nombre<<endl;
            cout<<"[Esta es tu propiedad]"<<endl;

        }
    }
    else{
        cout<<"Opciones de casillero: "<<endl;
        if((*(_players+_nJugador)).nvueltas==0){
            cout<<"Es la primera vuelta :)"<<endl;
            system("PAUSE");
        }
        else{
            cout<<"Nombre del casillero: "<<aux->nombre<<endl;
            cout<<"Color: "<<aux->color<<endl;
            cout<<"Precio: "<<aux->valor<<"$"<<endl;
            if(aux->propietario==false){
            cout<<"1. COMPRAR LUGAR."<<endl;
            }
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
                venderLugar(_players,_nJugadores,_nJugador,aux);
                break;
            case 3 :
                break;
            }
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
        cout<<"Caiste en GO! Recibes $200"<<endl;
        system("PAUSE");
        break;
    case 10 : //CASO CARCEL VISITA
        if(!(*(_players+_nJugador)).carcel){
            cout<<"Estas de visita, no te preocupes :)"<<endl;
            system("PAUSE");
        }
        else{
            int _opcion;
            cout<<"ESTAS EN LA CARCEL POR 3 TURNOS."<<endl;
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
        system("PAUSE");
        break;
    case 30 : case -1: //CASO CARCEL
        int _opcion;
        if(!(*(_players+_nJugador)).nvueltas==0){
        (*(_players+_nJugador)).carcel=true;
        (*(_players+_nJugador)).posicion=10;
        cout<<"CAISTE EN LA CARCEL >:("<<endl;
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
        cout<<"CAISTE EN ARCA COMUNAL"<<endl;
        system("PAUSE");
        }
        break;
    case 7 : case 22 : case 36 : //CASO CASUALIDAD
        if(!(*(_players+_nJugador)).nvueltas==0){
        cout<<"CAISTE EN CASUALIDAD"<<endl;
        system("PAUSE");
        }
        break;
    case 4 : //CASO IMPUESTO CARO
        if(!(*(_players+_nJugador)).nvueltas==0){
        (*(_players+_nJugador)).dinero-=200;
        cout<<"ACABAS DE PAGAR $200 EN IMPUESTOS."<<endl;
        system("PAUSE");
        }
        break;
    case 38 : //CASO IMPUESTO BARATO
        if(!(*(_players+_nJugador)).nvueltas==0){
        (*(_players+_nJugador)).dinero-=75;
        cout<<"ACABAS DE PAGAR $75 EN IMPUESTOS."<<endl;
        system("PAUSE");
        }
        break;
    default :
        cout<<endl;
        cout<<"Valor del primer dado: "<<dado1<<endl;
        cout<<"Valor del segundo dado: "<<dado2<<endl;
        cout<<endl;
        cout<<"Posicion del jugador N."<<_nJugador+1<<": "<<(*(_players+_nJugador)).posicion+1<<endl;
        cout<<"Numero de vueltas del jugador N."<<_nJugador+1<<": "<<(*(_players+_nJugador)).nvueltas<<endl;
        menuTurno(_players,_nJugadores,_nJugador);
        break;
    }
}

void turno(jugador *_players, int *_nJugadores){
    int nJugador=0;
    while(nJugador<*_nJugadores){
        system("cls");
        cout<<"TURNO DEL JUGADOR: "<<(*(_players+nJugador)).nombre<<endl;
        cout<<"Dinero del jugador:"<<(*(_players+nJugador)).dinero<<endl;
        cout<<endl;
        mover(_players,_nJugadores,nJugador);
        nJugador++;
        if(nJugador==*_nJugadores)
            nJugador=0;
    }
}

void ingresarDatosJug(int *_nJugadores, jugador *_players){
    for(int i=0; i<*_nJugadores; i++){
        cout<<"Ingresa tu nombre, jugador N."<<i+1<<": ";
        cin.ignore();
        cin>>(*(_players+i)).nombre;
    }
}

void ingresarNJug(int *_nJugadores){
    do{
        cout<<"Ingrese el numero de jugadores: (2 min. / 6 max.)";
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
