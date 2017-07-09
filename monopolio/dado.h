#ifndef DADO_H_INCLUDED
#define DADO_H_INCLUDED

void dado(int &_dado1, int &_dado2,int &_intentos){
    _dado1= rand()%6+1;
    _dado2= rand()%6+1;
    _intentos++;
}

#endif // DADO_H_INCLUDED
