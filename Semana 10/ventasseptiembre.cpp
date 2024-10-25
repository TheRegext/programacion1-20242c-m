///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

void mostrarVector(float v[], int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<"DIA "<<i+1<<" RECAUDACION "<<v[i]<<endl;
    }


}

int main(){
    int dia;
    float importe, vDias[30]={};
    cout<<"INGRESAR EL DIA ";
    cin>>dia;
    while(dia!=0){
        cout<<"IMPORTE ";
        cin>>importe;
        vDias[dia-1]+=importe;
        cout<<"INGRESAR EL DIA ";
        cin>>dia;
    }
	cout<<endl;
	mostrarVector(vDias, 30);
	system("pause");
	return 0;
}
