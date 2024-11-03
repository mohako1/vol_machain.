
#ifndef BUS_H
#define BUS_H

#include <iostream>
#include "Rigister.h"
#include "Memory.h"


class BUS {
    Memory m;
    Rigister r;
public:
    void memoryDataDisplay();
    void memoryReset();
    void memoryDataSet();
    void rigisterDataDisplay();
    void rigisterReset();
    void rigisterDataSet();

};


#endif
