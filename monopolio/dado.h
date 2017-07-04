#ifndef DADO_H_INCLUDED
#define DADO_H_INCLUDED

int dado(){
    int casillasamover= 0, intentos= 1;
    int _valordado= rand()%6+1;
    int _valordado1= rand()%6+1;
    if(_valordado==_valordado1){
        while(_valordado==_valordado1){
            casillasamover+=_valordado+_valordado1;
            _valordado= rand()%6+1;
            _valordado1= rand()%6+1;
            intentos++;
        }
    }
    if(intentos<3){
        casillasamover+=_valordado+_valordado1;
    }
    else{
        casillasamover=-1;
    }
    return casillasamover;
}

#endif // DADO_H_INCLUDED
