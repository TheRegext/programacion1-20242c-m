#include <iostream>
using namespace std;
#include "funciones.h"



/// definiciones o implementaciones 
void mostrar(){
   cout << "Hola Mundo" <<endl;
   return;
}
   
void saludar(string nombre, int tipo){
   switch(tipo){
   case 1:
      cout << "Hola " << nombre << endl;
      break;
   case 2:
      cout << "Hello " << nombre << endl;
      break;
   default:
      cout << "Que hace " << nombre << endl;
      break;
   }
   return;
}
   
/// funciones 
int pedirNumeroPositivo(){
   int numero;
   
   do{
      cout << "Ingrese numero: ";
      cin >> numero;
      
      if(numero <=0){
         cout << "El numero debe ser positivo"<<endl;
      }
   }
   while(numero <=0);   
   
   return numero;
}
      
int pedirNumeroRango(int minimo, int maximo){
   int numero;
   
   do{
      cout << "Ingrese numero: ";
      cin >> numero;
      
      if(numero < minimo || numero > maximo){
         cout << "El numero debe estar entre el " << minimo << " y el "<< maximo<<endl;
      }
   }
   while(numero < minimo || numero > maximo);   
   
   return numero;
}
