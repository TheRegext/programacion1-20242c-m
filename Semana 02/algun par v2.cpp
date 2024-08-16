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
   
   if(numero1%2==0 && numero2%2 == 0){
      cout << "Ambos son pares" << endl;   
   }
   else{
      if(numero1%2==0 || numero2%2 == 0){
         cout << "Hay algun par" << endl;   
      }
      else{
         cout << "Ningun es par" << endl;
      }
   }
   
   
   
   return 0;
}

