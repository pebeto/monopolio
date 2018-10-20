#ifndef SCORE_H_INCLUDED
#define SCORE_H_INCLUDED


/*
    ESTA FUNCION SERVIRA PARA SABER EL SCORE DEPENDIENDO SI LO DESEAS EN DINERO, NUMERO DE PROPIEDADES,
    CASAS, HOTELES, ETC.

    COMO PRIMER PARAMETRO SE LE PASARA EL PUNTERO JUGADOR PLAYERS, EL CUAL CONTIENE LA UBIACION DE LOS
    COMPONENTES DE CADA JUGADOR, LUEGO COMO SEGUNDO PARAMETRO SE LE PASARA EL NUMERO 0 YA QUE EN CUALQUIER
    CASO (1-6 JUGADORES) EL ARREGLO EMPEZARÁ EN EL INDICE 0 Y PARA FINALIZAR COMO ÚLTIMO PARAMETRO SE LE
    PASARA EL VALOR DE NJUGADORES (NUMERO DE JUGADORES) MENOS 1 POR SU INDICE QUE EL ULTIMO SE ALMACENA CON MENOS 1

    EJEMPLO:

    ordenarPorDinero(_players, 0, _nJugadores-1); // PROBABLEMENTE SE COLOQUE DENTRO DE UNA FUNCION POR ELLO ESTA CON LOS _



*/

void ordenarPorDinero (jugador *a, int izq, int der)
{
    int particionPorDinero(jugador *a, int izq, int der)
    {
        int i=izq,j=der;
        int tmp;
        int pivote=a[(izq+der)/2].dinero;
        while(i<=j)
        {
            while(a[i].dinero<pivote)
            {
                i++;
            }
            while(a[j].dinero>pivote)
            {
                j--;
            }
            if(i<=j)
            {
                tmp=a[i].dinero;
                a[i].dinero=a[j];
                a[j].dinero=tmp;
                i++;
                j--;
            }
        }
        return i;
    }

    void quickSortPorDinero(jugador *a, int prim, int ult)
    {
        int pivote = particionPorDinero(a,prim,ult);
        if(prim<pivote-1)
        {
            quickSortPorDinero(a,prim,pivote-1);
        }
        if(pivote<ult)
        {
            quickSortPorDinero(a,pivote,ult);
        }
    }
}

void ordenarPorPosesiones (jugador *a, int izq, int der)
{
    int *b = new int [der+1];
    int *posesiones;
    contador = 0;
    for(int i=0; i<=der; i++)
    {
        for(int j=0; j<40; j++)
        {
            if(a[i].posesiones[j])
            {
                contador++;
            }
        }
        b[i] = contador;
        contador = 0;
    }

    particionPorPosesiones(b,izq,der);

    int particionPorPosesiones(int *b, int izq, int der)
    {
        int i=izq,j=der;
        int tmp;
        int pivote=b[(izq+der)/2].dinero;
        while(i<=j)
        {
            while(b[i]<pivote)
            {
                i++;
            }
            while(b[j]>pivote)
            {
                j--;
            }
            if(i<=j)
            {
                tmpba[i];
                b[i]=b[j];
                b[j]=tmp;
                i++;
                j--;
            }
        }
        return i;
    }

    void quickSortPorPosesiones(jugador *b, int prim, int ult)
    {
        int pivote = particionPorPosesiones(b,prim,ult);
        if(prim<pivote-1)
        {
            quickSortPorPosesiones(b,prim,pivote-1);
        }
        if(pivote<ult)
        {
            quickSortPorPosesiones(b,pivote,ult);
        }
    }
}

#endif // SCORE_H_INCLUDED
