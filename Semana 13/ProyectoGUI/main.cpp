#include <iostream>
#include "menu.h"
#include "rlutil.h"

using namespace std;

int main()
{
    int opcion;
    
    do{
        rlutil::setBackgroundColor(rlutil::BLACK);
        rlutil::cls(); /// borrar la pantalla
          
        opcion = seleccionarOpcion();
        ejecutarOpcion(opcion);
        
        rlutil::anykey();
      
    }while(opcion != 0);
    
    return 0;
}
