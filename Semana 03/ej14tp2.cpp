///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;
/*
DATOS DE ENTRADA:
        - fecha de nacimiento (3 variables sueltas)
                diaNac, mesNac, anioNac
        - fecha actual (3 var sueltas)
                 diaActual, mesActual, anioActual
SALIDA
        - CANTIDAD DE AÑOS (ENTERO)

        edad=anioActual-anioNacimiento;
*/
int main(){
    int edad;
    int anioNac, mesNac, diaNac;
    int anioActual, mesActual, diaActual;
    ///INGRESAR LA FECHA DE NACIMIENTO
    cout<<"INGRESAR EL DIA DE NACIMIENTO ";
    cin>>diaNac;
    cout<<"INGRESAR EL MES DE NACIMIENTO ";
    cin>>mesNac;
    cout<<"INGRESAR EL ANIO DE NACIMIENTO ";
    cin>>anioNac;
    ///INGRESAR LA FECHA ACTUAL
    cout<<"INGRESAR EL DIA ACTUAL ";
    cin>>diaActual;
    cout<<"INGRESAR EL MES ACTUAL ";
    cin>>mesActual;
    cout<<"INGRESAR EL ANIO ACTUAL ";
    cin>>anioActual;
    ///Calculo de la edad
    edad=anioActual-anioNac;
    if(mesActual<mesNac){
        edad=edad-1;
    }
    else{
        if(mesActual==mesNac){
            if(diaActual<diaNac){
                edad=edad-1;
            }
        }
    }

    cout<<"EDAD "<<edad;
	cout<<endl;
	if(mesActual==mesNac && diaActual==diaNac){
        cout<<"FELICIDADES!! ESTAS CUMPLIENDO ANIOS "<<endl;
	}
	system("pause");
	return 0;
}
