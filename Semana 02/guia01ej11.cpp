#include <iostream>
using namespace std;

/**
Hacer un programa para ingresar por teclado una cantidad de minutos 
y mostrar por pantalla a cu ntos d¡as, horas y minutos equivalen.

Ejemplo A: 
  si se ingresan 1520 minutos el programa mostrar  por pantalla que 
  equivalen a 1 d¡a, 1 hora y 20 minutos.
  
Ejemplo B: 
  si se ingresan 480 minutos el programa mostrar  por pantalla que 
  equivalen a 0 d¡a, 8 horas y 0 minutos.

//// E1 - Identificar o entender el problema
pide que reciba los minutos totales y muestre los dias, horas y minutos que equivalen.

/// E2 - Analisis de los datos
  DE:
    minutos_totales
  DS:
    dias
    horas
    minutos
  Op:
    dias = horas_totales / 24  2
    horas = horas_totales % 24  3
    minutos = minutos_totales % 60 4  
    horas_totales = minutos_totales / 60  1
    
/// + - * / %


    
/// E3 - Estrategia
  pedir los minutos totales
  
  calcular las horas totales
  calcular las horas
  calcular los dias
  calcular los minutos
  
  mostrar las dias, horas y minutos  

**/

/***

  camelCase -- variables y funciones
  PascalCase -- clases Prog2
  
*/

int main(){
    //// declaracion de variables
    int minutosTotales, dias, horas, minutos, horasTotales;
    
    // pedir los minutos totales
    cout << "Ingrese los minutos totales: ";
    cin >> minutosTotales;
    
    // calcular las horas totales
    horasTotales = minutosTotales / 60;
    
    // calcular las horas
    horas = horasTotales % 24;
    
    // calcular los dias
    dias = horasTotales / 24;
    
    // calcular los minutos
    minutos = minutosTotales % 60;    
  
    /// mostrar las dias, horas y minutos  
    cout << "Dias: " << dias << endl;
    cout << "Horas: " << horas << endl;
    cout << "Minutos: " << minutos << endl;
    
    return 0;
}
