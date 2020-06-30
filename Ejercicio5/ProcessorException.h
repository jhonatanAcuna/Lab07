//
// Created by jacun on 30/06/2020.
//

#ifndef EJERCICIO5_PROCESSOREXCEPTION_H
#define EJERCICIO5_PROCESSOREXCEPTION_H

#include "ComputerException.h"
class ProcessorException: public ComputerException {
public:
    string getMessage();
};


#endif //EJERCICIO5_PROCESSOREXCEPTION_H
