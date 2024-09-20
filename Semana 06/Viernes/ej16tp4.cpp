///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;


int main(){
    int num, numAnterior;
    ///para el cálculo del máximo
    int maximo;
    bool seguir=true;
    cout<<"INGRESAR NUMERO ";
    cin>>num;
    maximo=num;
    while(seguir==true){
        numAnterior=num;
        if(num>maximo){
            maximo=num;
        }
        cout<<"INGRESAR NUMERO ";
        cin>>num;
        ///número recién ingresado
        ///acordarme del número anterior y compararlos
        if(num==numAnterior){
            seguir=false;
        }
    }
    cout<<"NUMERO MAXIMO INGRESADO "<<maximo<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
