#include <iostream>
using namespace std;

/***
    
    /// expresion numerica
    7
    3 + 2
    num + 15
  
    /// expresion logica
    verdadero - true
    falso     - false
    
    
    0 ---> false
    cualquier otra cosa ---> true
    
    
    Relacionales --> v o f
    ----------------
    >
    >=
    <
    <=
    !=
    ==
    
    
    Logicos      --> v o f
    ----------------
    &&  --- *
    ||  --- +
    !   --- 
    
*/

int main(){
    int numero;
    
    bool valorVerdad;
    
    
    cout << "Que camino tomar? 1- Verdadero 0- Falso"<<endl;
    cin >> valorVerdad;    
    
    
    if(valorVerdad){
        /// Verdadera - true
        cout << "Lado verdadero"<<endl;
    }
    else{
      /// falsa - false
      cout << "Lado falso"<<endl;
          
    }
    
    
    
    
    return 0;
}
