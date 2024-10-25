#include <iostream>
#include "funciones.h"
#include "juego.h"

using namespace std;

void jugar(string &nombre, int &puntaje){
    int tiradas, i;
    int dados[5];
    puntaje=0;
    cout<<"BIENVENIDOS/AS AL JUEGO!!!"<<endl;
    cout<<"INGRESA TU NOMBRE ";
    cin>>nombre;
    cout<<"ELEGI LA CANTIDAD DE TIRADAS "<<endl;
    cin>>tiradas;
    system("cls");
    for(i=1;i<=tiradas;i++){
        cout<<"PRESIONA UNA TECLA PARA TIRAR LOS DADOS "<<endl;
        system("pause>null");
        system("cls");
        cout<<endl;
        cargarAleatorio(dados,5,6);
        mostrarVector(dados,5);
        puntaje+=sumarVector(dados, 5);
        cout<<endl<<"PUNTAJE ACUMULADO "<<puntaje<<endl;
        cout<<endl;
    }
    cout<<"PUNTAJE FINAL OBTENIDO "<<puntaje<<endl;


}

void mostrarPuntajes(string jugadores[], int tabla[]){
    int i;
    for(i=0;i< 3;i++){
        if(tabla[i]!=0)
            cout<<"JUGADOR "<<jugadores[i]<<" PUNTAJE "<<tabla[i]<<endl;
    }
}

void cargarPuntajes(string jugador, int puntos, string nombres[], int tablaPuntajes[]){
    int i, pos=-1;

    for(i=0;i< 3;i++){
        if(tablaPuntajes[i]==0){
            pos=i;
        }
    }
    if(pos!=-1){
        nombres[pos]=jugador;
        tablaPuntajes[pos]=puntos;
    }
}
