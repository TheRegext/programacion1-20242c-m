#include <iostream>
using namespace std;

/***
  hacer un programa que pida un numero y muestre si es positivo,
  negativo y cero


*/


int main()
{
  int numero;

  cout << "Ingrese numero: ";
  cin >> numero;


  if(numero > 0)
  {
    cout << "Es positivo" << endl;
  }

  if(numero < 0)
  {
    cout << "Es negativo" << endl;
  }

  if(numero == 0)
  {
    cout << "Es cero"<<endl;
  }

  return 0;
}
