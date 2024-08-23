///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///Dados dos números que se ingresan en variables separadas,
///informar cuántos son positivos
int main(){
    int num1, num2;
    int cantPos=0;
    cout<<"INGRESE UN NUMERO ";
    cin>>num1;
    cout<<"INGRESE UN NUMERO ";
    cin>>num2;
    if(num1>0){
        cantPos++;///cantPos=cantPos+1 ///cantPos+=1
    }
    if(num2>0){
        cantPos++;
    }
    cout<<"CANTIDAD DE POSITIVOS "<<cantPos;
	cout<<endl;
	system("pause");
	return 0;
}
