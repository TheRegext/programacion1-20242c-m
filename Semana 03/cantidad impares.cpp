#include <iostream>
using namespace std;

/**
   hacer un programa que pida 10 numero y 
      muestre cuantos de ellos son impares
*/
/***
   CONTADOR
   ----------------------------------
   - se inicializa en un valor, generalmente es cero
   - se realiza una opaeracion
         con = con + 1 --- es universal  con = con -1
         con += 1  con-=1
          con++     con --
         ++con     --con
   - generalmente dependen de una condicion

   ACUMULADORES
   ----------------------------------
   - se inicializa en un valor, generalmente en cero
   - se realiza una operacion, se suma un cantidad variable
      acu = acu + N --- acu = acu - N
      acu += N      --- acu -= N

*/
int main() {
   int numero;
   int cantidad = 0;
   
   /// lo utilizamo como carga de datos
   for(int i=1; i<=10; i++){
      cout << "Ingrese numero: ";
      cin >> numero;   
      
      /// verificar si dicho numero es impar
      if(numero % 2 != 0){
         /// contar
         cantidad ++;
      }
   }
   
   /// muestro la cantidad
   cout << "La cantidad de impares son: " << cantidad << endl;
	
	return 0;
}

