//
// Created by jacun on 30/06/2020.
//
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "ComputerException.h"
#include "InputException.h"
#include "OutputException.h"
#include "ProcessorException.h"
#include "Prueba.h"

string nombref,texto;
void Prueba::Entrada_Exception() {
    try {
        printf("\nNombre de Fichero a abrir: ");
        getline(cin, nombref);
        getline(cin, nombref);
        ifstream fichero(nombref.c_str(), ios::in);
        if (fichero.fail()) {
            throw InputException();
        }
        while (!fichero.eof()) {
            getline(fichero, texto);
            cout << texto << endl;
        }
        fichero.close();
    } catch (InputException &e) {
        cout << e.getMessage() << endl;
    }
}

void Prueba::Salida_Exception() {
    try {
        cout << "Nombre del fichero de escritura:";
        getline(cin, nombref);
        getline(cin, nombref);
        if (nombref.substr(nombref.size() - 4, nombref.size() - 1).compare(".txt")) {
            throw OutputException();
        }
        ofstream fichero1(nombref.c_str(), ios::out | ios::app);
        cout << "Texto del fichero" << endl;
        getline(cin, texto);
        fichero1 << texto << endl;
        fichero1.close();
    } catch (OutputException &e) {
        cout << e.getMessage() << endl;
    }
}
