#include <iostream>
#include <ctime>
#include "menu.h"

using namespace std;

int main()
{
  int opcion;
  srand(time(0));
  int estadisticasJugador=0, estadisticasRonda=0;

  do
  {
    system("cls");
    
    opcion = seleccionarOpcion();
    ejecutarOpcion(opcion, estadisticasJugador, estadisticasRonda);
    
    system("pause");
  }
  while(opcion !=0);
  
  return 0;
}
