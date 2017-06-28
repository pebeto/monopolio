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

void mensajeCarcel(){
    cout<<"Estas en la carcel! >:("<<endl;
}

void mover(jugador *_players, casillero *_juego,int *_nJugadores, int nJugador){
    int cantidadDeMovimientos=dado();
    if((*(_players+nJugador)).carcel==false){
        (*(_players+nJugador)).posicion+=cantidadDeMovimientos;
        if((*(_players+nJugador)).posicion>=40){
            (*(_players+nJugador)).posicion-=40;
            (*(_players+nJugador)).nvueltas++;
            (*(_players+nJugador)).dinero+=200;
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
    switch((*(_players+nJugador)).posicion){
    case 10 : case 20 ://CASO CARCEL VISITA && PARADA LIBRE
        break;
    case 30 : case -1: //CASO CARCEL
        (*(_players+nJugador)).carcel=true;
        (*(_players+nJugador)).posicion=10;
        break;
    case 2 : case 17 : case 33 : //CASO ARCA COMUNAL

        break;
    case 7 : case 22 : case 36 : //CASO CASUALIDAD

        break;
    case 4 : //CASO IMPUESTO CARO
        (*(_players+nJugador)).dinero-=200;
        break;
    case 38 : //CASO IMPUESTO BARATO
        (*(_players+nJugador)).dinero-=75;
        break;
    default :
        int _opcion;
        cout<<"Opciones de casillero: "<<endl;
        if((*(_players+nJugador)).nvueltas!=0){
            cout<<"1. COMPRAR LUGAR."<<endl;
            cout<<"2. SUBASTAR LUGAR."<<endl;
            if((*(_players+nJugador)).posesiones[(*(_players+nJugador)).posicion])
                cout<<"3. VENDER LUGAR."<<endl;
            cout<<"4. SALTAR TURNO."<<endl;
            do{
            cout<<"OPCION: ";cin>>_opcion;
            }while(_opcion>4 || _opcion<=0);
        }
        break;
    }
}

void salir(){
    exit(0);
}

void turno(jugador *_players, casillero *_juego, int *_nJugadores){
    int nJugador=0;
    while(nJugador<*_nJugadores){
        mover(_players,_juego,_nJugadores,nJugador);
        nJugador++;
        if(nJugador==*_nJugadores)
            nJugador=0;
    }
}

#endif // FUNCIONESPRINCIPALES_H_INCLUDED
