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

/**
  /// variable de control

   for (INICIALIZACION; FINAL ; INCREMENTO)
   for(int i=1; i<=10; i++) --- da 10 repeticiones
   for(int i=11; i<=20; i++) --- da 10 repeticiones
*/

int main() {
   int numero;
   
   cout << "Ingrese numero: ";
   cin >> numero;
   
   
   /// mostrar los datos
   /// mostrar la tabla
   for(int i=1; i<=10; i++){
      cout << numero << " x "<<i<<" = " << numero * i << endl;   
   }

   return 0;
}

