#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
   int fechaNac, fechaActual, edad;     //INGRESAR LA FECHA CON EL FORMATO AAAAMMDD
   int truncoNac, truncoActual;

    cout<<"Ingrese la fecha de Nacimiento (AAAAMMDD): ";   //año, mes, dia
    cin>>fechaNac;
    cout<<"Ingrese la fecha actual (AAAAMMDD): ";   //año, mes, dia
    cin>>fechaActual;

    edad=(fechaActual-fechaNac)/10000;

    cout<<"Edad: "<<edad<<endl;

    truncoActual=(fechaActual/10000)*10000;     //formateo la fecha para poder restarla a la fecha actual
    truncoNac=(fechaNac/10000)*10000;           //formateo la fecha para poder restarla a la fecha de nacimiento

    if((fechaActual-truncoActual)==(fechaNac-truncoNac)){
        cout<<"Feliz cumpleaños!!!"<<endl;
    }

    system("pause");
    return 0;
}
