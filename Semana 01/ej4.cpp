///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>

using namespace std;

///PRODUCTO de dos números
int main(){
    ///declaración de variables
    int n1, n2;
    float resultado;
    ///ingreso de datos
    cout<<"BIENVENIDOS/AS AL PROGRAMA DE CALCULOS!!!!"<<endl<<endl;
    cout<<"INGRESE UN NUMERO ";
    cin>>n1;
    cout<<"INGRESE UN NUMERO ";
    cin>>n2;
    ///cálculo
    resultado=(float)n1/n2;

    ///impresión en pantalla del resultado
    cout<<"EL RESULTADO ES ";
    cout<<resultado;
	cout<<endl;
	system("pause");
	return 0;
}
