///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///Hacer un programa para que el usuario ingrese 2 números, y luego elija que operación hacer
/// de acuerdo con lo siguiente:
/// si el usuario ingresa una S, se calcule la suma de ambos números.
/// si el usuario ingresa una R, se calcule la resta del primero menos el segundo.
/// si el usuario ingresa una P, se calcule el producto de ambos números.
/// si el usuario ingresa una F, se termine el programa.

int sumar2(int num1, int num2);
int restar2(int num1,int num2);
int multiplicar2(int num1,int num2);

int main(){
    int num1, num2, resultado;
    char opcion;
    bool seImprime;
    string operacion;
    while(true){
        seImprime=true;
        system("cls");
        cout<<"************MENU PRINCIPAL************"<<endl;
        cout<<"I. INGRESO DE NUMEROS PARA EL CALCULO"<<endl;
        cout<<"S. CALCULO DE LA SUMA"<<endl;
        cout<<"R. CALCULO DE LA RESTA"<<endl;
        cout<<"P. CALCULO DEL PRODUCTO"<<endl;
        cout<<"F. FIN DEL PROGRAMA"<<endl;
        cout<<"***************************************"<<endl;
        cout<<"INGRESAR OPCION ";
        cin>>opcion;
        system("cls");
        switch(opcion){
            case 'I':   cout<<"INGRESAR NUMERO ";
                        cin>>num1;
                        cout<<"INGRESAR NUMERO ";
                        cin>>num2;
                        seImprime=false;
                        break;
            case 'S':   resultado=sumar2(num1, num2);
                        operacion="SUMA";
                        break;
            case 'R':   resultado=restar2(num1, num2);
                        operacion="RESTA";
                        break;
            case 'P':   resultado=multiplicar2(num1, num2);
                        operacion="PRODUCTO";
                        break;
            case 'F':   return 0;
                        break;
            default:   cout<<"VALOR INGRESADO INCORRECTO"<<endl;
                        break;
        }
        if(seImprime==true){
            cout<<"RESULTADO DE LA OPERACION "<<operacion<<" "<<resultado<<endl;
        }
        system("pause");
    }
	cout<<endl;
	system("pause");
	return 0;
}


int sumar2(int num1, int num2){
    int sumar=num1+num2;
    return sumar;
}

int restar2(int num1,int num2){
    int resta=num1-num2;
    return resta;
}
int multiplicar2(int num1,int num2){
    int prod=num1*num2;
    return prod;
}
