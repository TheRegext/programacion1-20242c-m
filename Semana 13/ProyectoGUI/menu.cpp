#include <iostream>
#include "menu.h"
#include "rlutil.h"

using namespace std;

int seleccionarOpcion()
{
  int opcion;
  dibujarLinea();
  rlutil::setColor(rlutil::LIGHTRED);
  cout << "---- MENU PRINCIPAL ---- "<<endl;
  dibujarLinea();
  
  rlutil::setColor(rlutil::WHITE);
  cout << "1- Opcion 1 " << endl;
  cout << "2- Opcion 2 " << endl;
  cout << "3- Opcion 3 " << endl;
  cout << "0- Salir " << endl;
  rlutil::setColor(rlutil::LIGHTRED);
  dibujarLinea();
  rlutil::setColor(rlutil::LIGHTGREEN);
  cout << "Opcion > ";
  rlutil::setColor(rlutil::WHITE);
  rlutil::setBackgroundColor(rlutil::LIGHTBLUE);
  cin >> opcion;
  rlutil::setBackgroundColor(rlutil::BLACK);

  return opcion;
}

void ejecutarOpcion(int opcion)
{
  switch(opcion)
  {
  case 0:
    cout << "GRACIAS POR UTILIZAR MI APP :)" << endl;
    break;
  case 1:
    opcion1();
    break;
  case 2:
    game();
    break;  
  }


}

void dibujarLinea(){
  
  for(int i=0; i<rlutil::tcols();i++){
    rlutil::setColor(i%16);
    cout << (char)178;    
  }
}

void opcion1()
{
  rlutil::hidecursor();
  
  for(int i=0; i<10; i++){
    rlutil::cls();
    rlutil::msleep(250);
    
    rlutil::locate(12,3);
    cout << "Texto de prueba" << endl;
    
    // se quede esperando!
    rlutil::msleep(250);
  }

  rlutil::showcursor();
}


void game(){
  int valor ;
  int cant = 0;
  rlutil::cls();
  do{
    cant++;
    valor = rlutil::nb_getch();
    rlutil::locate(1,1);
    cout << "   ";
    rlutil::locate(1,1);
    cout << valor;
    
    rlutil::locate(1,2);
    cout << "Cantidad de iteraciones: " << cant;
    
    rlutil::msleep(50);
  }while(valor != 27);

}



