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
   int numero; 
   int div;
   /// Pedir el numero
   cout << "Ingrese numero: ";
   cin >> numero;
   /// si hay algun divisor entre 1 y N
   
   div = 2;
   
   while(numero%div != 0 && numero > 1){
      cout << "Intentos" << endl;
      div++;      
   } 
   
   /*
   div = 1;
   do
   {
      div++;      
   }while(numero%div != 0 && numero > 1);
   */
   
   /// averiguar si hay 2 divisores exactos, entonces es primo
   if(numero == div){
      cout << "Es Primo" << endl;
   }
   else{
      cout << "No es Primo" << endl;
   }
      
   return 0;
}

