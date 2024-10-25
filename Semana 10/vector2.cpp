///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///Para usar un vector hay que saber qué cantidad de componentes necesita
///al declarar se pone la cantidad de componentes que se quieren entre corchetes
///para usarlos hay que recordar que la primera de las componentes es 0
int main(){
    const int TAM=5;
    int vNum[TAM]={};
    int suma;
    cout<<vNum[0]<<"\t"<<vNum[1]<<"\t"<<vNum[2]<<"\t"<<vNum[3]<<"\t"<<vNum[4]<<endl;
    system("pause");
    suma=vNum[0]+vNum[1]+vNum[2]+vNum[3]+vNum[4];
    cout<<"SUMA DEL CONTENIDO DE vNum "<<suma;
	cout<<endl;
	system("pause");
	return 0;
}
