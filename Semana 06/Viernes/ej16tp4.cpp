///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;


int main(){
    int num, numAnterior;
    ///para el c�lculo del m�ximo
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
        ///n�mero reci�n ingresado
        ///acordarme del n�mero anterior y compararlos
        if(num==numAnterior){
            seguir=false;
        }
    }
    cout<<"NUMERO MAXIMO INGRESADO "<<maximo<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
