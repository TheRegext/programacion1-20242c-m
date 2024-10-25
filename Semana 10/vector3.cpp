///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///Para usar un vector hay que saber qué cantidad de componentes necesita
///al declarar se pone la cantidad de componentes que se quieren entre corchetes
///para usarlos hay que recordar que la primera de las componentes es 0

void cargarVector(int v[], int tam){
    for(int indice=0;indice<tam;indice++){
            cout<<"VALOR ";
            cin>>v[indice];
        }
}
void mostrarVector(int v[], int tam){
    for(int indice=0;indice<tam;indice++){
        cout<<v[indice]<<"\t";
    }
}

int sumarVector(int v[], int tam){
    int suma=0;
    for(int indice=0;indice<tam;indice++){
        suma+=v[indice];
    }
    return suma;
}

int main(){
    const int TAM=5;
    int vNum[TAM]={};
    int v2[7];
    int suma;
    ///   CARGA DEL VECTOR
    cargarVector(vNum, TAM);
    ///FIN CARGA
    ///MOSTRAR EL VECTOR
    mostrarVector(vNum, TAM);
    ///FIN MOSTRAR EL VECTOR
    cout<<endl;
    system("pause");
    ///SUMAR CONTENIDO DEL VECTOR
    suma=sumarVector(vNum,TAM);
    ///FIN SUMAR
    cout<<"SUMA DEL CONTENIDO DE vNum "<<suma;
	cout<<endl;
    system("pause");
    system("cls");

	///
	cout<<"NUEVO VECTOR "<<endl;
	cargarVector(v2,7);
	mostrarVector(v2,7);
	cout<<endl<<"SUMA DEL CONTENIDO DE v2 "<<sumarVector(v2,7);
	system("pause");
	return 0;
}
