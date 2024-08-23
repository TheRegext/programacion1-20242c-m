#include <iostream>
using namespace std;

int main() {
   /// identificador de un valor que no se espera que modifique
   /**
      variable inmutable
   */

   const int CANTIDAD_NUMEROS = 10; 
   
   /// i j k l ... 
   for(int i=1; i<=CANTIDAD_NUMEROS; i++){
     cout << i << endl;
   }
	
	return 0;
}

