#ifndef MAINMACHINE_H
#define MAINMACHINE_H
#include "CUP.h"
#include <fstream>

class MainMachine {
    CUP cpu;
    Memory m;
    fstream file;
    string fileName;
public:
    void dataDisplay();
    void dataReset();
    void getFileName(string Name);
    void fileLoad();
    void execute();
};



#endif 
