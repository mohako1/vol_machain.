#ifndef MAINMACHINE_H
#define MAINMACHINE_H
#include "BUS.h"
#include <string>
#include <fstream>
#include "Memory.h"
#include "Rigister.h"
#include "Bus.h"
#include "CUP.h"
#include "CUP.cpp"
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
