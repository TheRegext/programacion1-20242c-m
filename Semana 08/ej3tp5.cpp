///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>

/*Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa
un cero. Informar:
    * el porcentaje de n�meros primos y el porcentaje de n�meros no primos.

Se informan 2 resultados al final.

Datos de entrada: lista de n�meros. No se sabe cu�ntos. Termina con un 0.
Idea de la estructura general del programa:
    * Tenga una lista, por lo que necesito ciclo/s
    * Como no s� la cantidad tengo que usar un ciclo inexacto (finaliza con 0).
*/
using namespace std;

/*total del porcentaje-> 100%
Calculo de procentaje: parcial/total *100

C�lculo de un n�mero primo

- Contar cu�ntos primos hay en la lista-> cantPrimos
- Contar la cantidad de n�meros en total de la lista->cantTotales

*/
///FUNCION: es un fragmento de c�digo con un nombre, que resuelve un problema en particular.
///Puede contener cualquier conjunto de instrucciones acpetadas por el lenguaje

///Declaraci�n o prototipo de funciones
bool esPrimo(int n);///para saber si un n�mero que se recibe es primo



int main(){ ///main() es la funci�n principal, donde comienza la ejecuci�n del programa
    int num;
    float porPrimos;
    int cantPrimos=0, cantTotales=0;
    bool primo;
    cout<<"INGRESAR NUMERO ";
    cin>>num;
    while(num!=0){
        cantTotales++;

        primo=esPrimo(num);///llamada de la funci�n

        if(primo==true){
              cantPrimos++;
        }
        cout<<"INGRESAR NUMERO ";
        cin>>num;
    }
    porPrimos=(float)cantPrimos/cantTotales*100;
    cout<<"EL PORCENTAJE NUMEROS PRIMOS ES "<<porPrimos<<" %"<<endl;
    cout<<"EL PORCENTAJE NUMEROS NO PRIMOS ES "<<100-porPrimos<<" %"<<endl;
	cout<<endl;
	system("pause");
	return 0;
}

///Desarrollo de las funciones

bool esPrimo(int n){
    int cantDivisores=0, i;
        for(i=1;i<=n;i++){
            if(n%i==0){
                cantDivisores++;
            }
        }
     if(cantDivisores==2){
           return true;
     }
     else{
        return false;
     }
    }
///fin c�culo primo


