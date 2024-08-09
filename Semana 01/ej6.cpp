///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>

using namespace std;
///Dados dos números enteros que se ingresan por teclado, decir si son iguales o no


int main(){
    ///declaración de variables
    int n1, n2;

    ///ingreso de datos
    cout<<"INGRESE UN NUMERO ";
    cin>>n1;
    cout<<"INGRESE UN NUMERO ";
    cin>>n2;
    if(n1==n2){
        cout<<"SON IGUALES";
    }
    else{
        cout<<"SON DISTINTOS";
    }

	cout<<endl;
	system("pause");
	return 0;
}
