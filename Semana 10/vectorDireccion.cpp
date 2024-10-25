///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

void queViaja(int v[]){
    cout<<v<<endl;
}

void queViajaValor(int var){
    cout<<&var<<endl;
}
int main(){
    const int TAM=5;
    int vNum[TAM]={};
    int v2[7];
    cout<<"imprimo vNum "<<vNum<<endl;
    cout<<"imprimo v2 "<<v2<<endl;
    cout<<"FUNCION QUE IMPRIME v CUANDO LE ENVIO vNum ";
    queViaja(vNum);
	cout<<endl;
	cout<<"FUNCION QUE IMPRIME v CUANDO LE ENVIO v2 ";
    queViaja(v2);
	cout<<endl;
    int num;
    cout<<"IMPRIMO &num "<<&num<<endl;
    cout<<"FUNCION QUE IMPRIME &var CUANDO LE MANDO num ";
    queViajaValor(num);
	system("pause");
	return 0;
}
