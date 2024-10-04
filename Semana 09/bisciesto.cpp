///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///Un año es bisiesto cuando es divisible por cuatro

int esBisiesto(int anio){
    if(anio%4!=0){
        ///el valor recibido no corresponde a una año bisiesto
        return 0;
    }
    if(anio%100==0){
        if(anio%400==0)return 1;
        return 0;
    }
    return 1;
}

int main(){
    int anio, bisiesto;
    cout<<"INGRESE UN ANIO ";
    cin>>anio;
    bisiesto=esBisiesto(anio);///Valor, referencia o por dirección
    if(bisiesto==1){
        cout<<"EL ANIO INGRESADO ES BISIESTO";
    }
    else{
        cout<<"EL ANIO INGRESADO NO ES BISIESTO";
    }
	cout<<endl;
	system("pause");
	return 0;
}
