///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;


int main(){
    int num, i, j, contDiv, contPrimos=0;
    for(j=1;j<=5;j++){
        contDiv=0;
        cout<<"NUMERO ";
        cin>>num;
        for(i=1;i<=num;i++){
            if(num%i==0){
                contDiv++;
            }
        }
        if(contDiv==2){
            contPrimos++;
        }
    }
    cout<<"CANTIDAD DE NUMEROS PRIMOS "<<contPrimos;
    cout<<endl;
	system("pause");
	return 0;
}
