///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///Dada una lista con los legajos y las edades de los alumnos de un curso, calcular e informar
///el legajo del alumno de mayor edad

///Para indicar el fin del ingreso de datos se puso un valor de legajo igual a 0.


int main(){
    int legajo, edad, maximo=0, legajoMaximo;

    cout<<"INGRESAR LEGAJO ";
    cin>>legajo;

    while(legajo!=0){
        cout<<"INGRESAR edad ";
        cin>>edad;
        if(edad>maximo){
               maximo=edad;
               legajoMaximo=legajo;
            }
        cout<<"INGRESAR LEGAJO ";
        cin>>legajo;
        }

    cout <<"EL LEGAJO DEL ALUMNO CON MAYOR EDAD ES "<< legajoMaximo;
	cout<<endl;
	system("pause");
	return 0;
}
