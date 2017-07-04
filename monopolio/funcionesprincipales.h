#ifndef FUNCIONESPRINCIPALES_H_INCLUDED
#define FUNCIONESPRINCIPALES_H_INCLUDED

void ingresarDatosJug(int *_nJugadores, jugador *_players){
    for(int i=0; i<*_nJugadores; i++){
        cout<<"Ingresa tu nombre: ";
        cin>>(*(_players+i)).nombre;
        cout<<"Ingresa tu color: "<<endl;
    }
}

void ingresarNJug(int *_nJugadores){
    do{
        cout<<"Ingrese el número de jugadores: (2 min. / 6 max.)";
        cin>>*_nJugadores;
    }while(*_nJugadores<=1 || *_nJugadores>6);
}

void inicioPartida(int *_nJugadores, jugador *_players){
    ingresarNJug(_nJugadores);
    ingresarDatosJug(_nJugadores, _players);
}

void comprarLugar(jugador *_players, casillero *_juego, int *_nJugadores, int _nJugador){
    fstream _tablero;
    casillero *aux=new casillero;
    _tablero.open(".\\data\\tableroMOD.txt", ios::out | ios::in | ios::app | ios::binary);
    if(_tablero.is_open()){
        _tablero.seekg(((*(_players+_nJugador)).posicion*sizeof(casillero)),ios::beg);
        _tablero.read(reinterpret_cast<char*>(aux),sizeof(casillero));
        cout<<"Deseas comprar la propiedad: "<<aux->nombre<<"? :"<<endl;
        cout<<"1. SI"<<endl;
        cout<<"2. NO"<<endl;
        cin.get();
    }
    else{
        cerr<<"NO SE ENCONTRO EL ARCHIVO: tablero.txt"<<endl;
        cin.get();
        exit(0);
    }
    _tablero.close();
}

void menuTurno(jugador *_players, casillero *_juego, int *_nJugadores, int _nJugador){
    int _opcion;
    cout<<"Opciones de casillero: "<<endl;
    if((*(_players+_nJugador)).nvueltas==0){
        cout<<"Es la primera vuelta :)"<<endl;
        cin.get();
    }
    else{
        cout<<"1. COMPRAR LUGAR."<<endl;
        cout<<"2. SUBASTAR LUGAR."<<endl;
        if((*(_players+_nJugador)).posesiones[(*(_players+_nJugador)).posicion])
            cout<<"3. VENDER LUGAR."<<endl;
        cout<<"4. SALTAR TURNO."<<endl;
        do{
        cout<<"OPCION: ";cin>>_opcion;
        }while(_opcion<1 || _opcion>5);
        switch(_opcion){
        case 1 :
            system("cls");
            comprarLugar(_players,_juego,_nJugadores,_nJugador);
            cin.get();
            break;
        case 2 :
            break;
        case 3 :
            break;
        case 4 :
            break;
        }
    }
}

void mover(jugador *_players, casillero *_juego,int *_nJugadores, int _nJugador){
    int cantidadDeMovimientos=dado();
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
    switch((*(_players+_nJugador)).posicion){
    case 0 :
        cout<<"Caiste en GO! Recibes $200"<<endl;
        break;
    case 10 : //CASO CARCEL VISITA
        if(!(*(_players+_nJugador)).carcel){
            cout<<"Estas de visita, no te preocupes :)"<<endl;
            cin.get();
        }
        else{
            cout<<"ESTAS EN LA CARCEL POR 3 TURNOS."<<endl;
            cin.get();
        }
        break;
    case 20 : //PARADA LIBRE
        cout<<"PARADA LIBRE"<<endl;
        cin.get();
        break;
    case 30 : case -1: //CASO CARCEL
        if(!(*(_players+_nJugador)).nvueltas==0){
        (*(_players+_nJugador)).carcel=true;
        (*(_players+_nJugador)).posicion=10;
        cout<<"CAISTE EN LA CARCEL >:("<<endl;
        cin.get();
        }
        break;
    case 2 : case 17 : case 33 : //CASO ARCA COMUNAL
        if(!(*(_players+_nJugador)).nvueltas==0){

        }
        break;
    case 7 : case 22 : case 36 : //CASO CASUALIDAD
        if(!(*(_players+_nJugador)).nvueltas==0){

        }
        break;
    case 4 : //CASO IMPUESTO CARO
        if(!(*(_players+_nJugador)).nvueltas==0){
        (*(_players+_nJugador)).dinero-=200;
        cout<<"ACABAS DE PAGAR $200 EN IMPUESTOS."<<endl;
        cin.get();
        }
        break;
    case 38 : //CASO IMPUESTO BARATO
        if(!(*(_players+_nJugador)).nvueltas==0){
        (*(_players+_nJugador)).dinero-=75;
        cout<<"ACABAS DE PAGAR $75 EN IMPUESTOS."<<endl;
        cin.get();
        }
        break;
    default :
        int _opcion;
        cout<<"Posicion del jugador N°"<<_nJugador+1<<": "<<(*(_players+_nJugador)).posicion+1<<endl;
        cout<<"Numero de vueltas del jugador N°"<<_nJugador+1<<": "<<(*(_players+_nJugador)).nvueltas<<endl;
        menuTurno(_players,_juego,_nJugadores,_nJugador);
        break;
    }
}

void turno(jugador *_players, casillero *_juego, int *_nJugadores){
    int nJugador=0;
    while(nJugador<*_nJugadores){
        system("cls");
        cout<<"TURNO DEL JUGADOR"<<nJugador+1<<endl;
        mover(_players,_juego,_nJugadores,nJugador);
        nJugador++;
        if(nJugador==*_nJugadores)
            nJugador=0;
    }
}

#endif // FUNCIONESPRINCIPALES_H_INCLUDED
