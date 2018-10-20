#ifndef REMPLAZOARCHIVO_H_INCLUDED
#define REMPLAZOARCHIVO_H_INCLUDED
using namespace std;

    //COPIA EL ARCHIVO DEL TABLERO ORIGINAL AL MODIFICABLE
    //El archivo "tableroOR.txt" de la carpeta "data" se copia
    //en el "tableroMOD.txt" para la nueva inicializacion de la partida.
void nuevoArchivo(){
    fstream tablero1;
    fstream tablero2;
    casillero *aux=new casillero;
    tablero1.open(".\\data\\tableroOR.txt", ios::in | ios::binary);
    tablero2.open(".\\data\\tableroMOD.txt", ios::out | ios::binary);
    tablero1.read(reinterpret_cast<char*>(aux),sizeof(casillero));
    while(!tablero1.eof()){
        tablero2.write(reinterpret_cast<char*>(aux),sizeof(casillero));
        tablero1.read(reinterpret_cast<char*>(aux),sizeof(casillero));
    }
    delete aux;
    tablero1.close();
    tablero2.close();
}

#endif // REMPLAZOARCHIVO_H_INCLUDED
