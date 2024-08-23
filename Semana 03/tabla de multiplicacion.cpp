#include <iostream>
using namespace std;

/**
   Hacer un programa que dado un numero me 
      muestra la tabla de multiplicacion de ese numero

   DE:
      numero
   DS:
      resultado de cada opearacion *1, *2, *3, ... *10 

   opeaciones
      resultado1 = numero * 1
      resultado2 = numero * 2
      resultado3 = numero * 3
      ...
      resultado10 = numero * 10

   Estrategia:
      Pido el numero
      mostrar el numero * 1
      mostrar el numero * 2
      ...
      mostrar el numero * 10
*/

int main() {
   int numero;
   
   cout << "Ingrese numero: ";
   cin >> numero;
   
   cout << numero * 1 << endl;
   cout << numero * 2 << endl;
   cout << numero * 3 << endl;
   cout << numero * 4 << endl;
   cout << numero * 5 << endl;
   cout << numero * 6 << endl;
   cout << numero * 7 << endl;
   cout << numero * 8 << endl;
   cout << numero * 9 << endl;
   cout << numero * 10 << endl;
	
	return 0;
}

