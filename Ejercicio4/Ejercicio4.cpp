//
// Created by jacun on 25/06/2020.
//
#include <iostream>
#include <math.h>
#include <exception>
#include "Ejercicio4.h"

using namespace std;
static const int No_raices_reales = -1;
static const int Primer_coeficiente_cero = 0;

class ErrorEcuacion {
public:
    ErrorEcuacion() : motivo(0) {};

    ErrorEcuacion(int m) : motivo(m) {};

    const char *what() const throw();

private:
    int motivo;
};

const char *ErrorEcuacion::what() const throw() {
    switch (motivo) {
        case No_raices_reales:
            return "ERROR!!!\nNo tiene raices reales";
            break;
        case Primer_coeficiente_cero:
            return "ERROR!!!\nPrimer coeficiente igual a 0";
            break;
        default:
            return "Error Desconocido!!!";
    }
}

void Ejercicio4::raices() {
    int a, b, c;
    cout << "Ingrese primer coeficiente" << endl;
    cin >> a;
    cout << "Ingrese segundo coeficiente" << endl;
    cin >> b;
    cout << "Ingrese tercer coeficiente" << endl;
    cin >> c;
    double discriminante = pow(b, 2) - 4 * a * c;
    double pf, sf;
    try {
        if (a == 0)throw (ErrorEcuacion(Primer_coeficiente_cero));
        if (discriminante < 0)throw (ErrorEcuacion(No_raices_reales));
        pf = (b * (-1) + sqrt(discriminante)) / (2 * a);
        sf = (b * (-1) - sqrt(discriminante)) / (2 * a);
        cout << "Primer valor de x= " << pf << endl;
        cout << "Segundo valor de x= " << sf << endl;


    } catch (ErrorEcuacion &e) {
        cout << e.what();
    }
}