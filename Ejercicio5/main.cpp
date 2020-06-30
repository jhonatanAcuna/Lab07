#include <iostream>
#include "Prueba.h"

using namespace std;

int main() {
    int opcion;
    cout << "Excepciones con ficheros" << endl;
    cout << "Prueba 1:Input 2:Output 4:Salir" << endl;
    cin >> opcion;
    while (opcion != 4) {
        switch (opcion) {
            case 1:
                Prueba::Entrada_Exception();
                break;
            case 2:
                Prueba::Salida_Exception();
                break;
        }
        cout << "Prueba 1:Input 2:Output 4:Salir" << endl;
        cin >> opcion;
    }
    return 0;
}
