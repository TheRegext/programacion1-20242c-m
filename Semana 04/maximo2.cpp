///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///Dada una lista con los legajos y las edades de los 35 alumnos de un curso, calcular e informar
///el legajo del alumno de mayor edad


int main(){
    const int TOPE=5;
    int legajo, edad, i, maximo=0, legajoMaximo;

    for(i=1;i<=TOPE;i++){
        cout<<"INGRESAR LEGAJO ";
        cin>>legajo;
        cout<<"INGRESAR edad ";
        cin>>edad;
        if(edad>maximo){
               maximo=edad;
               legajoMaximo=legajo;
            }
        }

    cout <<"EL LEGAJO DEL ALUMNO CON MAYOR EDAD ES "<< legajoMaximo;
	cout<<endl;
	system("pause");
	return 0;
}
