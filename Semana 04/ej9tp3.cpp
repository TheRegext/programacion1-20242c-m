///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///Dada una lista de edades de los alumnos de un curso>todos los valores son positivos -> p�edo inicializar el m�ximo
/// en un valor absurdo m�s chico que todos los valores posibles (0, -1)

///Dada una lista de n�meros (sin definir)
int main(){
    const int TOPE=5;
    int num, i, maximo;

    for(i=1;i<=TOPE;i++){
        cout<<"INGRESAR NUMERO ";
        cin>>num;

        /*if(i==1){
            maximo=num;
        }
        else{
            if(num>maximo){
                maximo=num;
            }
        }
        */

        if(i==1 ||num>maximo){
            maximo=num;
        }

    }


    cout <<"EL VALOR MAXIMO ES "<< maximo;
	cout<<endl;
	system("pause");
	return 0;
}
