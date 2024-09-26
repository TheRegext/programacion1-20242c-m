#include <iostream>
using namespace std;

/***
  una escuela dispone de las notas sus 10 alumnos
  por cada nota se carga
    legajo
    nota
  se pide informar el alumno con la nota mas alta
    
*/

int main(){
    int legajo, nota, legajoMaximo, notaMaxima=0;
    string nombre, nombreMaximo;
    
    for(int i=1; i<=10; i++){
      cout << "Ingrese legajo: ";
      cin >> legajo;
      
      cout << "Ingrese nombre: ";
      cin >> nombre;
      
      cout << "Ingrese nota: ";
      cin >> nota;
      
      if(nota > notaMaxima){
        notaMaxima = nota;      
        legajoMaximo = legajo;
        nombreMaximo = nombre;
      }
      
    }
    
    cout << "El alumno con la nota mas alta es: " << legajoMaximo << endl;
    cout << "El nombre es: " << nombreMaximo << endl;
    
    return 0;
}
