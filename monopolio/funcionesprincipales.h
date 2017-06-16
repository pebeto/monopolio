#ifndef FUNCIONESPRINCIPALES_H_INCLUDED
#define FUNCIONESPRINCIPALES_H_INCLUDED

void ingresarDatosJug(int *_nJugadores, jugador *_players){
    for(int i=0; i<*_nJugadores; i++){
        cout<<"Ingresa tu nombre: ";
        cin>>(*(_players+i)).nombre;
    }
}

void ingresarNJug(int *_nJugadores){
    do{
        cout<<"Ingrese el número de jugadores: (2 min. / 6 max.)";
        cin>>*_nJugadores;
    }while(*_nJugadores<=1 || *_nJugadores>6);
}

void movimiento(){

    int _movimientos=dado();
    int _posicion=_posicion+_movimientos;
    switch(_posicion){
    case 0 : //CASO GO

        break;
    case 10 : //CASO CARCEL VISITA

        break;
    case 20 : //CASO PARADA LIBRE

        break;
    case 30 : //CASO CARCEL

        break;
    case -1 : //CASO CARCEL DADOS

        break;
    case 2 : case 17 : case 33 : //CASO ARCA COMUNAL

        break;
    case 7 : case 22 : case 36 : //CASO CASUALIDAD

        break;
    case 4 : //CASO IMPUESTO CARO

        break;
    case 38 : //CASO IMPUESTO BARATO

        break;
    default :

        break;
    }
}

#endif // FUNCIONESPRINCIPALES_H_INCLUDED
