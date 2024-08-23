#include <iostream>
using namespace std;

int main() {
  int numero;
  cout << "Ingrese numero: ";
  cin >> numero;
  
  if(numero % 2 != 1 || numero % 2 == -1){
     cout << "Impar" << endl;
  }
  else{
     cout << "Es Par" << endl;
  }
   
	
	return 0;
}

