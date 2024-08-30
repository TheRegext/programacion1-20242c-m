///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///Dada una lista con los legajos y las edades de los 35 alumnos de un curso, calcular e informar
///el legajo del alumno de mayor edad, y en que posición de la lista fue ingresado
///

int main(){
    const int TOPE=5;
    int legajo, edad, i, minimo=250, legajoMinEdad;

    for(i=1;i<=TOPE;i++){
        cout<<"INGRESAR LEGAJO ";
        cin>>legajo;
        cout<<"INGRESAR EDAD ";
        cin>>edad;
        if(edad<minimo){
               minimo=edad;
               legajoMinEdad=legajo;
            }
        }

    cout <<"EL LEGAJO DEL ALUMNO CON MENOR EDAD ES "<< legajoMinEdad;
	cout<<endl;
	system("pause");
	return 0;
}
