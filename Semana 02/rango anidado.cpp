#include <iostream>
using namespace std;
/**
Operadores Logicos

and && Y  * --> 2 operandos 
or  || O  + --> 2 operandos
not ! no  - --> 1 operandos

AND
-------
and da verdadero si ambos operandos son verdaderos, 
para todos los otros casos da falso

V && V => V
V && F => F
F && V => F
F && F => F

OR
-------
or da verdadero si alguno de sus operandos es verdadero, 
en caso de que ambos sean falso da falso

V || V => V
V || F => V
F || V => V
F || F => F

NOT
--------
Not niega el valor de verdad, 
si es verdadero da falso y si es falso da verdadero

!V => F
!F => V


2 + 5 * 3 => 2 + 15 => 17

V || F && V => V || F => V
1 +  0  * 1 => 1 +  0 => 1

V || V || V => V || V => V
1 +  1 +  1 => 1 + 1 => 1

/// [20;30]
(N>=20)&&(N<=30) => V (esta dentro del rango) 
=> F (No esta dentro del rango)

*/


int main(int argc, char *argv[]) {
   int numero;
   
   cout << "Ingrese numero: ";
   cin >> numero;
   
   if(numero>=20){
      if(numero<=30){
         cout << "Esta dentro del rango" << endl;   
      }
      else{
         cout << "Esta fuera del rango" << endl;
      }
   }
   else{
      cout << "Esta fuera del rango" << endl;
   }
   
   return 0;
}

