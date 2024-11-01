
#ifndef BUS_H
#define BUS_H

#include <iostream>

#include "Rigister.h"
#include "Rigister.cpp"
#include "Memory.h"

#include "Memory.cpp"

class BUS {
    Memory m;
    Rigister r;
public:
    void memoryDataDisplay();
    void memoryReset();
    void rigisterDataDisplay();
    void rigisterReset();
};


#endif
