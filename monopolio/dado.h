#ifndef DADO_H_INCLUDED
#define DADO_H_INCLUDED

int dado(){
    int casillasamover, intentos=0;
    int _valordado= rand()%(7-1);
    int _valordado1= rand()&(7-1);
    while(_valordado==_valordado1){
        _valordado= rand()%(7-1);
        _valordado1= rand()%(7-1);
        intentos++;
    }
    casillasamover=_valordado+_valordado1;
    if(intentos>=3){
        casillasamover=-1;
    }
    return casillasamover;
}

#endif // DADO_H_INCLUDED
