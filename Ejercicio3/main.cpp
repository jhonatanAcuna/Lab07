#include <iostream>
#include "Ejercicio3.h"
using namespace std;
int main() {
    cout << "-->Generar error por mala introduccion de caracteres: "<<endl;
    Ejercicio3::ingresarValor();
    cout << "-->Mala Asignacion de memoria"<<endl;
    Ejercicio3::errorMemoria();
    return 0;
}
