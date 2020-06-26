//
// Created by jacun on 23/06/2020.
//
#include <exception>
#include "Ejercicio2.h"
using namespace std;
double Ejercicio2::Division(double divisor, double dividendo) {
    double rpta;
    try {
        if(divisor==0){
            throw 0;
        }else{
            rpta =dividendo/divisor;

        }

    } catch (int error) {
        if(error==0){
            return -1;
        }

    }
    return rpta;
}