///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///M�ximo y posici�n de un conjunto dado de n�meros
int main(){
    const int VUELTAS=5;
    int j,i=0, num, maximo, segundoMaximo;

    for(j=1;j<=VUELTAS;j++){
        cout<<"NUMERO ";
        cin>>num;
        if(num%2==0){
            i++;
            if(i==1){
                maximo=num;
            }
            else{
                if(i==2){
                    if(num>maximo){
                        segundoMaximo=maximo;
                        maximo=num;
                    }
                    else{
                        segundoMaximo=num;
                    }
                }
                else{
                    if(num>maximo){
                        segundoMaximo=maximo;
                        maximo=num;
                    }
                    else{
                        if(num>segundoMaximo){
                            segundoMaximo=num;
                        }
                    }
                }
            }
        }

    }
    cout<<"MAXIMO "<<maximo;
	cout<<endl;
	cout<<"SEGUNDO MAXIMO "<<segundoMaximo<<endl;
	system("pause");
	return 0;
}
