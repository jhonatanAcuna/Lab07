//
// Created by jacun on 23/06/2020.
//
#include "Ejercicio1.h"
double Ejercicio1::Division(double divisor, double dividendo) {
    double rpta;
    if(divisor==0){
        return -1;
    }else{
        rpta =dividendo/divisor;
        return rpta;
    }
}