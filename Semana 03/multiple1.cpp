///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///Dados dos números que se ingresan en variables separadas,
///Calcular:
    ///- si se ingresa una 'S' la suma
    ///- si se ingresa una 'R' la resta
    ///- so se ingresa una 'P' el producto
int main(){
    int num1, num2, resultado;
    char opc;
    bool eligioBien=true;
    cout<<"INGRESE UN NUMERO ";
    cin>>num1;
    cout<<"INGRESE UN NUMERO ";
    cin>>num2;
    cout<<"INGRESE LA OPERACION A REALIZAR ENTRE LOS NUMEROS "<<endl;
    cout<<"S: suma; R: resta; P: producto"<<endl;
    cin>>opc;
    switch(opc){
        case 'S':   resultado=num1+num2;
                    break;
        case 'R':   resultado=num1-num2;
                    break;
        case 'P':   resultado= num1*num2;
                    break;
        /*default:    cout<<"EL VALOR INGRESADO NO ES CORRECTO "<<endl;
                    eligioBien=false;
                    break;
        */
    }
    if(resultado){
        cout<<"RESULTADO "<<resultado;
        cout<<endl;
    }
	system("pause");
	return 0;
}
