#include <iostream>
using namespace std;

/***
   Dada una lista de numeros positivos que finaliza con cero,
   Mostrar cuantos de ellos son pares.


   ////
   Se ingresaran muchos numeros
   el usuario dejara de cargar datos cuando ingrese un cero 
   el cero se ignora
   
   Al finalizar la carga de numeros debe mostrar una sola vez 
      la cantidad de pares
   

   //// estrategia
   pedir la lista de numeros, hasta que ingrese cero -- Ok
   contar cuantos de ellos son pares -- Ok
   mostrar la cantidad de pares

   ****
   cuando usamos while variable que va en la condicion, 
      siempre se debe incializar antes del while
      Siempre se debe modifciar dentro del while

   while(expresion_logica){} /// 0 a N repeticiones

   do{}while(expresion_logica); /// 1 a N repeticiones

   // estructura de repeticion
   - Ignore
      cin
      while(){
         ....
         cin
      }

   - Procese
      do{
         cin
         ...
      }while();
*/

int main() {
   int numero;
   int cantidad;
   
   cout << "Ingrese numero: ";
   cin >> numero; 
   
   cantidad = 0;
   while(numero != 0){
      /// proceso
      /// cout << "Procesamos el #" << numero << endl;
      
      /// por cada numero
      /// verifico si es par
      if(numero % 2 == 0){
         /// contarlo
         cantidad++;
      }
      
      cout << "Ingrese numero: ";
      cin >> numero; 
   }
   
   cout << "La cantidad de pares fueron: " << cantidad<<endl;
	
	return 0;
}

