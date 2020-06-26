//
// Created by jacun on 24/06/2020.
//
#include <iostream>
#include <exception>
#include "Ejercicio3.h"
using namespace std;
void Ejercicio3::ingresarValor() {
    string num;
    cout << "Ingrese un numero cualquiera"<<endl;
    getline(cin,num);
    try{
        if(!isdigit(num[0])){
            throw 0;
        }
        cout << "El numero es : "<<num<<endl;
    } catch (int error) {
        if(error==0) {
            cout << "No se aceptan letras" << endl;
        }
    }
}
void Ejercicio3::errorMemoria() {
    int *a;
    int b=10000000000;
    try {
        a = new int[b];
        cout<< a<<endl;
    } catch (bad_alloc) {
        cout<< "Memoria insuficiente"<<endl;
    }
}