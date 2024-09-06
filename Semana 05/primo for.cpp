#include <iostream>
using namespace std;

/***
   18: Dado un numero entero e informar si dicho numero es primo

   Un numero es primo cuando 
      unicamente es divisible por dos numeros (1 y el Mismo)

   5/2 => 5 es el dividendo
          2 es el divisor
          R es el cociente (2.5)

   entre los divisores 1 y N => deben existir 2 divisores exactos
      
   /// ESTRATEGIA
   Pedir el numero
   contar los divisores exactos
   averiguar si hay 2, entonces es primo
*/

int main() {
   int numero, cantidadDivisores; 
   
   /// Pedir el numero
   cout << "Ingrese numero: ";
   cin >> numero;
   
   /// contar los divisores exactos
   cantidadDivisores = 0;
   /// recorerer los numeros del 1 a N
   for(int i=1; i<=numero; i++){
      cout << "Intentos" << endl;
      /// por cada averiguar si es divisor exacto
      if(numero%i == 0){
         /// Si lo es, lo cuento
         cantidadDivisores++;
      }
   }
   
   /// averiguar si hay 2 divisores exactos, entonces es primo
   if(cantidadDivisores == 2){
      cout << "Es Primo" << endl;
   }
   else{
      cout << "No es Primo" << endl;
   }
   	
	return 0;
}

