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

#endif // FUNCIONESPRINCIPALES_H_INCLUDED
