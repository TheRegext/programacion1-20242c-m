#include <iostream>
using namespace std;

/***

   Dada una lista de numeros positivos que 
      finaliza cuando se ingrese el 3er numero par,

   Mostrar cuantos numeros se ingresaron en total


   /// estrategia
   pedir los numeros hasta que se ingrese el tercer par -Ok
   contar la cantidad de numeros ingresados -- Ok
   mostrar la cantidad de numetos ingresados

*/

int main() {
   int numero, cantidadPares, cantidad;
   
   cantidadPares = 0;
   cantidad = 0;
   do{
      cout << "Ingrese numero: ";
      cin >> numero;
      
      if(numero % 2 == 0){
         cantidadPares++;
      }
      /// procesamos   
      /// cout << "Proceso #"<< numero << endl;
      cantidad++;
      
      
   }while(cantidadPares < 3);
   
   cout << "La cantidad de numeros ingresaron fueron: " << cantidad << endl;
	
	return 0;
}

