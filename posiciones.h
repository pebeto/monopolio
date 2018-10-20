#ifndef POSICIONES_H_INCLUDED
#define POSICIONES_H_INCLUDED
#include <conio2.h>
#include "funcionesprincipales.h"

void graficarPosicion(jugador *_players, int *_nJugadores, int nJugador)
{
    int numeroDeJugadoresEnQuiebra = 0; // CONTADOR PARA PODER TERMINAR EL DISPLAY DEL JUEGO EN CONSOLA


    /*
    ESTE SWITCH LO CREE PARA PODER DETERMINAR CUANTOS JUGADORES HAY
    PARA PODER GRAFICAR EN EL TABLERO A TRAVES DE LA PARTE LOGICA,
    LA ESTRUCTURA JUGADOR TIENE UN ELEMENTO DE TIPO BOOL QUE DETERMINA
    LA  BANCARROTA, PERO A SU EL BUCLE DENTRO DE CADA CASE TERMINA CUANDO
    EL JUEGO ACABA, Y EL JUEGO ACABA CUANDO EL RESTO DE CONCURSANTES
    QUEDAN EN BANCARROTA, OSEA SOLO QUEDA UNO, PARA ELLO APLIQUE ESE
    DO...WHILE, EL CUAL ACABA DEPENDIENDO DE CADA CASO ESPECIFICO,
    PARA PODER ACABAR EL JUEGO CREE UN ENTERO DEL NUMERO DE JUGADORES
    EN BANCARROTA Y PARA PODER ALMACENARLOS UNA SOLA VES TUVE QUE CREAR
    OTRO BOOLEANO A PARTE DEL DE QUIEBRA QUE ESTA EN LA ESTRUCTURA
    JUGADOR, EL CUAL AL ENTRAR EN ESA CONDICION SE VUELVE VERDADERO Y
    NUNCA MAS VUELVE A ENTRAR DEBIDO AL && (Y) DE LA CONDICION
    */

    // NOTA TODOS LOS JUGADORES COMIENZAN EN EL INICIO
    // POR ENDE TENDRE QUE IMPRIMIRLOS A TODOS EN EL INICIO
    // FALTA RESOLVER ESO

    // NOTA 2 SYSTEM PAUSE PARA QUE EL JUGADOR PUEDA VER QUE SU CASILLA SE MOVIO

    switch(*_nJugadores) // DEPENDIENDO DE LA CANTIDAD DE JUGADORES
    {
    case 2: // PARA 2 JUGADORES

        //do{

            switch(nJugador) // TURNO DEL JUGADOR
            {
                case 1: case 0: // JUGADOR N1// JUGADOR N2

                    switch(_players[1].posicion) // POSICION DEL JUGADOR EN TURNO
                    {
                        case 0:
                            gotoxy(111,57); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 1 (GO)
                        break;
                        case 1:
                            gotoxy(101,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 2 (AV. MEDITERRANEO)
                        break;
                        case 2:
                            gotoxy(92,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 3 (ARCA COMUNAL)
                        break;
                        case 3:
                            gotoxy(81,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 4 (AV. BALTICA)
                        break;
                        case 4:
                            gotoxy(71,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 5 (IMPUESTOS 200$)
                        break;
                        case 5:
                            gotoxy(61,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 6 (FERROCARRIL "READINDG")
                        break;
                        case 6:
                            gotoxy(51,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 7 (AV. ORIENTAL)
                        break;
                        case 7:
                            gotoxy(43,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 8 (CASUALIDAD)
                        break;
                        case 8:
                            gotoxy(31,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 9 (AV. VERMONT)
                        break;
                        case 9:
                            gotoxy(21,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 10 (AV. CONNECTICUT)
                        break;
                        case 10:
                            if(_players[1].carcel)
                            {
                                gotoxy(13,56); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 11 (CARCEL)
                            }
                            else
                            {
                                gotoxy(7,59); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 11 (CARCEL DE VISITA)
                            }
                        break;
                        case 11:
                            gotoxy(10,53); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 12 (PLAZA SAN CARLOS)
                        break;
                        case 12:
                            gotoxy(11,47); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 13 (COMPAÑIA ELECTRICA)
                        break;
                        case 13:
                            gotoxy(10,43); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 14 (PLAZA AV. STATUS)
                        break;
                        case 14:
                            gotoxy(10,38); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 15 (AV. VIRGINIA)
                        break;
                        case 15:
                            gotoxy(11,33); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 16 (FERROCARRIL PENNSYLVANIA)
                        break;
                        case 16:
                            gotoxy(10,28); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 17 (PLAZA ST. JAMES)
                        break;
                        case 17:
                            gotoxy(12,23); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 18 (ARCA COMUNAL)
                        break;
                        case 18:
                            gotoxy(10,18); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 19 (AV. TENNESSEE)
                        break;
                        case 19:
                            gotoxy(10,13); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 20 (AV. NUEVA YORK)
                        break;
                        case 20:
                            gotoxy(11,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 21 (PARADA LIBRE)
                        break;
                        case 21:
                            gotoxy(19,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 22 (AV. KENTUCKY)
                        break;
                        case 22:
                            gotoxy(27,8); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 23 (CASUALIDAD)
                        break;
                        case 23:
                            gotoxy(39,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 24 (AV. INDIANA)
                        break;
                        case 24:
                            gotoxy(49,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 25 (AV. ILLINOIS)
                        break;
                        case 25:
                            gotoxy(59,8); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 26 (FERROCARRIL B&O)
                        break;
                        case 26:
                            gotoxy(69,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 27 (AV. ATLANTICO)
                        break;
                        case 27:
                            gotoxy(79,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 28 (AV. VETNOR)
                        break;
                        case 28:
                            gotoxy(89,8); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 29 (COMPAÑIA DE AGUA)
                        break;
                        case 29:
                            gotoxy(99,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 30 (JARDINES MARVIN)
                        break;
                        case 30:
                            gotoxy(112,8); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 31 (POLICIA)
                        break;
                        case 31:
                            gotoxy(110,12); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 32 (AV. PACIFICO)
                        break;
                        case 32:
                            gotoxy(110,17); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 33 (AV. CAROLINA DEL NORTE)
                        break;
                        case 33:
                            gotoxy(112,23); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 34 (ARCA COMUNAL)
                        break;
                        case 34:
                            gotoxy(110,27); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 35 (AV. PENNSYLVANIA)
                        break;
                        case 35:
                            gotoxy(111,33); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 36 (FERROCARRIL VIA RAPIDA)
                        break;
                        case 36:
                            gotoxy(113,38); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 37 (CASUALIDAD)
                        break;
                        case 37:
                            gotoxy(110,42); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 38 (PLAZA PARK)
                        break;
                        case 38:
                            gotoxy(112,48); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 39 (IMPUESTOS 75$)
                        break;
                        case 39:
                            gotoxy(110,52); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 40 (EL MUELLE)
                        break;
                    }


               // case 0: // JUGADOR N1

                    switch(_players[0].posicion) // POSICION DEL JUGADOR EN TURNO
                    {
                        case 0:
                            gotoxy(109,57); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 1 (GO)
                        break;
                        case 1:
                            gotoxy(99,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 2 (AV. MEDITERRANEO)
                        break;
                        case 2:
                            gotoxy(90,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 3 (ARCA COMUNAL)
                        break;
                        case 3:
                            gotoxy(79,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 4 (AV. BALTICA)
                        break;
                        case 4:
                            gotoxy(69,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 5 (IMPUESTOS 200$)
                        break;
                        case 5:
                            gotoxy(59,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 6 (FERROCARRIL "READINDG")
                        break;
                        case 6:
                            gotoxy(49,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 7 (AV. ORIENTAL)
                        break;
                        case 7:
                            gotoxy(37,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 8 (CASUALIDAD)
                        break;
                        case 8:
                            gotoxy(29,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 9 (AV. VERMONT)
                        break;
                        case 9:
                            gotoxy(19,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 10 (AV. CONNECTICUT)
                        break;
                        case 10:
                            if(_players[0].carcel)
                            {
                                gotoxy(11,56); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 11 (CARCEL)
                            }
                            else
                            {
                                gotoxy(7,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 11 (CARCEL DE VISITA)
                            }
                        break;
                        case 11:
                            gotoxy(10,52); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 12 (PLAZA SAN CARLOS)
                        break;
                        case 12:
                            gotoxy(9,47); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 13 (COMPAÑIA ELECTRICA)
                        break;
                        case 13:
                            gotoxy(10,42); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 14 (PLAZA AV. STATUS)
                        break;
                        case 14:
                            gotoxy(10,37); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 15 (AV. VIRGINIA)
                        break;
                        case 15:
                            gotoxy(9,33); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 16 (FERROCARRIL PENNSYLVANIA)
                        break;
                        case 16:
                            gotoxy(10,27); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 17 (PLAZA ST. JAMES)
                        break;
                        case 17:
                            gotoxy(10,23); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 18 (ARCA COMUNAL)
                        break;
                        case 18:
                            gotoxy(10,17); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 19 (AV. TENNESSEE)
                        break;
                        case 19:
                            gotoxy(10,12); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 20 (AV. NUEVA YORK)
                        break;
                        case 20:
                            gotoxy(9,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 21 (PARDA LIBRE)
                        break;
                        case 21:
                            gotoxy(21,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 22 (AV. KENTUCKY)
                        break;
                        case 22:
                            gotoxy(33,8); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 23 (CASUALIDAD)
                        break;
                        case 23:
                            gotoxy(41,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 24 (AV. INDIANA)
                        break;
                        case 24:
                            gotoxy(51,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 25 (AV. ILLINOIS)
                        break;
                        case 25:
                            gotoxy(61,8); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 26 (FERROCARRIL B&O)
                        break;
                        case 26:
                            gotoxy(71,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 27 (AV. ATLANTICO)
                        break;
                        case 27:
                            gotoxy(81,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 28 (AV. VETNOR)
                        break;
                        case 28:
                            gotoxy(91,8); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 29 (COMPAÑIA DE AGUA)
                        break;
                        case 29:
                            gotoxy(101,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 30 (JARDINES MARVIN)
                        break;
                        case 30:
                            gotoxy(108,8); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 31 (POLICIA)
                        break;
                        case 31:
                            gotoxy(110,13); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 32 (AV. PACIFICO)
                        break;
                        case 32:
                            gotoxy(110,18); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 33 (AV. CAROLINA DEL NORTE)
                        break;
                        case 33:
                            gotoxy(110,23); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 34 (ARCA COMUNAL)
                        break;
                        case 34:
                            gotoxy(110,28); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 35 (AV. PENNSYLVANIA)
                        break;
                        case 35:
                            gotoxy(109,33); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 36 (FERROCARRIL VIA RAPIDA)
                        break;
                        case 36:
                            gotoxy(107,38); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 37 (CASUALIDAD)
                        break;
                        case 37:
                            gotoxy(110,43); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 38 (PLAZA PARK)
                        break;
                        case 38:
                            gotoxy(108,48); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 39 (IMPUESTOS 75$)
                        break;
                        case 39:
                            gotoxy(110,53); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 40 (EL MUELLE)
                        break;
                    }
                break;
            }


       /*     if(_players[0]->quiebra && !player[0])
            {
                numeroDeJugadoresEnQuiebra += 1;
                player[0] = true;
            }

            if(_players[1]->quiebra && !player[1])
            {
                numeroDeJugadoresEnQuiebra += 1;
                player[1] = true;
            }

        }while(numeroDeJugadoresEnQuiebra != 1); */
        break;

    case 3: // PARA 3 JUGADORES
        //do {

            switch(nJugador) // TURNO DEL JUGADOR
            {
                case 0: // JUGADOR N1

                    switch(_players[0].posicion) // POSICION DEL JUGADOR EN TURNO
                    {
                        case 0:
                            gotoxy(107,57); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 1 (GO)
                        break;
                        case 1:
                            gotoxy(97,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 2 (AV. MEDITERRANEO)
                        break;
                        case 2:
                            gotoxy(89,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 3 (ARCA COMUNAL)
                        break;
                        case 3:
                            gotoxy(77,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 4 (AV. BALTICA)
                        break;
                        case 4:
                            gotoxy(67,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 5 (IMPUESTOS 200$)
                        break;
                        case 5:
                            gotoxy(58,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 6 (FERROCARRIL "READINDG")
                        break;
                        case 6:
                            gotoxy(47,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 7 (AV. ORIENTAL)
                        break;
                        case 7:
                            gotoxy(39,57); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 8 (CASUALIDAD)
                        break;
                        case 8:
                            gotoxy(27,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 9 (AV. VERMONT)
                        break;
                        case 9:
                            gotoxy(17,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 10 (AV. CONNECTICUT)
                        break;
                        case 10:
                             if(_players[0].carcel)
                            {
                                gotoxy(11,56); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 11 (CARCEL)
                            }
                            else
                            {
                                gotoxy(7,56); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 11 (CARCEL DE VISITA)
                            }
                        break;
                        case 11:
                            gotoxy(10,51); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 12 (PLAZA SAN CARLOS)
                        break;
                        case 12:
                            gotoxy(8,48); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 13 (COMPAÑIA ELECTRICA)
                        break;
                        case 13:
                            gotoxy(10,41); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 14 (PLAZA AV. STATUS)
                        break;
                        case 14:
                            gotoxy(10,36); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 15 (AV. VIRGINIA)
                        break;
                        case 15:
                            gotoxy(8,33); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 16 (FERROCARRIL PENNSYLVANIA)
                        break;
                        case 16:
                            gotoxy(10,26); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 17 (PLAZA ST. JAMES)
                        break;
                        case 17:
                            gotoxy(9,23); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 18 (ARCA COMUNAL)
                        break;
                        case 18:
                            gotoxy(10,16); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 19 (AV. TENNESSEE)
                        break;
                        case 19:
                            gotoxy(10,11); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 20 (AV. NUEVA YORK)
                        break;
                        case 20:
                            gotoxy(8,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 21 (PARDA LIBRE)
                        break;
                        case 21:
                            gotoxy(23,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 22 (AV. KENTUCKY)
                        break;
                        case 22:
                            gotoxy(31,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 23 (CASUALIDAD)
                        break;
                        case 23:
                            gotoxy(43,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 24 (AV. INDIANA)
                        break;
                        case 24:
                            gotoxy(53,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 25 (AV. ILLINOIS)
                        break;
                        case 25:
                            gotoxy(62,8); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 26 (FERROCARRIL B&O)
                        break;
                        case 26:
                            gotoxy(73,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 27 (AV. ATLANTICO)
                        break;
                        case 27:
                            gotoxy(83,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 28 (AV. VETNOR)
                        break;
                        case 28:
                            gotoxy(92,8); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 29 (COMPAÑIA DE AGUA)
                        break;
                        case 29:
                            gotoxy(103,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 30 (JARDINES MARVIN)
                        break;
                        case 30:
                            gotoxy(108,8); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 31 (POLICIA)
                        break;
                        case 31:
                            gotoxy(110,14); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 32 (AV. PACIFICO)
                        break;
                        case 32:
                            gotoxy(110,19); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 33 (AV. CAROLINA DEL NORTE)
                        break;
                        case 33:
                            gotoxy(109,23); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 34 (ARCA COMUNAL)
                        break;
                        case 34:
                            gotoxy(110,29); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 35 (AV. PENNSYLVANIA)
                        break;
                        case 35:
                            gotoxy(108,33); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 36 (FERROCARRIL VIA RAPIDA)
                        break;
                        case 36:
                            gotoxy(109,37); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 37 (CASUALIDAD)
                        break;
                        case 37:
                            gotoxy(110,44); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 38 (PLAZA PARK)
                        break;
                        case 38:
                            gotoxy(108,48); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 39 (IMPUESTOS 75$)
                        break;
                        case 39:
                            gotoxy(110,54); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 40 (EL MUELLE)
                        break;
                    }
                break;

                case 1: // JUGADOR N2

                    switch(_players[1].posicion) // POSICION DEL JUGADOR EN TURNO
                    {
                        case 0:
                            gotoxy(110,57); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 1 (GO)
                        break;
                        case 1:
                            gotoxy(100,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 2 (AV. MEDITERRANEO)
                        break;
                        case 2:
                            gotoxy(91,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 3 (ARCA COMUNAL)
                        break;
                        case 3:
                            gotoxy(80,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 4 (AV. BALTICA)
                        break;
                        case 4:
                            gotoxy(70,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 5 (IMPUESTOS 200$)
                        break;
                        case 5:
                            gotoxy(60,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 6 (FERROCARRIL "READINDG")
                        break;
                        case 6:
                            gotoxy(50,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 7 (AV. ORIENTAL)
                        break;
                        case 7:
                            gotoxy(40,57); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 8 (CASUALIDAD)
                        break;
                        case 8:
                            gotoxy(30,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 9 (AV. VERMONT)
                        break;
                        case 9:
                            gotoxy(20,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 10 (AV. CONNECTICUT)
                        break;
                        case 10:
                             if(_players[1].carcel)
                            {
                                gotoxy(12,57); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 11 (CARCEL)
                            }
                            else
                            {
                                gotoxy(7,59); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 11 (CARCEL DE VISITA)
                            }
                        break;
                        case 11:
                            gotoxy(10,54); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 12 (PLAZA SAN CARLOS)
                        break;
                        case 12:
                            gotoxy(10,47); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 13 (COMPAÑIA ELECTRICA)
                        break;
                        case 13:
                            gotoxy(10,44); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 14 (PLAZA AV. STATUS)
                        break;
                        case 14:
                            gotoxy(10,39); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 15 (AV. VIRGINIA)
                        break;
                        case 15:
                            gotoxy(10,33); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 16 (FERROCARRIL PENNSYLVANIA)
                        break;
                        case 16:
                            gotoxy(10,29); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 17 (PLAZA ST. JAMES)
                        break;
                        case 17:
                            gotoxy(11,23); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 18 (ARCA COMUNAL)
                        break;
                        case 18:
                            gotoxy(10,19); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 19 (AV. TENNESSEE)
                        break;
                        case 19:
                            gotoxy(10,14); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 20 (AV. NUEVA YORK)
                        break;
                        case 20:
                            gotoxy(10,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 21 (PARADA LIBRE)
                        break;
                        case 21:
                            gotoxy(20,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 22 (AV. KENTUCKY)
                        break;
                        case 22:
                            gotoxy(30,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 23 (CASUALIDAD)
                        break;
                        case 23:
                            gotoxy(40,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 24 (AV. INDIANA)
                        break;
                        case 24:
                            gotoxy(50,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 25 (AV. ILLINOIS)
                        break;
                        case 25:
                            gotoxy(60,8); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 26 (FERROCARRIL B&O)
                        break;
                        case 26:
                            gotoxy(70,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 27 (AV. ATLANTICO)
                        break;
                        case 27:
                            gotoxy(80,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 28 (AV. VETNOR)
                        break;
                        case 28:
                            gotoxy(90,8); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 29 (COMPAÑIA DE AGUA)
                        break;
                        case 29:
                            gotoxy(100,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 30 (JARDINES MARVIN)
                        break;
                        case 30:
                            gotoxy(110,6); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 31 (POLICIA)
                        break;
                        case 31:
                            gotoxy(110,11); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 32 (AV. PACIFICO)
                        break;
                        case 32:
                            gotoxy(110,16); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 33 (AV. CAROLINA DEL NORTE)
                        break;
                        case 33:
                            gotoxy(111,23); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 34 (ARCA COMUNAL)
                        break;
                        case 34:
                            gotoxy(110,26); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 35 (AV. PENNSYLVANIA)
                        break;
                        case 35:
                            gotoxy(110,33); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 36 (FERROCARRIL VIA RAPIDA)
                        break;
                        case 36:
                            gotoxy(110,37); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 37 (CASUALIDAD)
                        break;
                        case 37:
                            gotoxy(110,41); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 38 (PLAZA PARK)
                        break;
                        case 38:
                            gotoxy(110,48); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 39 (IMPUESTOS 75$)
                        break;
                        case 39:
                            gotoxy(110,51); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 40 (EL MUELLE)
                        break;
                    }
                break;

                case 2: // JUGADOR N3

                    switch(_players[2].posicion) // POSICION DEL JUGADOR EN TURNO
                    {
                        case 0:
                            gotoxy(113,57); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 1 (GO)
                        break;
                        case 1:
                            gotoxy(103,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 2 (AV. MEDITERRANEO)
                        break;
                        case 2:
                            gotoxy(93,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 3 (ARCA COMUNAL)
                        break;
                        case 3:
                            gotoxy(83,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 4 (AV. BALTICA)
                        break;
                        case 4:
                            gotoxy(73,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 5 (IMPUESTOS 200$)
                        break;
                        case 5:
                            gotoxy(62,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 6 (FERROCARRIL "READINDG")
                        break;
                        case 6:
                            gotoxy(53,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 7 (AV. ORIENTAL)
                        break;
                        case 7:
                            gotoxy(41,57); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 8 (CASUALIDAD)
                        break;
                        case 8:
                            gotoxy(33,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 9 (AV. VERMONT)
                        break;
                        case 9:
                            gotoxy(23,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 10 (AV. CONNECTICUT)
                        break;
                        case 10:
                             if(_players[2].carcel)
                            {
                                gotoxy(13,56); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 11 (CARCEL)
                            }
                            else
                            {
                                gotoxy(13,59); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 11 (CARCEL DE VISITA)
                            }
                        break;
                        case 11:
                            gotoxy(7,54); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 12 (PLAZA SAN CARLOS)
                        break;
                        case 12:
                            gotoxy(12,48); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 13 (COMPAÑIA ELECTRICA)
                        break;
                        case 13:
                            gotoxy(7,41); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 14 (PLAZA AV. STATUS)
                        break;
                        case 14:
                            gotoxy(7,39); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 15 (AV. VIRGINIA)
                        break;
                        case 15:
                            gotoxy(12,33); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 16 (FERROCARRIL PENNSYLVANIA)
                        break;
                        case 16:
                            gotoxy(7,29); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 17 (PLAZA ST. JAMES)
                        break;
                        case 17:
                            gotoxy(13,23); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 18 (ARCA COMUNAL)
                        break;
                        case 18:
                            gotoxy(7,19); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 19 (AV. TENNESSEE)
                        break;
                        case 19:
                            gotoxy(7,11); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 20 (AV. NUEVA YORK)
                        break;
                        case 20:
                            gotoxy(12,7); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 21 (PARADA LIBRE)
                        break;
                        case 21:
                            gotoxy(17,7); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 22 (AV. KENTUCKY)
                        break;
                        case 22:
                            gotoxy(29,7); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 23 (CASUALIDAD)
                        break;
                        case 23:
                            gotoxy(37,7); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 24 (AV. INDIANA)
                        break;
                        case 24:
                            gotoxy(47,7); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 25 (AV. ILLINOIS)
                        break;
                        case 25:
                            gotoxy(58,8); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 26 (FERROCARRIL B&O)
                        break;
                        case 26:
                            gotoxy(67,7); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 27 (AV. ATLANTICO)
                        break;
                        case 27:
                            gotoxy(77,7); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 28 (AV. VETNOR)
                        break;
                        case 28:
                            gotoxy(88,8); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 29 (COMPAÑIA DE AGUA)
                        break;
                        case 29:
                            gotoxy(97,7); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 30 (JARDINES MARVIN)
                        break;
                        case 30:
                            gotoxy(112,8); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 31 (POLICIA)
                        break;
                        case 31:
                            gotoxy(113,11); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 32 (AV. PACIFICO)
                        break;
                        case 32:
                            gotoxy(113,19); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 33 (AV. CAROLINA DEL NORTE)
                        break;
                        case 33:
                            gotoxy(113,23); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 34 (ARCA COMUNAL)
                        break;
                        case 34:
                            gotoxy(113,29); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 35 (AV. PENNSYLVANIA)
                        break;
                        case 35:
                            gotoxy(112,33); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 36 (FERROCARRIL VIA RAPIDA)
                        break;
                        case 36:
                            gotoxy(111,37); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 37 (CASUALIDAD)
                        break;
                        case 37:
                            gotoxy(113,41); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 38 (PLAZA PARK)
                        break;
                        case 38:
                            gotoxy(112,48); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 39 (IMPUESTOS 75$)
                        break;
                        case 39:
                            gotoxy(113,54); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 40 (EL MUELLE)
                        break;
                    }
                break;
            }
/*
            if(_players[0]->quiebra && !player[0])
            {
                numeroDeJugadoresEnQuiebra += 1;
                player[0] = true;
            }

            if(_players[1]->quiebra && !player[1])
            {
                numeroDeJugadoresEnQuiebra += 1;
                player[1] = true;
            }

            if(_players[2]->quiebra && !player[2])
            {
                numeroDeJugadoresEnQuiebra += 1;
                player[2] = true;
            }

        }while(numeroDeJugadoresEnQuiebra != 2);*/

        break;

    case 4: // PARA 4 JUGADORES
           // do {

            switch(nJugador) // TURNO DEL JUGADOR
            {
                case 0: // JUGADOR N1

                    switch(_players[0].posicion) // POSICION DEL JUGADOR EN TURNO
                    {
                        case 0:
                            gotoxy(107,57); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 1 (GO)
                        break;
                        case 1:
                            gotoxy(97,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 2 (AV. MEDITERRANEO)
                        break;
                        case 2:
                            gotoxy(87,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 3 (ARCA COMUNAL)
                        break;
                        case 3:
                            gotoxy(77,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 4 (AV. BALTICA)
                        break;
                        case 4:
                            gotoxy(67,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 5 (IMPUESTOS 200$)
                        break;
                        case 5:
                            gotoxy(57,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 6 (FERROCARRIL "READINDG")
                        break;
                        case 6:
                            gotoxy(47,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 7 (AV. ORIENTAL)
                        break;
                        case 7:
                            gotoxy(37,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 8 (CASUALIDAD)
                        break;
                        case 8:
                            gotoxy(27,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 9 (AV. VERMONT)
                        break;
                        case 9:
                            gotoxy(17,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 10 (AV. CONNECTICUT)
                        break;
                        case 10:
                            if(_players[0].carcel)
                            {
                                gotoxy(11,56); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 11 (CARCEL)
                            }
                            else
                            {
                                gotoxy(7,56); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 11 (CARCEL DE VISITA)
                            }
                        break;
                        case 11:
                            gotoxy(10,51); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 12 (PLAZA SAN CARLOS)
                        break;
                        case 12:
                            gotoxy(8,48); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 13 (COMPAÑIA ELECTRICA)
                        break;
                        case 13:
                             gotoxy(10,41); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 14 (PLAZA AV. STATUS)
                        break;
                        case 14:
                            gotoxy(10,36); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 15 (AV. VIRGINIA)
                        break;
                        case 15:
                            gotoxy(7,33); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 16 (FERROCARRIL PENNSYLVANIA)
                        break;
                        case 16:
                            gotoxy(10,26); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 17 (PLAZA ST. JAMES)
                        break;
                        case 17:
                            gotoxy(7,23); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 18 (ARCA COMUNAL)
                        break;
                        case 18:
                            gotoxy(10,16); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 19 (AV. TENNESSEE)
                        break;
                        case 19:
                            gotoxy(10,11); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 20 (AV. NUEVA YORK)
                        break;
                        case 20:
                            gotoxy(8,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 21 (PARDA LIBRE)
                        break;
                        case 21:
                            gotoxy(23,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 22 (AV. KENTUCKY)
                        break;
                        case 22:
                            gotoxy(33,8); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 23 (CASUALIDAD)
                        break;
                        case 23:
                            gotoxy(43,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 24 (AV. INDIANA)
                        break;
                        case 24:
                            gotoxy(53,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 25 (AV. ILLINOIS)
                        break;
                        case 25:
                            gotoxy(62,8); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 26 (FERROCARRIL B&O)
                        break;
                        case 26:
                            gotoxy(73,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 27 (AV. ATLANTICO)
                        break;
                        case 27:
                            gotoxy(83,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 28 (AV. VETNOR)
                        break;
                        case 28:
                            gotoxy(92,8); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 29 (COMPAÑIA DE AGUA)
                        break;
                        case 29:
                            gotoxy(103,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 30 (JARDINES MARVIN)
                        break;
                        case 30:
                            gotoxy(108,8); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 31 (POLICIA)
                        break;
                        case 31:
                            gotoxy(110,14); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 32 (AV. PACIFICO)
                        break;
                        case 32:
                            gotoxy(110,19); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 33 (AV. CAROLINA DEL NORTE)
                        break;
                        case 33:
                            gotoxy(107,23); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 34 (ARCA COMUNAL)
                        break;
                        case 34:
                            gotoxy(110,29); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 35 (AV. PENNSYLVANIA)
                        break;
                        case 35:
                            gotoxy(107,33); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 36 (FERROCARRIL VIA RAPIDA)
                        break;
                        case 36:
                            gotoxy(107,38); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 37 (CASUALIDAD)
                        break;
                        case 37:
                            gotoxy(110,44); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 38 (PLAZA PARK)
                        break;
                        case 38:
                            gotoxy(108,48); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 39 (IMPUESTOS 75$)
                        break;
                        case 39:
                            gotoxy(110,54); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 40 (EL MUELLE)
                        break;
                    }
                break;

                case 1: // JUGADOR N2

                    switch(_players[1].posicion) // POSICION DEL JUGADOR EN TURNO
                    {
                        case 0:
                            gotoxy(109,57); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 1 (GO)
                        break;
                        case 1:
                            gotoxy(100,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 2 (AV. MEDITERRANEO)
                        break;
                        case 2:
                            gotoxy(89,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 3 (ARCA COMUNAL)
                        break;
                        case 3:
                            gotoxy(80,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 4 (AV. BALTICA)
                        break;
                        case 4:
                            gotoxy(69,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 5 (IMPUESTOS 200$)
                        break;
                        case 5:
                            gotoxy(58,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 6 (FERROCARRIL "READINDG")
                        break;
                        case 6:
                            gotoxy(50,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 7 (AV. ORIENTAL)
                        break;
                        case 7:
                            gotoxy(38,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 8 (CASUALIDAD)
                        break;
                        case 8:
                            gotoxy(30,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 9 (AV. VERMONT)
                        break;
                        case 9:
                            gotoxy(20,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 10 (AV. CONNECTICUT)
                        break;
                        case 10:
                            if(_players[1].carcel)
                            {
                                gotoxy(11,57); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 11 (CARCEL)
                            }
                            else
                            {
                                gotoxy(7,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 11 (CARCEL DE VISITA)
                            }
                        break;
                        case 11:
                            gotoxy(10,54); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 12 (PLAZA SAN CARLOS)
                        break;
                        case 12:
                            gotoxy(9,47); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 13 (COMPAÑIA ELECTRICA)
                        break;
                        case 13:
                            gotoxy(10,44); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 14 (PLAZA AV. STATUS)
                        break;
                        case 14:
                            gotoxy(10,39); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 15 (AV. VIRGINIA)
                        break;
                        case 15:
                            gotoxy(8,33); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 16 (FERROCARRIL PENNSYLVANIA)
                        break;
                        case 16:
                            gotoxy(10,29); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 17 (PLAZA ST. JAMES)
                        break;
                        case 17:
                            gotoxy(9,23); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 18 (ARCA COMUNAL)
                        break;
                        case 18:
                            gotoxy(10,19); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 19 (AV. TENNESSEE)
                        break;
                        case 19:
                            gotoxy(10,14); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 20 (AV. NUEVA YORK)
                        break;
                        case 20:
                            gotoxy(9,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 21 (PARADA LIBRE)
                        break;
                        case 21:
                            gotoxy(20,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 22 (AV. KENTUCKY)
                        break;
                        case 22:
                            gotoxy(32,8); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 23 (CASUALIDAD)
                        break;
                        case 23:
                            gotoxy(40,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 24 (AV. INDIANA)
                        break;
                        case 24:
                            gotoxy(50,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 25 (AV. ILLINOIS)
                        break;
                        case 25:
                            gotoxy(60,8); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 26 (FERROCARRIL B&O)
                        break;
                        case 26:
                            gotoxy(70,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 27 (AV. ATLANTICO)
                        break;
                        case 27:
                            gotoxy(80,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 28 (AV. VETNOR)
                        break;
                        case 28:
                            gotoxy(91,8); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 29 (COMPAÑIA DE AGUA)
                        break;
                        case 29:
                            gotoxy(100,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 30 (JARDINES MARVIN)
                        break;
                        case 30:
                            gotoxy(110,6); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 31 (POLICIA)
                        break;
                        case 31:
                            gotoxy(110,11); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 32 (AV. PACIFICO)
                        break;
                        case 32:
                            gotoxy(110,16); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 33 (AV. CAROLINA DEL NORTE)
                        break;
                        case 33:
                            gotoxy(109,23); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 34 (ARCA COMUNAL)
                        break;
                        case 34:
                            gotoxy(110,26); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 35 (AV. PENNSYLVANIA)
                        break;
                        case 35:
                            gotoxy(108,33); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 36 (FERROCARRIL VIA RAPIDA)
                        break;
                        case 36:
                            gotoxy(108,38); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 37 (CASUALIDAD)
                        break;
                        case 37:
                            gotoxy(110,41); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 38 (PLAZA PARK)
                        break;
                        case 38:
                            gotoxy(110,48); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 39 (IMPUESTOS 75$)
                        break;
                        case 39:
                            gotoxy(110,51); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 40 (EL MUELLE)
                        break;
                    }
                break;

                case 2: // JUGADOR N3

                    switch(_players[2].posicion) // POSICION DEL JUGADOR EN TURNO
                    {
                        case 0:
                            gotoxy(111,57); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 1 (GO)
                        break;
                        case 1:
                            gotoxy(103,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 2 (AV. MEDITERRANEO)
                        break;
                        case 2:
                            gotoxy(91,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 3 (ARCA COMUNAL)
                        break;
                        case 3:
                            gotoxy(83,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 4 (AV. BALTICA)
                        break;
                        case 4:
                            gotoxy(71,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 5 (IMPUESTOS 200$)
                        break;
                        case 5:
                            gotoxy(60,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 6 (FERROCARRIL "READINDG")
                        break;
                        case 6:
                            gotoxy(53,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 7 (AV. ORIENTAL)
                        break;
                        case 7:
                            gotoxy(42,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 8 (CASUALIDAD)
                        break;
                        case 8:
                            gotoxy(33,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 9 (AV. VERMONT)
                        break;
                        case 9:
                            gotoxy(23,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 10 (AV. CONNECTICUT)
                        break;
                        case 10:
                            if(_players[2].carcel)
                            {
                                gotoxy(13,56); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 11 (CARCEL)
                            }
                            else
                            {
                                gotoxy(7,59); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 11 (CARCEL DE VISITA)
                            }
                        break;
                        case 11:
                            gotoxy(7,51); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 12 (PLAZA SAN CARLOS)
                        break;
                        case 12:
                            gotoxy(11,47); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 13 (COMPAÑIA ELECTRICA)
                        break;
                        case 13:
                            gotoxy(7,41); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 14 (PLAZA AV. STATUS)
                        break;
                        case 14:
                            gotoxy(7,36); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 15 (AV. VIRGINIA)
                        break;
                        case 15:
                            gotoxy(10,33); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 16 (FERROCARRIL PENNSYLVANIA)
                        break;
                        case 16:
                            gotoxy(7,26); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 17 (PLAZA ST. JAMES)
                        break;
                        case 17:
                            gotoxy(11,23); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 18 (ARCA COMUNAL)
                        break;
                        case 18:
                            gotoxy(7,16); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 19 (AV. TENNESSEE)
                        break;
                        case 19:
                            gotoxy(7,11); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 20 (AV. NUEVA YORK)
                        break;
                        case 20:
                            gotoxy(11,7); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 21 (PARADA LIBRE)
                        break;
                        case 21:
                            gotoxy(17,7); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 22 (AV. KENTUCKY)
                        break;
                        case 22:
                            gotoxy(28,8); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 23 (CASUALIDAD)
                        break;
                        case 23:
                            gotoxy(37,7); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 24 (AV. INDIANA)
                        break;
                        case 24:
                            gotoxy(47,7); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 25 (AV. ILLINOIS)
                        break;
                        case 25:
                            gotoxy(58,8); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 26 (FERROCARRIL B&O)
                        break;
                        case 26:
                            gotoxy(67,7); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 27 (AV. ATLANTICO)
                        break;
                        case 27:
                            gotoxy(77,7); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 28 (AV. VETNOR)
                        break;
                        case 28:
                            gotoxy(89,8); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 29 (COMPAÑIA DE AGUA)
                        break;
                        case 29:
                            gotoxy(97,7); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 30 (JARDINES MARVIN)
                        break;
                        case 30:
                            gotoxy(112,8); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 31 (POLICIA)
                        break;
                        case 31:
                            gotoxy(113,14); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 32 (AV. PACIFICO)
                        break;
                        case 32:
                            gotoxy(113,19); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 33 (AV. CAROLINA DEL NORTE)
                        break;
                        case 33:
                            gotoxy(111,23); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 34 (ARCA COMUNAL)
                        break;
                        case 34:
                            gotoxy(113,29); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 35 (AV. PENNSYLVANIA)
                        break;
                        case 35:
                            gotoxy(110,33); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 36 (FERROCARRIL VIA RAPIDA)
                        break;
                        case 36:
                            gotoxy(112,38); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 37 (CASUALIDAD)
                        break;
                        case 37:
                            gotoxy(113,44); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 38 (PLAZA PARK)
                        break;
                        case 38:
                            gotoxy(112,48); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 39 (IMPUESTOS 75$)
                        break;
                        case 39:
                            gotoxy(113,54); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 40 (EL MUELLE)
                        break;
                    }
                break;

                case 3: // JUGADOR N4

                    switch(_players[3].posicion) // POSICION DEL JUGADOR EN TURNO
                    {
                        case 0:
                            gotoxy(113,57); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 1 (GO)
                        break;
                        case 1:
                            gotoxy(100,59); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 2 (AV. MEDITERRANEO)
                        break;
                        case 2:
                            gotoxy(93,58); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 3 (ARCA COMUNAL)
                        break;
                        case 3:
                            gotoxy(80,59); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 4 (AV. BALTICA)
                        break;
                        case 4:
                            gotoxy(73,58); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 5 (IMPUESTOS 200$)
                        break;
                        case 5:
                            gotoxy(62,58); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 6 (FERROCARRIL "READINDG")
                        break;
                        case 6:
                            gotoxy(50,59); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 7 (AV. ORIENTAL)
                        break;
                        case 7:
                            gotoxy(43,58); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 8 (CASUALIDAD)
                        break;
                        case 8:
                            gotoxy(30,59); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 9 (AV. VERMONT)
                        break;
                        case 9:
                            gotoxy(20,59); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 10 (AV. CONNECTICUT)
                        break;
                        case 10:
                            if(_players[3].carcel)
                            {
                                gotoxy(13,57); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 11 (CARCEL)
                            }
                            else
                            {
                                gotoxy(13,59); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 11 (CARCEL DE VISITA)
                            }
                        break;
                        case 11:
                            gotoxy(7,54); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 12 (PLAZA SAN CARLOS)
                        break;
                        case 12:
                            gotoxy(12,48); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 13 (COMPAÑIA ELECTRICA)
                        break;
                        case 13:
                            gotoxy(7,44); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 14 (PLAZA AV. STATUS)
                        break;
                        case 14:
                            gotoxy(7,39); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 15 (AV. VIRGINIA)
                        break;
                        case 15:
                            gotoxy(12,33); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 16 (FERROCARRIL PENNSYLVANIA)
                        break;
                        case 16:
                            gotoxy(7,29); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 17 (PLAZA ST. JAMES)
                        break;
                        case 17:
                            gotoxy(13,23); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 18 (ARCA COMUNAL)
                        break;
                        case 18:
                            gotoxy(7,19); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 19 (AV. TENNESSEE)
                        break;
                        case 19:
                            gotoxy(7,14); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 20 (AV. NUEVA YORK)
                        break;
                        case 20:
                            gotoxy(12,7); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 21 (PARADA LIBRE)
                        break;
                        case 21:
                            gotoxy(20,6); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 22 (AV. KENTUCKY)
                        break;
                        case 22:
                            gotoxy(27,8); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 23 (CASUALIDAD)
                        break;
                        case 23:
                            gotoxy(40,6); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 24 (AV. INDIANA)
                        break;
                        case 24:
                            gotoxy(50,6); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 25 (AV. ILLINOIS)
                        break;
                        case 25:
                            gotoxy(57,8); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 26 (FERROCARRIL B&O)
                        break;
                        case 26:
                            gotoxy(70,6); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 27 (AV. ATLANTICO)
                        break;
                        case 27:
                            gotoxy(80,6); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 28 (AV. VETNOR)
                        break;
                        case 28:
                            gotoxy(88,8); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 29 (COMPAÑIA DE AGUA)
                        break;
                        case 29:
                            gotoxy(100,6); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 30 (JARDINES MARVIN)
                        break;
                        case 30:
                            gotoxy(110,9); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 31 (POLICIA)
                        break;
                        case 31:
                            gotoxy(113,11); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 32 (AV. PACIFICO)
                        break;
                        case 32:
                            gotoxy(113,16); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 33 (AV. CAROLINA DEL NORTE)
                        break;
                        case 33:
                            gotoxy(113,23); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 34 (ARCA COMUNAL)
                        break;
                        case 34:
                            gotoxy(113,26); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 35 (AV. PENNSYLVANIA)
                        break;
                        case 35:
                            gotoxy(112,33); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 36 (FERROCARRIL VIA RAPIDA)
                        break;
                        case 36:
                            gotoxy(113,38); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 37 (CASUALIDAD)
                        break;
                        case 37:
                            gotoxy(113,41); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 38 (PLAZA PARK)
                        break;
                        case 38:
                           gotoxy(110,49); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 39 (IMPUESTOS 75$)
                        break;
                        case 39:
                            gotoxy(113,51); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 40 (EL MUELLE)
                        break;
                    }
                break;
            }

/*
            if(_players[0]->quiebra && !player[0])
            {
                numeroDeJugadoresEnQuiebra += 1;
                player[0] = true;
            }

            if(_players[1]->quiebra && !player[1])
            {
                numeroDeJugadoresEnQuiebra += 1;
                player[1] = true;
            }

            if(_players[2]->quiebra && !player[2])
            {
                numeroDeJugadoresEnQuiebra += 1;
                player[2] = true;
            }

            if(_players[3]->quiebra && !player[3])
            {
                numeroDeJugadoresEnQuiebra += 1;
                player[3] = true;
            }

        }while(numeroDeJugadoresEnQuiebra != 3); */

        break;

    case 5: // PARA 5 JUGADORES
        //do {
            switch(nJugador) // TURNO DEL JUGADOR
            {
                case 0: // JUGADOR N1

                    switch(_players[0].posicion) // POSICION DEL JUGADOR EN TURNO
                    {
                        case 0:
                            gotoxy(107,57); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 1 (GO)
                        break;
                        case 1:
                            gotoxy(97,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 2 (AV. MEDITERRANEO)
                        break;
                        case 2:
                            gotoxy(87,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 3 (ARCA COMUNAL)
                        break;
                        case 3:
                            gotoxy(77,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 4 (AV. BALTICA)
                        break;
                        case 4:
                            gotoxy(66,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 5 (IMPUESTOS 200$)
                        break;
                        case 5:
                            gotoxy(57,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 6 (FERROCARRIL "READINDG")
                        break;
                        case 6:
                            gotoxy(47,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 7 (AV. ORIENTAL)
                        break;
                        case 7:
                            gotoxy(37,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 8 (CASUALIDAD)
                        break;
                        case 8:
                            gotoxy(27,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 9 (AV. VERMONT)
                        break;
                        case 9:
                            gotoxy(17,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 10 (AV. CONNECTICUT)
                        break;
                        case 10:
                            if(_players[0].carcel)
                            {
                                gotoxy(10,56); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 11 (CARCEL)
                            }
                            else
                            {
                                gotoxy(7,56); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 11 (CARCEL DE VISITA)
                            }
                        break;
                        case 11:
                            gotoxy(10,51); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 12 (PLAZA SAN CARLOS)
                        break;
                        case 12:
                            gotoxy(9,49); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 13 (COMPAÑIA ELECTRICA)
                        break;
                        case 13:
                             gotoxy(10,41); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 14 (PLAZA AV. STATUS)
                        break;
                        case 14:
                            gotoxy(10,36); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 15 (AV. VIRGINIA)
                        break;
                        case 15:
                            gotoxy(7,33); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 16 (FERROCARRIL PENNSYLVANIA)
                        break;
                        case 16:
                            gotoxy(10,26); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 17 (PLAZA ST. JAMES)
                        break;
                        case 17:
                            gotoxy(7,23); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 18 (ARCA COMUNAL)
                        break;
                        case 18:
                            gotoxy(10,16); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 19 (AV. TENNESSEE)
                        break;
                        case 19:
                            gotoxy(10,11); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 20 (AV. NUEVA YORK)
                        break;
                        case 20:
                            gotoxy(8,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 21 (PARDA LIBRE)
                        break;
                        case 21:
                            gotoxy(23,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 22 (AV. KENTUCKY)
                        break;
                        case 22:
                            gotoxy(33,8); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 23 (CASUALIDAD)
                        break;
                        case 23:
                            gotoxy(43,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 24 (AV. INDIANA)
                        break;
                        case 24:
                            gotoxy(53,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 25 (AV. ILLINOIS)
                        break;
                        case 25:
                            gotoxy(62,8); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 26 (FERROCARRIL B&O)
                        break;
                        case 26:
                            gotoxy(73,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 27 (AV. ATLANTICO)
                        break;
                        case 27:
                            gotoxy(83,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 28 (AV. VETNOR)
                        break;
                        case 28:
                            gotoxy(92,8); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 29 (COMPAÑIA DE AGUA)
                        break;
                        case 29:
                            gotoxy(103,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 30 (JARDINES MARVIN)
                        break;
                        case 30:
                            gotoxy(108,8); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 31 (POLICIA)
                        break;
                        case 31:
                            gotoxy(110,14); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 32 (AV. PACIFICO)
                        break;
                        case 32:
                            gotoxy(110,19); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 33 (AV. CAROLINA DEL NORTE)
                        break;
                        case 33:
                            gotoxy(107,23); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 34 (ARCA COMUNAL)
                        break;
                        case 34:
                            gotoxy(110,29); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 35 (AV. PENNSYLVANIA)
                        break;
                        case 35:
                            gotoxy(107,33); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 36 (FERROCARRIL VIA RAPIDA)
                        break;
                        case 36:
                            gotoxy(107,38); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 37 (CASUALIDAD)
                        break;
                        case 37:
                            gotoxy(110,44); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 38 (PLAZA PARK)
                        break;
                        case 38:
                            gotoxy(108,48); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 39 (IMPUESTOS 75$)
                        break;
                        case 39:
                            gotoxy(110,54); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 40 (EL MUELLE)
                        break;
                    }
                break;

                case 1: // JUGADOR N2

                    switch(_players[1].posicion) // POSICION DEL JUGADOR EN TURNO
                    {
                        case 0:
                            gotoxy(109,57); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 1 (GO)
                        break;
                        case 1:
                            gotoxy(100,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 2 (AV. MEDITERRANEO)
                        break;
                        case 2:
                            gotoxy(89,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 3 (ARCA COMUNAL)
                        break;
                        case 3:
                            gotoxy(80,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 4 (AV. BALTICA)
                        break;
                        case 4:
                            gotoxy(68,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 5 (IMPUESTOS 200$)
                        break;
                        case 5:
                            gotoxy(58,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 6 (FERROCARRIL "READINDG")
                        break;
                        case 6:
                            gotoxy(50,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 7 (AV. ORIENTAL)
                        break;
                        case 7:
                            gotoxy(38,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 8 (CASUALIDAD)
                        break;
                        case 8:
                            gotoxy(30,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 9 (AV. VERMONT)
                        break;
                        case 9:
                            gotoxy(20,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 10 (AV. CONNECTICUT)
                        break;
                        case 10:
                            if(_players[1].carcel)
                            {
                                gotoxy(10,57); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 11 (CARCEL)
                            }
                            else
                            {
                                gotoxy(7,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 11 (CARCEL DE VISITA)
                            }
                        break;
                        case 11:
                            gotoxy(10,54); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 12 (PLAZA SAN CARLOS)
                        break;
                        case 12:
                            gotoxy(12,48); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 13 (COMPAÑIA ELECTRICA)
                        break;
                        case 13:
                            gotoxy(10,44); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 14 (PLAZA AV. STATUS)
                        break;
                        case 14:
                            gotoxy(10,39); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 15 (AV. VIRGINIA)
                        break;
                        case 15:
                            gotoxy(8,33); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 16 (FERROCARRIL PENNSYLVANIA)
                        break;
                        case 16:
                            gotoxy(10,29); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 17 (PLAZA ST. JAMES)
                        break;
                        case 17:
                            gotoxy(9,23); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 18 (ARCA COMUNAL)
                        break;
                        case 18:
                            gotoxy(10,19); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 19 (AV. TENNESSEE)
                        break;
                        case 19:
                            gotoxy(10,14); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 20 (AV. NUEVA YORK)
                        break;
                        case 20:
                            gotoxy(9,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 21 (PARADA LIBRE)
                        break;
                        case 21:
                            gotoxy(20,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 22 (AV. KENTUCKY)
                        break;
                        case 22:
                            gotoxy(32,8); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 23 (CASUALIDAD)
                        break;
                        case 23:
                            gotoxy(40,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 24 (AV. INDIANA)
                        break;
                        case 24:
                            gotoxy(50,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 25 (AV. ILLINOIS)
                        break;
                        case 25:
                            gotoxy(61,8); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 26 (FERROCARRIL B&O)
                        break;
                        case 26:
                            gotoxy(70,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 27 (AV. ATLANTICO)
                        break;
                        case 27:
                            gotoxy(80,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 28 (AV. VETNOR)
                        break;
                        case 28:
                            gotoxy(91,8); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 29 (COMPAÑIA DE AGUA)
                        break;
                        case 29:
                            gotoxy(100,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 30 (JARDINES MARVIN)
                        break;
                        case 30:
                            gotoxy(110,6); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 31 (POLICIA)
                        break;
                        case 31:
                            gotoxy(110,11); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 32 (AV. PACIFICO)
                        break;
                        case 32:
                            gotoxy(110,16); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 33 (AV. CAROLINA DEL NORTE)
                        break;
                        case 33:
                            gotoxy(109,23); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 34 (ARCA COMUNAL)
                        break;
                        case 34:
                            gotoxy(110,26); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 35 (AV. PENNSYLVANIA)
                        break;
                        case 35:
                            gotoxy(108,33); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 36 (FERROCARRIL VIA RAPIDA)
                        break;
                        case 36:
                            gotoxy(108,38); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 37 (CASUALIDAD)
                        break;
                        case 37:
                            gotoxy(110,41); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 38 (PLAZA PARK)
                        break;
                        case 38:
                            gotoxy(110,48); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 39 (IMPUESTOS 75$)
                        break;
                        case 39:
                            gotoxy(110,51); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 40 (EL MUELLE)
                        break;
                    }
                break;

                case 2: // JUGADOR N3

                    switch(_players[2].posicion) // POSICION DEL JUGADOR EN TURNO
                    {
                        case 0:
                            gotoxy(111,57); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 1 (GO)
                        break;
                        case 1:
                            gotoxy(103,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 2 (AV. MEDITERRANEO)
                        break;
                        case 2:
                            gotoxy(91,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 3 (ARCA COMUNAL)
                        break;
                        case 3:
                            gotoxy(83,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 4 (AV. BALTICA)
                        break;
                        case 4:
                            gotoxy(70,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 5 (IMPUESTOS 200$)
                        break;
                        case 5:
                            gotoxy(60,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 6 (FERROCARRIL "READINDG")
                        break;
                        case 6:
                            gotoxy(53,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 7 (AV. ORIENTAL)
                        break;
                        case 7:
                            gotoxy(42,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 8 (CASUALIDAD)
                        break;
                        case 8:
                            gotoxy(33,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 9 (AV. VERMONT)
                        break;
                        case 9:
                            gotoxy(23,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 10 (AV. CONNECTICUT)
                        break;
                        case 10:
                            if(_players[2].carcel)
                            {
                                gotoxy(12,56); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 11 (CARCEL)
                            }
                            else
                            {
                                gotoxy(7,59); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 11 (CARCEL DE VISITA)
                            }
                        break;
                        case 11:
                            gotoxy(7,51); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 12 (PLAZA SAN CARLOS)
                        break;
                        case 12:
                            gotoxy(8,48); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 13 (COMPAÑIA ELECTRICA)
                        break;
                        case 13:
                            gotoxy(7,41); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 14 (PLAZA AV. STATUS)
                        break;
                        case 14:
                            gotoxy(7,36); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 15 (AV. VIRGINIA)
                        break;
                        case 15:
                            gotoxy(10,33); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 16 (FERROCARRIL PENNSYLVANIA)
                        break;
                        case 16:
                            gotoxy(7,26); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 17 (PLAZA ST. JAMES)
                        break;
                        case 17:
                            gotoxy(11,23); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 18 (ARCA COMUNAL)
                        break;
                        case 18:
                            gotoxy(7,16); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 19 (AV. TENNESSEE)
                        break;
                        case 19:
                            gotoxy(7,11); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 20 (AV. NUEVA YORK)
                        break;
                        case 20:
                            gotoxy(10,7); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 21 (PARADA LIBRE)
                        break;
                        case 21:
                            gotoxy(17,7); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 22 (AV. KENTUCKY)
                        break;
                        case 22:
                            gotoxy(28,8); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 23 (CASUALIDAD)
                        break;
                        case 23:
                            gotoxy(37,7); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 24 (AV. INDIANA)
                        break;
                        case 24:
                            gotoxy(47,7); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 25 (AV. ILLINOIS)
                        break;
                        case 25:
                            gotoxy(60,8); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 26 (FERROCARRIL B&O)
                        break;
                        case 26:
                            gotoxy(67,7); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 27 (AV. ATLANTICO)
                        break;
                        case 27:
                            gotoxy(77,7); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 28 (AV. VETNOR)
                        break;
                        case 28:
                            gotoxy(90,8); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 29 (COMPAÑIA DE AGUA)
                        break;
                        case 29:
                            gotoxy(97,7); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 30 (JARDINES MARVIN)
                        break;
                        case 30:
                            gotoxy(112,8); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 31 (POLICIA)
                        break;
                        case 31:
                            gotoxy(113,14); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 32 (AV. PACIFICO)
                        break;
                        case 32:
                            gotoxy(113,19); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 33 (AV. CAROLINA DEL NORTE)
                        break;
                        case 33:
                            gotoxy(111,23); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 34 (ARCA COMUNAL)
                        break;
                        case 34:
                            gotoxy(113,29); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 35 (AV. PENNSYLVANIA)
                        break;
                        case 35:
                            gotoxy(110,33); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 36 (FERROCARRIL VIA RAPIDA)
                        break;
                        case 36:
                            gotoxy(112,38); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 37 (CASUALIDAD)
                        break;
                        case 37:
                            gotoxy(113,44); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 38 (PLAZA PARK)
                        break;
                        case 38:
                            gotoxy(112,48); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 39 (IMPUESTOS 75$)
                        break;
                        case 39:
                            gotoxy(113,54); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 40 (EL MUELLE)
                        break;
                    }
                break;

                case 3: // JUGADOR N4

                    switch(_players[3].posicion) // POSICION DEL JUGADOR EN TURNO
                    {
                        case 0:
                            gotoxy(113,57); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 1 (GO)
                        break;
                        case 1:
                            gotoxy(99,59); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 2 (AV. MEDITERRANEO)
                        break;
                        case 2:
                            gotoxy(93,58); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 3 (ARCA COMUNAL)
                        break;
                        case 3:
                            gotoxy(79,59); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 4 (AV. BALTICA)
                        break;
                        case 4:
                            gotoxy(72,58); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 5 (IMPUESTOS 200$)
                        break;
                        case 5:
                            gotoxy(61,58); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 6 (FERROCARRIL "READINDG")
                        break;
                        case 6:
                            gotoxy(49,59); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 7 (AV. ORIENTAL)
                        break;
                        case 7:
                            gotoxy(43,58); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 8 (CASUALIDAD)
                        break;
                        case 8:
                            gotoxy(29,59); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 9 (AV. VERMONT)
                        break;
                        case 9:
                            gotoxy(19,59); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 10 (AV. CONNECTICUT)
                        break;
                        case 10:
                            if(_players[3].carcel)
                            {
                                gotoxy(12,57); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 11 (CARCEL)
                            }
                            else
                            {
                                gotoxy(9,59); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 11 (CARCEL DE VISITA)
                            }
                        break;
                        case 11:
                            gotoxy(7,54); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 12 (PLAZA SAN CARLOS)
                        break;
                        case 12:
                            gotoxy(11,49); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 13 (COMPAÑIA ELECTRICA)
                        break;
                        case 13:
                            gotoxy(7,44); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 14 (PLAZA AV. STATUS)
                        break;
                        case 14:
                            gotoxy(7,39); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 15 (AV. VIRGINIA)
                        break;
                        case 15:
                            gotoxy(11,33); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 16 (FERROCARRIL PENNSYLVANIA)
                        break;
                        case 16:
                            gotoxy(7,29); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 17 (PLAZA ST. JAMES)
                        break;
                        case 17:
                            gotoxy(13,23); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 18 (ARCA COMUNAL)
                        break;
                        case 18:
                            gotoxy(7,19); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 19 (AV. TENNESSEE)
                        break;
                        case 19:
                            gotoxy(7,14); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 20 (AV. NUEVA YORK)
                        break;
                        case 20:
                            gotoxy(11,7); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 21 (PARADA LIBRE)
                        break;
                        case 21:
                            gotoxy(21,6); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 22 (AV. KENTUCKY)
                        break;
                        case 22:
                            gotoxy(27,8); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 23 (CASUALIDAD)
                        break;
                        case 23:
                            gotoxy(41,6); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 24 (AV. INDIANA)
                        break;
                        case 24:
                            gotoxy(51,6); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 25 (AV. ILLINOIS)
                        break;
                        case 25:
                            gotoxy(58,8); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 26 (FERROCARRIL B&O)
                        break;
                        case 26:
                            gotoxy(71,6); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 27 (AV. ATLANTICO)
                        break;
                        case 27:
                            gotoxy(81,6); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 28 (AV. VETNOR)
                        break;
                        case 28:
                            gotoxy(89,8); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 29 (COMPAÑIA DE AGUA)
                        break;
                        case 29:
                            gotoxy(101,6); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 30 (JARDINES MARVIN)
                        break;
                        case 30:
                            gotoxy(110,9); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 31 (POLICIA)
                        break;
                        case 31:
                            gotoxy(113,11); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 32 (AV. PACIFICO)
                        break;
                        case 32:
                            gotoxy(113,16); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 33 (AV. CAROLINA DEL NORTE)
                        break;
                        case 33:
                            gotoxy(113,23); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 34 (ARCA COMUNAL)
                        break;
                        case 34:
                            gotoxy(113,26); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 35 (AV. PENNSYLVANIA)
                        break;
                        case 35:
                            gotoxy(111,33); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 36 (FERROCARRIL VIA RAPIDA)
                        break;
                        case 36:
                            gotoxy(113,38); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 37 (CASUALIDAD)
                        break;
                        case 37:
                            gotoxy(113,41); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 38 (PLAZA PARK)
                        break;
                        case 38:
                           gotoxy(110,49); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 39 (IMPUESTOS 75$)
                        break;
                        case 39:
                            gotoxy(113,51); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 40 (EL MUELLE)
                        break;
                    }
                break;

                case 4: // JUGADOR N5

                    switch(_players[4].posicion) // POSICION DEL JUGADOR EN TURNO
                    {
                        case 0:
                            gotoxy(110,58); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 1 (GO)
                        break;
                        case 1:
                            gotoxy(101,59); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 2 (AV. MEDITERRANEO)
                        break;
                        case 2:
                            gotoxy(90,59); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 3 (ARCA COMUNAL)
                        break;
                        case 3:
                            gotoxy(81,59); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 4 (AV. BALTICA)
                        break;
                        case 4:
                            gotoxy(74,58); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 5 (IMPUESTOS 200$)
                        break;
                        case 5:
                            gotoxy(62,58); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 6 (FERROCARRIL "READINDG")
                        break;
                        case 6:
                            gotoxy(51,59); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 7 (AV. ORIENTAL)
                        break;
                        case 7:
                            gotoxy(40,57); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 8 (CASUALIDAD)
                        break;
                        case 8:
                            gotoxy(31,59); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 9 (AV. VERMONT)
                        break;
                        case 9:
                            gotoxy(21,59); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 10 (AV. CONNECTICUT)
                        break;
                        case 10:
                            if(_players[4].carcel)
                            {
                                gotoxy(14,56); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 11 (CARCEL)
                            }
                            else
                            {
                                gotoxy(13,59); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 11 (CARCEL DE VISITA)
                            }
                        break;
                        case 11:
                            gotoxy(8,53); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 12 (PLAZA SAN CARLOS)
                        break;
                        case 12:
                            gotoxy(10,47); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 13 (COMPAÑIA ELECTRICA)
                        break;
                        case 13:
                            gotoxy(8,42); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 14 (PLAZA AV. STATUS)
                        break;
                        case 14:
                            gotoxy(8,38); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 15 (AV. VIRGINIA)
                        break;
                        case 15:
                            gotoxy(12,33); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 16 (FERROCARRIL PENNSYLVANIA)
                        break;
                        case 16:
                            gotoxy(8,27); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 17 (PLAZA ST. JAMES)
                        break;
                        case 17:
                            gotoxy(10,24); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 18 (ARCA COMUNAL)
                        break;
                        case 18:
                            gotoxy(8,18); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 19 (AV. TENNESSEE)
                        break;
                        case 19:
                            gotoxy(8,12); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 20 (AV. NUEVA YORK)
                        break;
                        case 20:
                            gotoxy(12,7); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 21 (PARADA LIBRE)
                        break;
                        case 21:
                            gotoxy(19,6); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 22 (AV. KENTUCKY)
                        break;
                        case 22:
                            gotoxy(30,7); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 23 (CASUALIDAD)
                        break;
                        case 23:
                            gotoxy(39,6); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 24 (AV. INDIANA)
                        break;
                        case 24:
                            gotoxy(49,6); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 25 (AV. ILLINOIS)
                        break;
                        case 25:
                            gotoxy(57,8); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 26 (FERROCARRIL B&O)
                        break;
                        case 26:
                            gotoxy(69,6); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 27 (AV. ATLANTICO)
                        break;
                        case 27:
                            gotoxy(79,6); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 28 (AV. VETNOR)
                        break;
                        case 28:
                            gotoxy(88,8); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 29 (COMPAÑIA DE AGUA)
                        break;
                        case 29:
                            gotoxy(99,6); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 30 (JARDINES MARVIN)
                        break;
                        case 30:
                            gotoxy(110,8); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 31 (POLICIA)
                        break;
                        case 31:
                            gotoxy(111,12); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 32 (AV. PACIFICO)
                        break;
                        case 32:
                            gotoxy(111,18); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 33 (AV. CAROLINA DEL NORTE)
                        break;
                        case 33:
                            gotoxy(110,24); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 34 (ARCA COMUNAL)
                        break;
                        case 34:
                            gotoxy(111,27); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 35 (AV. PENNSYLVANIA)
                        break;
                        case 35:
                            gotoxy(112,33); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 36 (FERROCARRIL VIA RAPIDA)
                        break;
                        case 36:
                            gotoxy(110,37); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 37 (CASUALIDAD)
                        break;
                        case 37:
                            gotoxy(111,43); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 38 (PLAZA PARK)
                        break;
                        case 38:
                           gotoxy(110,47); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 39 (IMPUESTOS 75$)
                        break;
                        case 39:
                            gotoxy(111,52); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 40 (EL MUELLE)
                        break;
                    }
                break;
            }
            /*
            if(_players[0]->quiebra && !player[0])
            {
                numeroDeJugadoresEnQuiebra += 1;
                player[0] = true;
            }

            if(_players[1]->quiebra && !player[1])
            {
                numeroDeJugadoresEnQuiebra += 1;
                player[1] = true;
            }

            if(_players[2]->quiebra && !player[2])
            {
                numeroDeJugadoresEnQuiebra += 1;
                player[2] = true;
            }

            if(_players[3]->quiebra && !player[3])
            {
                numeroDeJugadoresEnQuiebra += 1;
                player[3] = true;
            }

            if(_players[4]->quiebra && !player[4])
            {
                numeroDeJugadoresEnQuiebra += 1;
                player[4] = true;
            }

        }while(numeroDeJugadoresEnQuiebra != 4); */

        break;

    case 6: // PARA 6 JUGADORES

       // do {
            switch(nJugador) // TURNO DEL JUGADOR
            {
                case 0: // JUGADOR N1

                    switch(_players[0].posicion) // POSICION DEL JUGADOR EN TURNO
                    {
                        case 0:
                            gotoxy(107,57); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 1 (GO)
                        break;
                        case 1:
                            gotoxy(97,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 2 (AV. MEDITERRANEO)
                        break;
                        case 2:
                            gotoxy(87,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 3 (ARCA COMUNAL)
                        break;
                        case 3:
                            gotoxy(77,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 4 (AV. BALTICA)
                        break;
                        case 4:
                            gotoxy(66,57); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 5 (IMPUESTOS 200$)
                        break;
                        case 5:
                            gotoxy(57,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 6 (FERROCARRIL "READINDG")
                        break;
                        case 6:
                            gotoxy(47,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 7 (AV. ORIENTAL)
                        break;
                        case 7:
                            gotoxy(37,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 8 (CASUALIDAD)
                        break;
                        case 8:
                            gotoxy(27,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 9 (AV. VERMONT)
                        break;
                        case 9:
                            gotoxy(17,58); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 10 (AV. CONNECTICUT)
                        break;
                        case 10:
                            if(_players[0].carcel)
                            {
                                gotoxy(10,56); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 11 (CARCEL)
                            }
                            else
                            {
                                gotoxy(7,56); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 11 (CARCEL DE VISITA)
                            }
                        break;
                        case 11:
                            gotoxy(10,51); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 12 (PLAZA SAN CARLOS)
                        break;
                        case 12:
                            gotoxy(9,49); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 13 (COMPAÑIA ELECTRICA)
                        break;
                        case 13:
                             gotoxy(10,41); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 14 (PLAZA AV. STATUS)
                        break;
                        case 14:
                            gotoxy(10,36); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 15 (AV. VIRGINIA)
                        break;
                        case 15:
                            gotoxy(7,33); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 16 (FERROCARRIL PENNSYLVANIA)
                        break;
                        case 16:
                            gotoxy(10,26); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 17 (PLAZA ST. JAMES)
                        break;
                        case 17:
                            gotoxy(7,23); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 18 (ARCA COMUNAL)
                        break;
                        case 18:
                            gotoxy(10,16); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 19 (AV. TENNESSEE)
                        break;
                        case 19:
                            gotoxy(10,11); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 20 (AV. NUEVA YORK)
                        break;
                        case 20:
                            gotoxy(8,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 21 (PARDA LIBRE)
                        break;
                        case 21:
                            gotoxy(23,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 22 (AV. KENTUCKY)
                        break;
                        case 22:
                            gotoxy(33,8); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 23 (CASUALIDAD)
                        break;
                        case 23:
                            gotoxy(43,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 24 (AV. INDIANA)
                        break;
                        case 24:
                            gotoxy(53,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 25 (AV. ILLINOIS)
                        break;
                        case 25:
                            gotoxy(62,8); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 26 (FERROCARRIL B&O)
                        break;
                        case 26:
                            gotoxy(73,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 27 (AV. ATLANTICO)
                        break;
                        case 27:
                            gotoxy(83,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 28 (AV. VETNOR)
                        break;
                        case 28:
                            gotoxy(92,8); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 29 (COMPAÑIA DE AGUA)
                        break;
                        case 29:
                            gotoxy(103,7); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 30 (JARDINES MARVIN)
                        break;
                        case 30:
                            gotoxy(108,8); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 31 (POLICIA)
                        break;
                        case 31:
                            gotoxy(110,14); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 32 (AV. PACIFICO)
                        break;
                        case 32:
                            gotoxy(110,19); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 33 (AV. CAROLINA DEL NORTE)
                        break;
                        case 33:
                            gotoxy(107,23); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 34 (ARCA COMUNAL)
                        break;
                        case 34:
                            gotoxy(110,29); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 35 (AV. PENNSYLVANIA)
                        break;
                        case 35:
                            gotoxy(107,33); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 36 (FERROCARRIL VIA RAPIDA)
                        break;
                        case 36:
                            gotoxy(107,38); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 37 (CASUALIDAD)
                        break;
                        case 37:
                            gotoxy(110,44); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 38 (PLAZA PARK)
                        break;
                        case 38:
                            gotoxy(108,48); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 39 (IMPUESTOS 75$)
                        break;
                        case 39:
                            gotoxy(110,54); textcolor(RED); printf("%c",254); // JUGADOR 1 POSICION 40 (EL MUELLE)
                        break;
                    }
                break;

                case 1: // JUGADOR N2

                    switch(_players[1].posicion) // POSICION DEL JUGADOR EN TURNO
                    {
                        case 0:
                            gotoxy(109,57); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 1 (GO)
                        break;
                        case 1:
                            gotoxy(100,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 2 (AV. MEDITERRANEO)
                        break;
                        case 2:
                            gotoxy(89,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 3 (ARCA COMUNAL)
                        break;
                        case 3:
                            gotoxy(80,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 4 (AV. BALTICA)
                        break;
                        case 4:
                            gotoxy(66,59); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 5 (IMPUESTOS 200$)
                        break;
                        case 5:
                            gotoxy(58,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 6 (FERROCARRIL "READINDG")
                        break;
                        case 6:
                            gotoxy(50,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 7 (AV. ORIENTAL)
                        break;
                        case 7:
                            gotoxy(38,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 8 (CASUALIDAD)
                        break;
                        case 8:
                            gotoxy(30,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 9 (AV. VERMONT)
                        break;
                        case 9:
                            gotoxy(20,58); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 10 (AV. CONNECTICUT)
                        break;
                        case 10:
                            if(_players[1].carcel)
                            {
                                gotoxy(10,57); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 11 (CARCEL)
                            }
                            else
                            {
                                gotoxy(7,57); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 11 (CARCEL DE VISITA)
                            }
                        break;
                        case 11:
                            gotoxy(10,54); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 12 (PLAZA SAN CARLOS)
                        break;
                        case 12:
                            gotoxy(12,48); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 13 (COMPAÑIA ELECTRICA)
                        break;
                        case 13:
                            gotoxy(10,44); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 14 (PLAZA AV. STATUS)
                        break;
                        case 14:
                            gotoxy(10,39); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 15 (AV. VIRGINIA)
                        break;
                        case 15:
                            gotoxy(8,33); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 16 (FERROCARRIL PENNSYLVANIA)
                        break;
                        case 16:
                            gotoxy(10,29); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 17 (PLAZA ST. JAMES)
                        break;
                        case 17:
                            gotoxy(9,23); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 18 (ARCA COMUNAL)
                        break;
                        case 18:
                            gotoxy(10,19); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 19 (AV. TENNESSEE)
                        break;
                        case 19:
                            gotoxy(10,14); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 20 (AV. NUEVA YORK)
                        break;
                        case 20:
                            gotoxy(9,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 21 (PARADA LIBRE)
                        break;
                        case 21:
                            gotoxy(20,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 22 (AV. KENTUCKY)
                        break;
                        case 22:
                            gotoxy(32,8); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 23 (CASUALIDAD)
                        break;
                        case 23:
                            gotoxy(40,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 24 (AV. INDIANA)
                        break;
                        case 24:
                            gotoxy(50,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 25 (AV. ILLINOIS)
                        break;
                        case 25:
                            gotoxy(61,8); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 26 (FERROCARRIL B&O)
                        break;
                        case 26:
                            gotoxy(70,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 27 (AV. ATLANTICO)
                        break;
                        case 27:
                            gotoxy(80,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 28 (AV. VETNOR)
                        break;
                        case 28:
                            gotoxy(91,8); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 29 (COMPAÑIA DE AGUA)
                        break;
                        case 29:
                            gotoxy(100,7); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 30 (JARDINES MARVIN)
                        break;
                        case 30:
                            gotoxy(110,6); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 31 (POLICIA)
                        break;
                        case 31:
                            gotoxy(110,11); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 32 (AV. PACIFICO)
                        break;
                        case 32:
                            gotoxy(110,16); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 33 (AV. CAROLINA DEL NORTE)
                        break;
                        case 33:
                            gotoxy(109,23); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 34 (ARCA COMUNAL)
                        break;
                        case 34:
                            gotoxy(110,26); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 35 (AV. PENNSYLVANIA)
                        break;
                        case 35:
                            gotoxy(108,33); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 36 (FERROCARRIL VIA RAPIDA)
                        break;
                        case 36:
                            gotoxy(108,38); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 37 (CASUALIDAD)
                        break;
                        case 37:
                            gotoxy(110,41); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 38 (PLAZA PARK)
                        break;
                        case 38:
                            gotoxy(110,48); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 39 (IMPUESTOS 75$)
                        break;
                        case 39:
                            gotoxy(110,51); textcolor(BLUE); printf("%c",254); // JUGADOR 2 POSICION 40 (EL MUELLE)
                        break;
                    }
                break;

                case 2: // JUGADOR N3

                    switch(_players[2].posicion) // POSICION DEL JUGADOR EN TURNO
                    {
                        case 0:
                            gotoxy(111,57); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 1 (GO)
                        break;
                        case 1:
                            gotoxy(103,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 2 (AV. MEDITERRANEO)
                        break;
                        case 2:
                            gotoxy(91,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 3 (ARCA COMUNAL)
                        break;
                        case 3:
                            gotoxy(83,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 4 (AV. BALTICA)
                        break;
                        case 4:
                            gotoxy(68,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 5 (IMPUESTOS 200$)
                        break;
                        case 5:
                            gotoxy(59,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 6 (FERROCARRIL "READINDG")
                        break;
                        case 6:
                            gotoxy(53,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 7 (AV. ORIENTAL)
                        break;
                        case 7:
                            gotoxy(42,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 8 (CASUALIDAD)
                        break;
                        case 8:
                            gotoxy(33,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 9 (AV. VERMONT)
                        break;
                        case 9:
                            gotoxy(23,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 10 (AV. CONNECTICUT)
                        break;
                        case 10:
                            if(_players[2].carcel)
                            {
                                gotoxy(12,56); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 11 (CARCEL)
                            }
                            else
                            {
                                gotoxy(7,58); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 11 (CARCEL DE VISITA)
                            }
                        break;
                        case 11:
                            gotoxy(7,51); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 12 (PLAZA SAN CARLOS)
                        break;
                        case 12:
                            gotoxy(8,48); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 13 (COMPAÑIA ELECTRICA)
                        break;
                        case 13:
                            gotoxy(7,41); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 14 (PLAZA AV. STATUS)
                        break;
                        case 14:
                            gotoxy(7,36); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 15 (AV. VIRGINIA)
                        break;
                        case 15:
                            gotoxy(9,33); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 16 (FERROCARRIL PENNSYLVANIA)
                        break;
                        case 16:
                            gotoxy(7,26); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 17 (PLAZA ST. JAMES)
                        break;
                        case 17:
                            gotoxy(11,23); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 18 (ARCA COMUNAL)
                        break;
                        case 18:
                            gotoxy(7,16); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 19 (AV. TENNESSEE)
                        break;
                        case 19:
                            gotoxy(7,11); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 20 (AV. NUEVA YORK)
                        break;
                        case 20:
                            gotoxy(10,7); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 21 (PARADA LIBRE)
                        break;
                        case 21:
                            gotoxy(17,7); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 22 (AV. KENTUCKY)
                        break;
                        case 22:
                            gotoxy(28,8); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 23 (CASUALIDAD)
                        break;
                        case 23:
                            gotoxy(37,7); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 24 (AV. INDIANA)
                        break;
                        case 24:
                            gotoxy(47,7); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 25 (AV. ILLINOIS)
                        break;
                        case 25:
                            gotoxy(60,8); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 26 (FERROCARRIL B&O)
                        break;
                        case 26:
                            gotoxy(67,7); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 27 (AV. ATLANTICO)
                        break;
                        case 27:
                            gotoxy(77,7); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 28 (AV. VETNOR)
                        break;
                        case 28:
                            gotoxy(90,8); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 29 (COMPAÑIA DE AGUA)
                        break;
                        case 29:
                            gotoxy(97,7); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 30 (JARDINES MARVIN)
                        break;
                        case 30:
                            gotoxy(112,8); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 31 (POLICIA)
                        break;
                        case 31:
                            gotoxy(113,14); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 32 (AV. PACIFICO)
                        break;
                        case 32:
                            gotoxy(113,19); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 33 (AV. CAROLINA DEL NORTE)
                        break;
                        case 33:
                            gotoxy(111,23); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 34 (ARCA COMUNAL)
                        break;
                        case 34:
                            gotoxy(113,29); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 35 (AV. PENNSYLVANIA)
                        break;
                        case 35:
                            gotoxy(109,33); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 36 (FERROCARRIL VIA RAPIDA)
                        break;
                        case 36:
                            gotoxy(112,38); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 37 (CASUALIDAD)
                        break;
                        case 37:
                            gotoxy(113,44); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 38 (PLAZA PARK)
                        break;
                        case 38:
                            gotoxy(112,48); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 39 (IMPUESTOS 75$)
                        break;
                        case 39:
                            gotoxy(113,54); textcolor(YELLOW); printf("%c",254); // JUGADOR 3 POSICION 40 (EL MUELLE)
                        break;
                    }
                break;

                case 3: // JUGADOR N4

                    switch(_players[3].posicion) // POSICION DEL JUGADOR EN TURNO
                    {
                        case 0:
                            gotoxy(113,57); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 1 (GO)
                        break;
                        case 1:
                            gotoxy(97,59); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 2 (AV. MEDITERRANEO)
                        break;
                        case 2:
                            gotoxy(93,58); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 3 (ARCA COMUNAL)
                        break;
                        case 3:
                            gotoxy(77,59); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 4 (AV. BALTICA)
                        break;
                        case 4:
                            gotoxy(72,58); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 5 (IMPUESTOS 200$)
                        break;
                        case 5:
                            gotoxy(60,58); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 6 (FERROCARRIL "READINDG")
                        break;
                        case 6:
                            gotoxy(47,59); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 7 (AV. ORIENTAL)
                        break;
                        case 7:
                            gotoxy(43,58); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 8 (CASUALIDAD)
                        break;
                        case 8:
                            gotoxy(27,59); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 9 (AV. VERMONT)
                        break;
                        case 9:
                            gotoxy(17,59); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 10 (AV. CONNECTICUT)
                        break;
                        case 10:
                            if(_players[3].carcel)
                            {
                                gotoxy(12,57); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 11 (CARCEL)
                            }
                            else
                            {
                                gotoxy(9,59); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 11 (CARCEL DE VISITA)
                            }
                        break;
                        case 11:
                            gotoxy(7,54); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 12 (PLAZA SAN CARLOS)
                        break;
                        case 12:
                            gotoxy(11,49); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 13 (COMPAÑIA ELECTRICA)
                        break;
                        case 13:
                            gotoxy(7,44); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 14 (PLAZA AV. STATUS)
                        break;
                        case 14:
                            gotoxy(7,39); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 15 (AV. VIRGINIA)
                        break;
                        case 15:
                             gotoxy(10,33); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 16 (FERROCARRIL PENNSYLVANIA)
                        break;
                        case 16:
                            gotoxy(7,29); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 17 (PLAZA ST. JAMES)
                        break;
                        case 17:
                            gotoxy(13,23); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 18 (ARCA COMUNAL)
                        break;
                        case 18:
                            gotoxy(7,19); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 19 (AV. TENNESSEE)
                        break;
                        case 19:
                            gotoxy(7,14); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 20 (AV. NUEVA YORK)
                        break;
                        case 20:
                            gotoxy(11,7); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 21 (PARADA LIBRE)
                        break;
                        case 21:
                            gotoxy(23,6); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 22 (AV. KENTUCKY)
                        break;
                        case 22:
                            gotoxy(27,8); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 23 (CASUALIDAD)
                        break;
                        case 23:
                            gotoxy(43,6); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 24 (AV. INDIANA)
                        break;
                        case 24:
                            gotoxy(53,6); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 25 (AV. ILLINOIS)
                        break;
                        case 25:
                            gotoxy(59,8); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 26 (FERROCARRIL B&O)
                        break;
                        case 26:
                            gotoxy(73,6); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 27 (AV. ATLANTICO)
                        break;
                        case 27:
                            gotoxy(83,6); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 28 (AV. VETNOR)
                        break;
                        case 28:
                            gotoxy(89,8); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 29 (COMPAÑIA DE AGUA)
                        break;
                        case 29:
                            gotoxy(103,6); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 30 (JARDINES MARVIN)
                        break;
                        case 30:
                            gotoxy(108,9); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 31 (POLICIA)
                        break;
                        case 31:
                            gotoxy(113,11); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 32 (AV. PACIFICO)
                        break;
                        case 32:
                            gotoxy(113,16); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 33 (AV. CAROLINA DEL NORTE)
                        break;
                        case 33:
                            gotoxy(113,23); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 34 (ARCA COMUNAL)
                        break;
                        case 34:
                            gotoxy(113,26); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 35 (AV. PENNSYLVANIA)
                        break;
                        case 35:
                            gotoxy(110,33); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 36 (FERROCARRIL VIA RAPIDA)
                        break;
                        case 36:
                            gotoxy(113,38); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 37 (CASUALIDAD)
                        break;
                        case 37:
                            gotoxy(113,41); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 38 (PLAZA PARK)
                        break;
                        case 38:
                           gotoxy(110,49); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 39 (IMPUESTOS 75$)
                        break;
                        case 39:
                            gotoxy(113,51); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 40 (EL MUELLE)
                        break;
                    }
                break;

                case 4: // JUGADOR N5

                    switch(_players[4].posicion) // POSICION DEL JUGADOR EN TURNO
                    {
                        case 0:
                            gotoxy(109,58); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 1 (GO)
                        break;
                        case 1:
                            gotoxy(100,59); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 2 (AV. MEDITERRANEO)
                        break;
                        case 2:
                            gotoxy(90,59); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 3 (ARCA COMUNAL)
                        break;
                        case 3:
                            gotoxy(80,59); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 4 (AV. BALTICA)
                        break;
                        case 4:
                            gotoxy(74,59); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 5 (IMPUESTOS 200$)
                        break;
                        case 5:
                            gotoxy(61,58); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 6 (FERROCARRIL "READINDG")
                        break;
                        case 6:
                            gotoxy(50,59); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 7 (AV. ORIENTAL)
                        break;
                        case 7:
                            gotoxy(39,57); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 8 (CASUALIDAD)
                        break;
                        case 8:
                            gotoxy(30,59); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 9 (AV. VERMONT)
                        break;
                        case 9:
                            gotoxy(20,59); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 10 (AV. CONNECTICUT)
                        break;
                        case 10:
                            if(_players[4].carcel)
                            {
                                gotoxy(14,56); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 11 (CARCEL)
                            }
                            else
                            {
                                gotoxy(11,59); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 11 (CARCEL DE VISITA)
                            }
                        break;
                        case 11:
                            gotoxy(8,53); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 12 (PLAZA SAN CARLOS)
                        break;
                        case 12:
                            gotoxy(9,47); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 13 (COMPAÑIA ELECTRICA)
                        break;
                        case 13:
                            gotoxy(8,42); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 14 (PLAZA AV. STATUS)
                        break;
                        case 14:
                            gotoxy(8,38); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 15 (AV. VIRGINIA)
                        break;
                        case 15:
                            gotoxy(11,33); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 16 (FERROCARRIL PENNSYLVANIA)
                        break;
                        case 16:
                            gotoxy(8,27); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 17 (PLAZA ST. JAMES)
                        break;
                        case 17:
                            gotoxy(10,24); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 18 (ARCA COMUNAL)
                        break;
                        case 18:
                            gotoxy(8,18); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 19 (AV. TENNESSEE)
                        break;
                        case 19:
                            gotoxy(8,12); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 20 (AV. NUEVA YORK)
                        break;
                        case 20:
                            gotoxy(12,7); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 21 (PARADA LIBRE)
                        break;
                        case 21:
                            gotoxy(20,6); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 22 (AV. KENTUCKY)
                        break;
                        case 22:
                            gotoxy(31,7); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 23 (CASUALIDAD)
                        break;
                        case 23:
                            gotoxy(40,6); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 24 (AV. INDIANA)
                        break;
                        case 24:
                            gotoxy(50,6); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 25 (AV. ILLINOIS)
                        break;
                        case 25:
                            gotoxy(58,8); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 26 (FERROCARRIL B&O)
                        break;
                        case 26:
                            gotoxy(70,6); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 27 (AV. ATLANTICO)
                        break;
                        case 27:
                            gotoxy(80,6); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 28 (AV. VETNOR)
                        break;
                        case 28:
                            gotoxy(88,8); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 29 (COMPAÑIA DE AGUA)
                        break;
                        case 29:
                            gotoxy(100,6); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 30 (JARDINES MARVIN)
                        break;
                        case 30:
                            gotoxy(110,9); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 31 (POLICIA)
                        break;
                        case 31:
                            gotoxy(111,12); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 32 (AV. PACIFICO)
                        break;
                        case 32:
                            gotoxy(111,18); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 33 (AV. CAROLINA DEL NORTE)
                        break;
                        case 33:
                           gotoxy(110,24); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 34 (ARCA COMUNAL)
                        break;
                        case 34:
                            gotoxy(111,27); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 35 (AV. PENNSYLVANIA)
                        break;
                        case 35:
                            gotoxy(111,33); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 36 (FERROCARRIL VIA RAPIDA)
                        break;
                        case 36:
                            gotoxy(109,37); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 37 (CASUALIDAD)
                        break;
                        case 37:
                            gotoxy(111,43); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 38 (PLAZA PARK)
                        break;
                        case 38:
                           gotoxy(109,47); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 39 (IMPUESTOS 75$)
                        break;
                        case 39:
                            gotoxy(111,52); textcolor(MAGENTA); printf("%c",254); // JUGADOR 5 POSICION 40 (EL MUELLE)
                        break;
                    }
                break;

                case 5: // JUGADOR N6

                    switch(_players[5].posicion) // POSICION DEL JUGADOR EN TURNO
                    {
                        case 0:
                            gotoxy(111,58); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 1 (GO)
                        break;
                        case 1:
                            gotoxy(103,59); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 2 (AV. MEDITERRANEO)
                        break;
                        case 2:
                            gotoxy(92,59); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 3 (ARCA COMUNAL)
                        break;
                        case 3:
                            gotoxy(83,59); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 4 (AV. BALTICA)
                        break;
                        case 4:
                            gotoxy(74,57); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 5 (IMPUESTOS 200$)
                        break;
                        case 5:
                            gotoxy(62,58); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 6 (FERROCARRIL "READINDG")
                        break;
                        case 6:
                            gotoxy(53,59); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 7 (AV. ORIENTAL)
                        break;
                        case 7:
                            gotoxy(41,57); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 8 (CASUALIDAD)
                        break;
                        case 8:
                            gotoxy(33,59); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 9 (AV. VERMONT)
                        break;
                        case 9:
                            gotoxy(23,59); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 10 (AV. CONNECTICUT)
                        break;
                        case 10:
                            if(_players[5].carcel)
                            {
                                gotoxy(14,57); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 11 (CARCEL)
                            }
                            else
                            {
                                gotoxy(13,59); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 11 (CARCEL DE VISITA)
                            }
                        break;
                        case 11:
                            gotoxy(9,52); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 12 (PLAZA SAN CARLOS)
                        break;
                        case 12:
                            gotoxy(11,47); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 13 (COMPAÑIA ELECTRICA)
                        break;
                        case 13:
                            gotoxy(9,43); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 14 (PLAZA AV. STATUS)
                        break;
                        case 14:
                            gotoxy(9,37); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 15 (AV. VIRGINIA)
                        break;
                        case 15:
                            gotoxy(12,33); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 16 (FERROCARRIL PENNSYLVANIA)
                        break;
                        case 16:
                            gotoxy(9,28); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 17 (PLAZA ST. JAMES)
                        break;
                        case 17:
                            gotoxy(12,24); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 18 (ARCA COMUNAL)
                        break;
                        case 18:
                            gotoxy(9,17); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 19 (AV. TENNESSEE)
                        break;
                        case 19:
                            gotoxy(9,13); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 20 (AV. NUEVA YORK)
                        break;
                        case 20:
                            gotoxy(10,8); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 21 (PARADA LIBRE)
                        break;
                        case 21:
                            gotoxy(17,6); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 22 (AV. KENTUCKY)
                        break;
                        case 22:
                            gotoxy(29,7); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 23 (CASUALIDAD)
                        break;
                        case 23:
                            gotoxy(37,6); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 24 (AV. INDIANA)
                        break;
                        case 24:
                            gotoxy(47,6); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 25 (AV. ILLINOIS)
                        break;
                        case 25:
                            gotoxy(57,8); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 26 (FERROCARRIL B&O)
                        break;
                        case 26:
                            gotoxy(67,6); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 27 (AV. ATLANTICO)
                        break;
                        case 27:
                            gotoxy(77,6); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 28 (AV. VETNOR)
                        break;
                        case 28:
                            gotoxy(87,8); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 29 (COMPAÑIA DE AGUA)
                        break;
                        case 29:
                            gotoxy(97,6); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 30 (JARDINES MARVIN)
                        break;
                        case 30:
                            gotoxy(112,9); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 31 (POLICIA)
                        break;
                        case 31:
                            gotoxy(112,13); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 32 (AV. PACIFICO)
                        break;
                        case 32:
                            gotoxy(112,17); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 33 (AV. CAROLINA DEL NORTE)
                        break;
                        case 33:
                            gotoxy(112,24); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 34 (ARCA COMUNAL)
                        break;
                        case 34:
                            gotoxy(112,28); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 35 (AV. PENNSYLVANIA)
                        break;
                        case 35:
                            gotoxy(112,33); textcolor(GREEN); printf("%c",254); // JUGADOR 4 POSICION 36 (FERROCARRIL VIA RAPIDA)
                        break;
                        case 36:
                            gotoxy(111,37); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 37 (CASUALIDAD)
                        break;
                        case 37:
                            gotoxy(112,42); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 38 (PLAZA PARK)
                        break;
                        case 38:
                           gotoxy(111,47); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 39 (IMPUESTOS 75$)
                        break;
                        case 39:
                            gotoxy(112,53); textcolor(LIGHTCYAN); printf("%c",254); // JUGADOR 6 POSICION 40 (EL MUELLE)
                        break;

                    }
                break;
            }

            /*
            if(_players[0]->quiebra && !player[0])
            {
                numeroDeJugadoresEnQuiebra += 1;
                player[0] = true;
            }

            if(_players[1]->quiebra && !player[1])
            {
                numeroDeJugadoresEnQuiebra += 1;
                player[1] = true;
            }

            if(_players[2]->quiebra && !player[2])
            {
                numeroDeJugadoresEnQuiebra += 1;
                player[2] = true;
            }

            if(_players[3]->quiebra && !player[3])
            {
                numeroDeJugadoresEnQuiebra += 1;
                player[3] = true;
            }

            if(_players[4]->quiebra && !player[4])
            {
                numeroDeJugadoresEnQuiebra += 1;
                player[4] = true;
            }

            if(_players[5]->quiebra && !player[5])
            {
                numeroDeJugadoresEnQuiebra += 1;
                player[5] = true;
            }

        }while(numeroDeJugadoresEnQuiebra != 5); */
        break;
    }
}

void graficarTablero(jugador *_players, int *_nJugadores, int nJugador)
{

    system("mode 650"); // FULLSCREEN

    for(int i=6; i<=59; i++) //LINEA PARALELA A LA PARTE LATERAL IZQUIERDA
    {
        gotoxy(15,i); printf("%c",186);
    }

    for(int i=6; i<=59; i++) //LINEA PARALELA A LA PARTE LATERAL DERECHA
    {
        gotoxy(105,i); printf("%c",186);
    }

    for(int i=6; i<=114; i++) //LINEA PARALELA A LA PARTE SUPERIOR
    {
        gotoxy(i,10); printf("%c",205);
    }

    for(int i=6; i<=114; i++) //LINEA PARALELA A LA PARTE INFERIOR
    {
        gotoxy(i,55); printf("%c",205);
    }

    for(int i=6; i<=114; i++) // SEGUNDA LINEA PARALELA A LA PARTE SUPERIOR
    {
        gotoxy(i,15); printf("%c",205);
        if(i == 14)
        {
            i += 91;
        }
    }

    for(int i=6; i<=114; i++) // TERCERA LINEA PARALELA A LA PARTE SUPERIOR
    {
        gotoxy(i,20); printf("%c",205);
        if(i == 14)
        {
            i += 91;
        }
    }

    for(int i=6; i<=114; i++) // CUARTA LINEA PARALELA A LA PARTE SUPERIOR
    {
        gotoxy(i,25); printf("%c",205);
        if(i == 14)
        {
            i += 91;
        }
    }

    for(int i=6; i<=114; i++) // QUINTA LINEA PARALELA A LA PARTE SUPERIOR
    {
        gotoxy(i,30); printf("%c",205);
        if(i == 14)
        {
            i += 91;
        }
    }

    for(int i=6; i<=114; i++) // SEXTA LINEA PARALELA A LA PARTE SUPERIOR
    {
        gotoxy(i,35); printf("%c",205);
        if(i == 14)
        {
            i += 91;
        }
    }

    for(int i=6; i<=114; i++) // SEPTIMA LINEA PARALELA A LA PARTE SUPERIOR
    {
        gotoxy(i,40); printf("%c",205);
        if(i == 14)
        {
            i += 91;
        }
    }

    for(int i=6; i<=114; i++) // OCTAVA LINEA PARALELA A LA PARTE SUPERIOR
    {
        gotoxy(i,45); printf("%c",205);
        if(i == 14)
        {
            i += 91;
        }
    }

    for(int i=6; i<=114; i++) // NOVENA LINEA PARALELA A LA PARTE SUPERIOR
    {
        gotoxy(i,50); printf("%c",205);
        if(i == 14)
        {
            i += 91;
        }
    }

    for(int i=6; i<=59; i++) // SEGUNDA LINEA PARALELA A LA PARTE LATERAL IZQUIERDA
    {
        gotoxy(25,i); printf("%c",186);
        if(i == 9)
        {
            i += 46;
        }
    }

    for(int i=6; i<=59; i++) // TERCERA LINEA PARALELA A LA PARTE LATERAL IZQUIERDA
    {
        gotoxy(35,i); printf("%c",186);
        if(i == 9)
        {
            i += 46;
        }
    }

    for(int i=6; i<=59; i++) // CUARTA LINEA PARALELA A LA PARTE LATERAL IZQUIERDA
    {
        gotoxy(45,i); printf("%c",186);
        if(i == 9)
        {
            i += 46;
        }
    }

    for(int i=6; i<=59; i++) // QUINTA LINEA PARALELA A LA PARTE LATERAL IZQUIERDA
    {
        gotoxy(55,i); printf("%c",186);
        if(i == 9)
        {
            i += 46;
        }
    }

    for(int i=6; i<=59; i++) // SEXTA LINEA PARALELA A LA PARTE LATERAL IZQUIERDA
    {
        gotoxy(65,i); printf("%c",186);
        if(i == 9)
        {
            i += 46;
        }
    }

    for(int i=6; i<=59; i++) // SEPTIMA LINEA PARALELA A LA PARTE LATERAL IZQUIERDA
    {
        gotoxy(75,i); printf("%c",186);
        if(i == 9)
        {
            i += 46;
        }
    }

    for(int i=6; i<=59; i++) // OCTAVA LINEA PARALELA A LA PARTE LATERAL IZQUIERDA
    {
        gotoxy(85,i); printf("%c",186);
        if(i == 9)
        {
            i += 46;
        }
    }

    for(int i=6; i<=59; i++) // NOVENA LINEA PARALELA A LA PARTE LATERAL IZQUIERDA
    {
        gotoxy(95,i); printf("%c",186);
        if(i == 9)
        {
            i += 46;
        }
    }

    for(int i=5; i<=115; i++) // PARTE SUPERIOR
    {
       gotoxy(i,5); printf("%c",205);
    }

    for(int i=5; i<=115 ; i++) //PARTE INFERIOR
    {
       gotoxy(i,60); printf("%c",205);
    }

    for(int i=5; i<=60; i++) // PARTE LATERAL IZQUIERDA
    {
        gotoxy(5,i); printf("%c",186);
    }

    for(int i=5; i<=60; i++) // PARTE LATERAL DERECHA
    {
        gotoxy(115,i); printf("%c",186);
    }

    for(int i=15; i<=105; i += 10) // PARTE SUPERIOR 2
    {
        gotoxy(i,10); printf("%c",202);
    }

    for(int i=15;i<=105;i+=10) // PARTE INFERIOR 2
    {
        gotoxy(i,55); printf("%c",203);
    }

    for(int i=15; i<=50; i+=5) // PARTE LATERAL IZQUIERDA 2
    {
        gotoxy(15,i); printf("%c",185);
    }

    for(int i=15;i<=50; i+=5) // PARTE LATERAL DERECHA 2
    {
        gotoxy(105,i); printf("%c",204);
    }

    gotoxy(5,5); printf("%c",201); // ESQUINA SUPERIOR IZQUIERDA

    gotoxy(5,60); printf("%c",200); // ESQUINA INFERIOR IZQUIERDA

    gotoxy(115,5); printf("%c",187); // ESQUINA SUPERIOR DERECHA

    gotoxy(115,60); printf("%c",188); // ESQUINA INFERIOR DERECHA

    gotoxy(15,10); printf("%c",206); // ESQUINA SUPERIOR IZQUIERDA 2

    gotoxy(105,10); printf("%c",206); // ESQUINA SUPERIOR DERECHA 2

    gotoxy(15,55); printf("%c",206); // ESQUINA INFERIOR IZQUIERDA 2

    gotoxy(105,55); printf("%c",206); // ESQUINA INFERIOR DERECHA 2

    for(int i=15; i<=105; i+=10) // ESPINAS PARTE SUPERIOR ╦
    {
        gotoxy(i,5); printf("%c",203);
    }

    for(int i=15; i<=105; i+=10) // ESPINAS PARTE INFERIOR ╩
    {
        gotoxy(i,60); printf("%c",202);
    }

    for(int i=10; i<=55; i+=5) // ESPINAS PARTE LATERAL IZQUIERDA ╠
    {
        gotoxy(5,i); printf("%c",204);
    }

    for(int i=10; i<=55; i+=5) // ESPINAS PARTE LATERAL DERECHA ╣
    {
        gotoxy(115,i); printf("%c",185);
    }

    for(int i=15; i<=105; i++) // LINEA PARA LOS COLORES PARTE SUPERIOR
    {
        gotoxy(i,8); printf("%c",205);
        if (i == 25 || i == 55 || i == 85)
        {
            i += 9;
        }
    }

    for(int i=45; i<=75; i+=30) // INTERSECCION PARA LOS COLORES PARTE SUPERIOR ╬
    {
        gotoxy(i,8); printf("%c",206);
    }

    for(int i=95; i>=15; i-=30) // INTERSECCION PARA LOS COLORES ╠ PARTE SUPERIOR
    {
        gotoxy(i,8); printf("%c",204);
        if (i == 35)
        {
            i += 10;
        }
    }

    for(int i=25; i <=105; i+=30) // INTERSECCION PARA LOS COLORES ╣ PARTE SUPERIOR
    {
        gotoxy(i,8); printf("%c",185);
        if (i == 85)
        {
            i -= 10;
        }

    }

    for(int i=15; i<=105; i++) // LINEA PARA LOS COLORES PARTE INFERIOR
    {
        gotoxy(i,57); printf("%c",205);
        if (i == 35 || i == 85)
        {
            i += 9;
        }
        if (i == 55)
        {
            i += 19;
        }
    }

    gotoxy(25,57); printf("%c",206); // INTERSECCION PARA LOS COLORES PARTE INFERIOR ╬

    for(int i=15; i<=95; i+=30) // INTERSECCION PARA LOS COLORES PARTE INFERIOR ╠
    {
        gotoxy(i,57); printf("%c",204);
        if (i == 75)
        {
            i -= 10;
        }
    }

    for(int i=35; i<=105; i+=20) // INTERSECCION PARA LOS COLORES PARTE INFERIOR ╣
    {
        gotoxy(i,57); printf("%c",185);
        if (i == 55)
        {
            i +=10;
        }
    }

    for(int i=10; i<=55; i++) // LINEA PARA LOS COLORES PARA LATERAL IZQUIERDA
    {
        gotoxy(12,i); printf("%c",186);
        if (i == 20 || i == 30 || i == 45)
        {
            i += 4;
        }
    }

    for (int i=15; i<=40; i+=25) // INTERSECCION PARA LOS COLORES PARTE LATERAL IZQUIERDA ╬
    {
        gotoxy(12,i); printf("%c",206);
    }

    for(int i=10; i<=50; i+=15) // INTERSECCION PARA LOS COLORES PARTE LATERAL IZQUIEDA ╦
    {
        gotoxy(12,i); printf("%c",203);
        if (i == 25)
        {
            i -= 5;
        }
    }

    for(int i=20; i<=55; i+=10) // INTERSECCION PARA LOS COLORES PARTE LATERAL IZQUIERDA ╩
    {
        gotoxy(12,i); printf("%c",202);
        if (i == 30)
        {
            i += 5;
        }
    }

    for(int i=10; i<=55; i++) // LINEA PARA LOS COLORES PARTE LATERAL DERECHA
    {
        gotoxy(108,i); printf("%c",186);
        if (i == 20 || i == 45)
        {
            i += 4;
        }
        if (i == 30)
        {
            i += 9;
        }
    }

    gotoxy(108,15); printf("%c",206); // INTERSECCION PARA LOS COLORES PARTE LATERAL DERECHA ╬

    for(int i=10; i<=50; i+=10) // INTERSECCION PARA LOS COLORES PARTE LATERAL DERECHA ╦
    {
        gotoxy(108,i); printf("%c",203);
        if (i == 10 || i == 25)
        {
            i +=5;
        }
    }

    for(int i=20; i<=55; i+=10) // INTERSECCION PARA LOS COLORES PARTE LATERAL DERECHA ╩
    {
        gotoxy(108,i); printf("%c",202);
        if (i == 30)
        {
            i += 5;
        }
    }

    for(int i=9; i<=15; i++) // CARCEL HORIZONTAL
    {
        gotoxy(i,58); printf("%c",205);
    }

    for(int i=55; i<=58; i++) // CARCEL VERTICAL
    {
        gotoxy(9,i); printf("%c",186);
    }

    gotoxy(15,58); printf("%c",185); // INTERSECCION CARCEL HORIZONTAL

    gotoxy(9,55); printf("%c",203); // INTERSECCION CARCEL VERTICAL

    gotoxy(9,58); printf("%c",200); // INTERSECCION CARCEL DE AMBOS

    gotoxy(7,56); printf("D"); // CARCEL "D"
    gotoxy(7,57); printf("E"); // CARCEL "E"
    gotoxy(8,59); printf("VISITA"); // CARCEL "VISITA"

    for(int i=55; i<=58; i++) // BARROTE CARCEL
    {
        gotoxy(10,i); printf("%c",186);
    }

    for(int i=55; i<=58; i++) // BARROTE CARCEL
    {
        gotoxy(11,i); printf("%c",186);
    }

    for(int i=55; i<=58; i++) // BARROTE CARCEL
    {
        gotoxy(12,i); printf("%c",186);
    }

    for(int i=55; i<=58; i++) // BARROTE CARCEL
    {
        gotoxy(13,i); printf("%c",186);
    }

    for(int i=55; i<=58; i++) // BARROTE CARCEL
    {
        gotoxy(14,i); printf("%c",186);
    }

    for(int i=10; i<=14; i++) // INTERSECCION SUPERIOR DE BARROTES
    {
        gotoxy(i,55); printf("%c",203);
    }

    for(int i=10; i<=14; i++) // INTERSECCION INFERIOR DE BARROTES
    {
        gotoxy(i,58); printf("%c",202);
    }

    gotoxy(12,55); printf("%c",206); // INTERSECCION BARROTES

 /* gotoxy(7,7); printf("PARADA"); // PARADA LIBRE
    gotoxy(9,8); printf("LIBRE"); // PARADA LIBRE  */

/*  gotoxy(108,6); printf("VAYASE"); // CARCEL
    gotoxy(108,7); printf(" A LA");  // CARCEL
    gotoxy(108,8); printf("CARCEL");  // CARCEL
    gotoxy(108,9); printf("(TwT)"); // CARCEL */


    gotoxy(109,56); printf("GO!"); // GO!
    gotoxy(106,59); printf("COBRE$200"); // GO!

    gotoxy(17,29); printf(" /$$      /$$  /$$$$$$  /$$   /$$  /$$$$$$  /$$$$$$$   /$$$$$$  /$$   /$$$$$$  /$$$$$$ ");
    gotoxy(17,30); printf("| $$$    /$$$ /$$__  $$| $$$ | $$ /$$__  $$| $$__  $$ /$$__  $$| $$  |_  $$_/ /$$__  $$");
    gotoxy(17,31); printf("| $$$$  /$$$$| $$  \\ $$| $$$$| $$| $$  \\ $$| $$  \\ $$| $$  \\ $$| $$    | $$  | $$  \\ $$");
    gotoxy(17,32); printf("| $$ $$/$$ $$| $$  | $$| $$ $$ $$| $$  | $$| $$$$$$$/| $$  | $$| $$    | $$  | $$  | $$");
    gotoxy(17,33); printf("| $$  $$$| $$| $$  | $$| $$  $$$$| $$  | $$| $$____/ | $$  | $$| $$    | $$  | $$  | $$");
    gotoxy(17,34); printf("| $$\\  $ | $$| $$  | $$| $$\\  $$$| $$  | $$| $$      | $$  | $$| $$    | $$  | $$  | $$");
    gotoxy(17,35); printf("| $$ \\/  | $$|  $$$$$$/| $$ \\  $$|  $$$$$$/| $$      |  $$$$$$/| $$$$$/$$$$$$|  $$$$$$/");
    gotoxy(17,36); printf("|__/     |__/ \\______/ |__/  \\__/ \\______/ |__/       \\______/ |_____/______/ \\______/");

 /*

     /$$      /$$  /$$$$$$  /$$   /$$  /$$$$$$  /$$$$$$$   /$$$$$$  /$$   /$$$$$$  /$$$$$$
    | $$$    /$$$ /$$__  $$| $$$ | $$ /$$__  $$| $$__  $$ /$$__  $$| $$  |_  $$_/ /$$__  $$
    | $$$$  /$$$$| $$  \ $$| $$$$| $$| $$  \ $$| $$  \ $$| $$  \ $$| $$    | $$  | $$  \ $$
    | $$ $$/$$ $$| $$  | $$| $$ $$ $$| $$  | $$| $$$$$$$/| $$  | $$| $$    | $$  | $$  | $$
    | $$  $$$| $$| $$  | $$| $$  $$$$| $$  | $$| $$____/ | $$  | $$| $$    | $$  | $$  | $$
    | $$\  $ | $$| $$  | $$| $$\  $$$| $$  | $$| $$      | $$  | $$| $$    | $$  | $$  | $$
    | $$ \/  | $$|  $$$$$$/| $$ \  $$|  $$$$$$/| $$      |  $$$$$$/| $$$$$/$$$$$$|  $$$$$$/
    |__/     |__/ \______/ |__/  \__/ \______/ |__/       \______/ |_____/______/ \______/

    OBTENIDO GRACIAS A : http://patorjk.com/software/taag/#p=testall&f=3D%20Diagonal&t=MONOPOLIO

    NOTA: EL \ NO LO LEE A MENOS QUE COLOQUE OTRO \ POR ESO EN EL CODIGO APARECE \\

    LOGO CENTRAL

*/

    for(int i=18; i<=33; i++) // LINEA SUPERIOR ARCA COMUNAL
    {
        gotoxy(i,12); printf("%c",196);
    }

    for(int i=12; i<=16; i++) // LINEA LATERAL IZQUIERDA ARCA COMUNAL
    {
        gotoxy(18,i); printf("%c",179);
    }

    for(int i=18; i<=33; i++) // LINEA INFERIOR ARCA COMUNAL
    {
        gotoxy(i,16); printf("%c",196);
    }

    for(int i=12; i<=16; i++) // LINEA LATERAL DERECHA ARCA COMUNAL
    {
        gotoxy(33,i); printf("%c",179);
    }

    gotoxy(18,16); printf("%c",192); // ESQUINA INFERIOR IZQUIERDA ARCA COMUNAL └
    gotoxy(33,12); printf("%c",191); // ESQUINA SUPERIOR DERECHA ARCA COMUNAL ┐
    gotoxy(18,12); printf("%c",218); // ESQUINA SUPERIOR IZQUIERDA ARCA COMUNAL ┌
    gotoxy(33,16); printf("%c",217); // ESQUINA INFERIOR DERECHA ARCA COMUNAL ┘
    gotoxy(20,14); printf("ARCA COMUNAL"); // ARCA COMUNAL

    for(int i=101; i>=86; i--) // LINEA INFERIOR CASUALIDAD
    {
        gotoxy(i,53); printf("%c",196);
    }

    for(int i=53; i>=49; i--) // LINEA LATERAL IZQUIERDA CASUALIDAD
    {
        gotoxy(86,i); printf("%c",179);
    }

    for(int i=101; i>=86; i--) // LINEA SUPERIOR CASUALIDAD
    {
        gotoxy(i,49); printf("%c",196);
    }

    for(int i=53; i>=49; i--) // LINEA LATERAL DERECHA CASUALIDAD
    {
        gotoxy(101,i); printf("%c",179);
    }

    gotoxy(101,53); printf("%c",217); // ESQUINA INFERIOR DERECHA CASUALIDAD ┘
    gotoxy(86,53); printf("%c",192); // ESQUINA INFERIOR IZQUIERDA CASUALIDAD └
    gotoxy(101,49); printf("%c",191); // ESQUINA SUPERIOR DERECHA CASUALIDAD ┐
    gotoxy(86,49); printf("%c",218); // ESQUINA SUPERIOR IZQUIERDA ┌
    gotoxy(89,51); printf("CASUALIDAD"); // CASUALIDAD

    gotoxy(56,56); printf("____");
    gotoxy(56,57); printf("|DD|__T_"); // FERROCARRIL INFERIOR
    gotoxy(56,58); printf("|__|___|<");
    gotoxy(56,59); printf("@-@-@-oo\\");

    gotoxy(56,6); printf("____");
    gotoxy(56,7); printf("|DD|__T_"); // FERROCARRIL SUPERIOR
    gotoxy(56,8); printf("|__|___|<");
    gotoxy(56,9); printf("@-@-@-oo\\");

    gotoxy(6,31); printf("____");
    gotoxy(6,32); printf("|DD|__T_"); // FERROCARRIL LATERAL IZQUIERDO
    gotoxy(6,33); printf("|__|___|<");
    gotoxy(6,34); printf("@-@-@-oo\\");

    gotoxy(106,31); printf("____");
    gotoxy(106,32); printf("|DD|__T_"); // FERROCARRIL LATERAL DERECHO
    gotoxy(106,33); printf("|__|___|<");
    gotoxy(106,34); printf("@-@-@-oo\\");


/*
     ____
     |DD|____T_
     |_ |_____|<
       @-@-@-oo\

   OBTENIDO GRACIAS A : http://www.ascii-art.de/ascii/t/train.txt

   NOTA: EL \ NO LO LEE A MENOS QUE COLOQUE OTRO \ POR ESO EN EL CODIGO APARECE \\

   FERROCARRILES

*/

    //  COLORES A LAS PROPIEDADES DEL TABLERO

    for(int i=76 ; i<=104; i++)
    {
        gotoxy(i,56); textbackground(BROWN); printf(" ");  // COLOR MARRON CASILLERO 2 - 4
        if (i == 84)
        {
            i += 11;
        }
    }

    for(int i=16 ; i<=54; i++)
    {
        gotoxy(i,56); textbackground(LIGHTCYAN); printf(" ");  // COLOR CELESTE CASILLERO 6 - 8 - 9
        if (i == 24)
        {
            i += 1;
        }
        if (i == 34)
        {
            i += 11;
        }
    }

    for(int i=36; i<=54; i++)
    {
        gotoxy(13,i); textbackground(MAGENTA); printf(" "); // COLOR MORADO CASILLERO 11 - 13 - 14
        if(i == 39)
        {
            i += 1;
        }
        if(i == 44)
        {
            i += 6;
        }
    }

    for(int i=36; i<=54; i++)
    {
        gotoxy(14,i); textbackground(MAGENTA); printf(" "); // COLOR MORADO CASILLERO 11 - 13 - 14
        if(i == 39)
        {
            i += 1;
        }
        if(i == 44)
        {
            i += 6;
        }
    }

    for(int i=11; i<=29; i++)
    {
        gotoxy(13,i); textbackground(WHITE); printf(" "); // COLOR "ANARANJADO" CASILLERO 16 - 18 - 19
        if(i == 14)
        {
            i += 1;
        }
        if(i == 19)
        {
            i += 6;
        }
    }

    for(int i=11; i<=29; i++)
    {
        gotoxy(14,i); textbackground(WHITE); printf(" "); // COLOR "ANARANJADO" CASILLERO 16 - 18 - 19
        if(i == 14)
        {
            i += 1;
        }
        if(i == 19)
        {
            i += 6;
        }
    }

    for(int i=16; i<=54; i++)
    {
        gotoxy(i,9); textbackground(LIGHTRED); printf(" "); // COLOR ROJO CASILLERO 21 - 23 - 24
        if(i == 24)
        {
            i += 11;
        }
        if (i == 44)
        {
            i += 1;
        }
    }

    for(int i=66; i<=104; i++)
    {
        gotoxy(i,9); textbackground(YELLOW); printf(" "); // COLOR AMARILLO CASILLERO 26 - 27 - 29
        if(i == 74)
        {
            i += 1;
        }
        if(i == 84)
        {
            i += 11;
        }
    }

    for(int i=11; i<=29; i++)
    {
        gotoxy(106,i); textbackground(GREEN); printf(" "); // COLOR VERDE CASILLERO 31 - 32 - 34
        if (i == 14)
        {
            i += 1;
        }
        if (i == 19)
        {
            i += 6;
        }
    }

    for(int i=11; i<=29; i++)
    {
        gotoxy(107,i); textbackground(GREEN); printf(" "); // COLOR VERDE CASILLERO 31 - 32 - 34
        if (i == 14)
        {
            i += 1;
        }
        if (i == 19)
        {
            i += 6;
        }
    }

    for(int i=41; i<=54; i++)
    {
        gotoxy(106,i); textbackground(BLUE); printf(" "); // COLOR AZUL CASILLERO 37 - 39
        if (i == 44)
        {
            i += 6;
        }
    }

    for(int i=41; i<=54; i++)
    {
        gotoxy(107,i); textbackground(BLUE); printf(" "); // COLOR AZUL CASILLERO 37 - 39
        if (i == 44)
        {
            i += 6;
        }
    }

    gotoxy(116,5); textbackground(BLACK); printf(" "); // COLOR NEGRO PARA BORRAR LOS RASTROS EN LA PANTALLA

    gotoxy(86,56); printf(" _______"); // ARCA COMUNAL INFERIOR
    gotoxy(86,57); printf("|\\()^^()\\"); // ARCA COMUNAL INFERIOR
    gotoxy(86,58); printf("| |-----|"); // ARCA COMUNAL INFERIOR
    gotoxy(86,59); printf(" \\|_____|"); // ARCA COMUNAL INFERIOR


    gotoxy(6,21); printf(" _______"); // ARCA COMUNAL LATERAL IZQUIERDA
    gotoxy(6,22); printf("|\\()^^()\\"); // ARCA COMUNAL LATERAL IZUQUIERDA
    gotoxy(6,23); printf("| |-----|"); // ARCA COMUNAL LATERAL IZQUIERDA
    gotoxy(6,24); printf(" \\|_____|"); // ARCA COMUNAL LATERAL IZQUIERDA

    gotoxy(106,21); printf(" _______"); // ARCA COMUNAL LATERAL DERECHA
    gotoxy(106,22); printf("|\\()^^()\\"); // ARCA COMUNAL LATERAL DERECHA
    gotoxy(106,23); printf("| |-----|"); // ARCA COMUNAL LATERAL DERECHA
    gotoxy(106,24); printf(" \\|_____|"); // ARCA COMUNAL LATERAL DERECHA

/*
         _______
        |\()^^()\
        | |-----|
         \|_____|

         OBTENIDO GRACIAS A: http://ascii.co.uk/art/chest

         NOTA: EL \ NO LO LEE A MENOS QUE COLOQUE OTRO \ POR ESO EN EL CODIGO APARECE \\

         ARCA COMUNAL

*/

    gotoxy(37,56); printf(" ?????"); // CASUALIDAD INFERIOR
    gotoxy(37,57); printf("?    ??"); // CASUALIDAD INFERIOR
    gotoxy(37,58); printf("   ??"); // CASUALIDAD INFERIOR
    gotoxy(37,59); printf("   o"); // CASUALIDAD INFERIOR

    gotoxy(27,6); printf(" ?????"); // CASUALIDAD SUPERIOR
    gotoxy(27,7); printf("?    ??"); // CASUALIDAD SUPEPRIOR
    gotoxy(27,8); printf("   ??"); // CASUALIDAD SUPERIOR
    gotoxy(27,9); printf("   o"); // CASUALIDAD SUPERIOR

    gotoxy(107,36); printf(" ?????"); // CASUALIDAD LATERAL DERECHA
    gotoxy(107,37); printf("?    ??"); // CASUALIDAD LATERAL DERECHA
    gotoxy(107,38); printf("   ??"); // CASUALIDAD LATERAL DERECHA
    gotoxy(107,39); printf("   o"); // CASUALIDAD LATERAL DERECHA



/*
           ?????
          ?    ??
             ??
             o

        CREACION PROPIA

        CASUALIDAD

*/






    gotoxy(6,46); printf("    :");
    gotoxy(6,47); printf(" '. _ .'");
    gotoxy(6,48); printf("-= (~) =-");
    gotoxy(6,49); printf(" .' # '.");

/*

    :
 '. _ .'
-= (~) =-
 .' # '.


    OBTENIDO GRACIAS A: http://ascii.co.uk/art/lightbulb

    SERVICIO ELECTRICO

 */


    gotoxy(86,6); printf("   =()=");
    gotoxy(86,7); printf(" /\\_||");
    gotoxy(86,8); printf("((___  `.");
    gotoxy(86,9); printf(" \\/  `=='");


 /*

               =()=
           ,/'\_||_
           ( (___  `.
           `\./  `=='
                  |||
                  |||

              =()=
            /\_||_
           ((___  `.
            \/  `=='

    OBTENIDO GRACIAS A: http://ascii.co.uk/art/faucet

    NOTA: EL \ NO LO LEE A MENOS QUE COLOQUE OTRO \ POR ESO EN EL CODIGO APARECE \\

    SERVICIO DE AGUA

*/

    gotoxy(6,6); printf("  _____"); // PARADA LIBRE
    gotoxy(6,7); printf(" /_..._\\"); // PARADA LIBRE
    gotoxy(6,8); printf("(0[###]0)"); // PARADA LIBRE
    gotoxy(6,9); printf(" `'   `'"); // PARADA LIBRE


/*

          _____
         /_..._\
        (0[###]0)
         `'   `'

    OBTENIDO GRACIAS A : http://ascii.co.uk/art/car

    NOTA: EL \ NO LO LEE A MENOS QUE COLOQUE OTRO \ POR ESO EN EL CODIGO APARECE \\

    PARADA LIBRE

*/

    gotoxy(106,6); printf("/-'/ \\'-\\"); // VAYASE A LA CARCEL
    gotoxy(106,7); printf("|POLICIA|"); // VAYASE A LA CARCEL
    gotoxy(106,8); printf("\\( 911 )/"); // VAYASE A LA CARCEL
    gotoxy(106,9); printf(" '-\\_/-'"); // VAYASE A LA CARCEL
    gotoxy(110,6); printf("%c",238); // CARACTER ESPECIAL DE VAYASE A LA CARCEL ¯



/*

      ,   /\   ,
     / '-'  '-' \
    |   POLICE   |
    \    .--.    /
     |  ( 19 )  |
     \   '--'   /
      '--.  .--'
          \/


        /-'/¯\'-\
        |POLICIA|
        \( 911 )/
         '-\_/-'

    OBTENDIO GRACIAS A: http://ascii.co.uk/art/police

    NOTA: EL \ NO LO LEE A MENOS QUE COLOQUE OTRO \ POR ESO EN EL CODIGO APARECE \\

    A LA CARCEL

*/

    gotoxy(106,46); printf(" _______");
    gotoxy(106,47); printf("/_|___|_\\");
    gotoxy(106,48); printf("'. \\ / .'");
    gotoxy(106,49); printf("  '._.'");



/*

      .     '     ,
        _________
     _ /_|_____|_\ _
       '. \   / .'
         '.\ /.'
           '.'

        _______
       /_|___|_\
       '. \ / .'
         '._.'

    OBTENIDO GRACIAS A: http://chris.com/ascii/index.php?art=objects/diamonds

    NOTA: EL \ NO LO LEE A MENOS QUE COLOQUE OTRO \ POR ESO EN EL CODIGO APARECE \\

    IMPUESTOS DE LUJO


 */

    gotoxy(66,56); printf("IMPUESTOS"); // IMPUESTOS PAGAR $200
    gotoxy(68,57); printf("PAGUE"); // IMPUESTOS PAGAR $200
    gotoxy(68,59); printf("$ 200"); // IMPUESTOS PAGAR $200

    for(int i=45; i<=75; i++) // LINEA SUPERIOR PARA EL CONTADOR DE DADOS
    {
        gotoxy(i,20); printf("%c",205);
    }

    for(int i=45; i<=75; i++) // LINEA INFERIOR PARA EL CONTADOR DE DADOS
    {
        gotoxy(i,27); printf("%c",205);
    }

    for(int i=20; i<=27; i++) // LINEA LATERAL IZQUIERDA PARA EL CONTADOR DE DADOS
    {
        gotoxy(45,i); printf("%c",186);
    }

    for(int i=20; i<=27; i++) // LINEA LATERAL DERECHA PARA EL CONTADOR DE DADOS
    {
        gotoxy(75,i); printf("%c",186);
    }

    gotoxy(45,20); printf("%c",201); // ESQUINA SUPERIOR IZQUIERDA PARA EL CONTADOR DE DADOS
    gotoxy(75,20); printf("%c",187); // ESQUINA SUPERIOR DERECHA PARA EL CONTADOR DE DADOS
    gotoxy(45,27); printf("%c",200); // ESQUINA INFERIOR IZQUIERDA PARA EL CONTADOR DE DADOS
    gotoxy(75,27); printf("%c",188); // ESQUINA INFERIOR DERECHA PARA EL CONTADOR DE DADOS

    for(int i=45; i<=75; i++) // LINEA PARALELA A LA PARTE SUPERIOR DEL CONTADOR DE DADOS PARA EL TITULO
    {
        gotoxy(i,22); printf("%c",205);
    }

    gotoxy(45,22); printf("%c",204); // INTERSECCION PARA EL TITULO DE DADOS PARTE IZQUIERDA
    gotoxy(75,22); printf("%c",185); // INTERSECCION PARA EL TITULO DE DADOS PARTE DERECHA

    gotoxy(49,21); printf("ACUMULADOR DE LOS DADOS!"); // TITULO PARA EL CONTADOR DE LOS DADOS
    gotoxy(48,21); printf("%c",173); // SIMBOLO DE EXCLAMACION ¡ PARA EL CONTADOR DE LOS DADOS

    textbackground(WHITE); // PARA PODER PINTAR LOS DADOS


    for(int i=29; i<=39; i++)    // PRIMER DADO
    {
        for(int j=44; j<=48; j++)
        {
            gotoxy(i,j); printf(" ");
        }
    }

    for(int i=43; i<=53; i++)    // SEGUNDO DADO
    {
        for(int j=44; j<=48; j++)
        {
            gotoxy(i,j); printf(" ");
        }
    }


    textcolor(BLACK);

    gotoxy(30,44); printf("%c",254);
    gotoxy(34,44); printf("%c",254);
    gotoxy(38,44); printf("%c",254);
    gotoxy(30,46); printf("%c",254);
    gotoxy(34,46); printf("%c",254);
    gotoxy(38,46); printf("%c",254);
    gotoxy(30,48); printf("%c",254);
    gotoxy(34,48); printf("%c",254);
    gotoxy(38,48); printf("%c",254);

    gotoxy(44,44); printf("%c",254);
    gotoxy(48,44); printf("%c",254);
    gotoxy(52,44); printf("%c",254);
    gotoxy(44,46); printf("%c",254);
    gotoxy(48,46); printf("%c",254);
    gotoxy(52,46); printf("%c",254);
    gotoxy(44,48); printf("%c",254);
    gotoxy(48,48); printf("%c",254);
    gotoxy(52,48); printf("%c",254);

    textbackground(BLACK); // PARA PODER BORRAR RASTROS EN LA PANTALLA

    graficarPosicion(_players, _nJugadores, nJugador); // PARA PROBAR, LA FUNCION A LLAMAR DEBE DE SER GRAFICAR POSICION

    textcolor(WHITE); // PARA PODER IMPRIMIR EN NEGRO
    textbackground(BLACK); // PARA PODER BORRAR RASTROS EN LA PANTALLA

    //gotoxy(5,61); system("pause>arch"); // ELIMINA LOS MENJES AL FINALIZAR LA EJECUCION Y PAUSE AL PROGRAMA
}


#endif // POSICIONES_H_INCLUDED
