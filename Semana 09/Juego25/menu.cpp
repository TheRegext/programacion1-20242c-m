#include <iostream>
#include "menu.h"
#include "juego.h"
using namespace std;

int seleccionarOpcion(){
    int opcion;
    cout << "JUEGO 25"<<endl;
    cout << "1- Jugar"<<endl;
    cout << "2- Estadisticas"<<endl;
    cout << "-------------"<<endl;
    cout << "0- Salir"<<endl;
    cout <<endl;
    cout <<"Opcion: "<<endl;
    cin >> opcion;
    
    return opcion;
}

void mostrarEstadisticas(int estadisticasJugador, int estadisticasRonda){
  //TODO: Solo se debe mostrar si ya se jugo aunque sea una vez
  cout << "El jugador que gano en menos rondas fue: " << estadisticasJugador << endl;
  cout << "Cantidad rondas: " << estadisticasRonda << endl;
}

void ejecutarOpcion(int opcion, int &estadisticasJugador, int &estadisticasRonda){
  switch(opcion)
    {
    case 1:
      jugar(estadisticasJugador, estadisticasRonda);
      break;
    case 2:
      mostrarEstadisticas(estadisticasJugador, estadisticasRonda);
      break;
    case 0:
      cout << "Gracias por jugar al 25."<< endl << "Los ganadores no usan drogas!" << endl;
    }
}
