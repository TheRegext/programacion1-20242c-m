#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<cstring>

using namespace std;

#include "funciones.h"
#include "juego.h"

int main(){
   string jugador;
   int puntos;
   string nombres[3];
   int tablaPuntajes[3]={0};
   int opc;
   while(true){
        system("cls");
        cout<<"***TP VECTORES Y FUNCIONES***"<<endl;
        cout<<"1. JUGAR A SUMA DADOS"<<endl;
        cout<<"2. MOSTRAR LOS PUNTAJES MAS ALTOS (3)"<<endl;
        cout<<"0. FIN DEL PROGRAMA"<<endl;
        cout<<"*****************************"<<endl;
        cout<<"INGRESAR OPCION ";
        cin>>opc;
        system("cls");
        switch(opc){
            case 1: jugar(jugador, puntos);
                    cargarPuntajes(jugador, puntos, nombres, tablaPuntajes);
                    break;
            case 2: mostrarPuntajes(nombres, tablaPuntajes);
                    break;
            case 0: return 0;
                    break;
            default: cout<<"OPCION INCORRECTA"<<endl;

        }
        cout<<endl;
        system("pause");
    }

    cout<<endl;
    return 0;
}
