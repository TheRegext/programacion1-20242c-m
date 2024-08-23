#include <iostream>
using namespace std;

/***
   hacer un programa que muestre los numero pares entre el 1 y el 20
*/

int main() {
	for(int i=1; i<=20; i++){
      if(i % 2 == 0){
         cout << i << endl;
      }
   }
	return 0;
}

