///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>

using namespace std;
///Dados dos números enteros distintos que se ingresan por teclado, mostrar por pantalla
///el mayor


int main(){
    ///declaración de variables
    int n1, n2, mayor;

    ///ingreso de datos
    cout<<"INGRESE UN NUMERO ";
    cin>>n1;
    cout<<"INGRESE UN NUMERO ";
    cin>>n2;
    if(n1>n2){
        mayor=n1;
    }
    else{
        mayor=n2;
    }

    cout<<"EL VALOR MAYOR ES "<<mayor;
	cout<<endl;
	system("pause");
	return 0;
}
