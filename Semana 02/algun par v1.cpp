#include <iostream>
using namespace std;

/***
   Hacer un programa que solicite 2 numeros y muestre si alguno es par

*/

int main(int argc, char *argv[]) {
   /// declarar variables
   int numero1, numero2;
   
   /// ingresar los numeros
   cout << "Ingrese numero: ";
   cin >> numero1;
   
   cout << "Ingrese numero: ";
   cin >> numero2;
   
  
   /// si hay algun par
   if(numero1%2==0 || numero2%2 == 0){
      /// mostrar cartel "Alguno es par"
      if(numero1%2==0 && numero2%2 == 0){
         cout << "Ambos son pares" << endl;   
      }
      else{
         cout << "Hay algun par" << endl;   
      }
   }
   else{/// si no hay par
      /// mostrar cartel "No hay pares"
      cout << "Ningun es par" << endl;
   }
	
	return 0;
}

