#ifndef MAINMACHINE_H
#define MAINMACHINE_H
#include "BUS.h"
#include "BUS.cpp"


class mainMachine {
public:
    BUS b ;
    void dataDisplay();
    void dataReset();
};



#endif //MAINMACHINE_H
