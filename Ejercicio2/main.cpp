#include <iostream>
#include <cstdlib>
#include <exception>
#include "Ejercicio2.h"

using namespace std;

class div_cero : public exception {
public:
    const char *what() const throw() {
        return "Error: divisor igual a 0";
    }
};

int main() {
    double divisor, dividendo;
    cout << "Ingrese dividendo: " << endl;
    cin >> dividendo;
    cout << "Ingrese divisor: " << endl;
    cin >> divisor;
    try {
        if (Ejercicio2::Division(divisor, dividendo) == -1)throw div_cero();
        cout << dividendo << "/"
        << divisor << " = " << Ejercicio2::Division(divisor, dividendo) << endl;
    } catch (exception &e) {
        cout << e.what() << endl;
    }
    return 0;
}