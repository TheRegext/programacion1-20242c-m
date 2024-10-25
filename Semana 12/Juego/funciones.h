#pragma once


void cargarVector(int v[], int tam);///asigna valores a cada una de las posiciones del vector

void mostrarVector(int v[], int tam);/// muestra lo que contiene cada una de las posiciones del vector

void ponerCero(int v[], int tam);/// pone en 0 todas las posiciones del vector

int posicionNumeroEnVector(int v[],int tam, int numero);/// devuelve la posici�n que ocupa un n�mero que se //env�a como par�metro. Devuelve la primera posici�n que encuentra el n�mero. Si no lo encuentra devuelve -1
int contarNumerosRepetidos(int v[], int numero, int tam);///cuenta la cantidad de veces que se repite un //n�mero en el vector

int maximoVector(int v[], int tam);///devuelve  la posici�n (primera) que ocupa el m�ximo en el vector

int minimoVector(int v[], int tam);///devuelve  la posici�n (primera) que ocupa el m�nimo en el vector


void cargarAleatorio(int v[], int tam, int limite);
///asigna valores aleatorios a cada elemento del vector

void ordenarVector(int v[], int tam );/// ordena de menor a mayor un vector

int sumarVector(int v[], int tam ); /// suma los valores contenidos en el vector

void copiarVector(int v[], int v2[],int tam ); ///copia el vector v en v2

bool compararVectores(int v[], int v2[],int tam );// compara los dos vectores que recibe. Si son iguales ///devuelve true, si no devuelve false
