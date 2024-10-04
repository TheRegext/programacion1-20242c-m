#include <iostream>
#include "juego.h"
using namespace std;

int lanzarDado()
{
  return rand() % 6 + 1;
}

int obtenerPuntajeRonda(int dado1, int dado2, int dado3)
{
  int puntos;
  if(dado1 > dado2 && dado1 > dado3)
  {
    puntos = dado1;
  }
  else if(dado2 > dado3)
  {
    puntos = dado2;
  }
  else
  {
    puntos = dado3;
  }

  // TODO: si todos son iguales el puntaje de la ronda es cero

  return puntos;
}

int realizarTirada()
{
  int dado1, dado2, dado3, puntajeRonda;
  dado1 = lanzarDado();
  dado2 = lanzarDado();
  dado3 = lanzarDado();

  cout << dado1 << " " << dado2 << " " << dado3 << endl;
  cout << "--------" << endl;
  puntajeRonda = obtenerPuntajeRonda(dado1, dado2, dado3) ;
  cout << "Puntos de la ronda: " << puntajeRonda << endl;

  return puntajeRonda;
}


void jugar( int &estadisticasJugador, int &estadisticasRonda)
{
  int puntajeTotal1 = 0, puntajeTotal2=0;
  int numeroRonda = 0;

  do
  {
    numeroRonda++;
    cout << "Ronda #" << numeroRonda<<endl;
    cout << "Turno del Jugador #1: "<<endl;
    puntajeTotal1 += realizarTirada();
    cout << "Turno del Jugador #2: "<<endl;
    puntajeTotal2 += realizarTirada();
  }
  while(puntajeTotal1 < 25 && puntajeTotal2 < 25);

  if(puntajeTotal1 >= 25)
  {
    estadisticasJugador = 1;
    cout << "El ganador fue el jugador #1" << endl;
  }

  if(puntajeTotal2 >= 25)
  {
    estadisticasJugador = 2;
    cout << "El ganador fue el jugador #2" << endl;
  }
  
  estadisticasRonda = numeroRonda;

  //TODO: Hacer que solo guarde cuando sea menor de las rondas
  
  cout << "Y lo hizo en " << numeroRonda << " rondas." << endl;

}
