#include <iostream>
using namespace std;
/**
   hacer un programa que pida por teclado la cantidad de numeros 
   que quiere que se muestren, y luego mostrar los numero entre 
   1 y la cantidad

*/

int main() {
   int numero;
   cout << "Ingrese numero: ";
   cin >> numero;
   
   for(int i=1; i<=numero; i++){
      cout << i << endl;
   }
   
	
	return 0;
}

