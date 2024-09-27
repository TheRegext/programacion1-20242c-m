#include <iostream>
using namespace std;
#include "funciones.h"

int main() {
   
   mostrar();
   saludar("Brian", 1);
   saludar("Pablo", 2);
   saludar("Eliana", 3);
   
   int valor;
   
   valor = pedirNumeroPositivo();
   
   cout << "Valor devuelto: " << valor << endl;
   
   valor = pedirNumeroRango(10, 30);
   
   cout << "Valor devuelto: " << valor << endl;
	
	return 0;
}


