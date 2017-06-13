#ifndef PARADA_H_INCLUDED
#define PARADA_H_INCLUDED

void go(casillero &_posicion, int &_dinero){ //CASILLA NUMERO 0
    dinero+=200;
    _posicion=0;
}

void paradalibre(){ //CASILLA NUMERO 20
}

void carcel(int &_posicion){ //CASILLA NUMERO 30
    _posicion=10;
}

#endif // PARADA_H_INCLUDED
