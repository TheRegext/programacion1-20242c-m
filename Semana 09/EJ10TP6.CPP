///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

bool seleccionarNaipe(int codigo, int &numero, string &palo){

    if(codigo<1 || codigo>40)return false;
    /*
    switch(resultado){
        case 0: palo="espada";
                break;
        case 1: palo="basto";
                break;
        case 2: palo="copa";
                break;
        case 3: palo="oro";
                break;
    }
         */


    if(codigo<11){
        palo="espada";
    }
    else{
        if(codigo<21){
            palo="basto";
        }
        else{
            if(codigo<31){
                palo="copa";
            }
            else{
                palo="oro";
            }
        }
    }
    int resto=codigo%10;
    if(resto==0){
        numero=12;
    }
    else{
        if(resto<8)numero=codigo;
        else numero=resto+2;
    }
    return true;
}

int main(){
    int codigoNaipe, numeroNaipe;
    string paloNaipe;
    cout<<"INGRESAR CODIGO ";
    cin>>codigoNaipe;
    seleccionarNaipe(codigoNaipe, numeroNaipe, paloNaipe);
    cout<<"CARTA QUE CORRESPONDE "<<numeroNaipe<<"  "<<paloNaipe;
	cout<<endl;
	system("pause");
	return 0;
}
