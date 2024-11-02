#ifndef MAINMACHINE_H
#define MAINMACHINE_H
#include "BUS.h"
#include <string>
#include "BUS.cpp"
#include <fstream>
#include "Memory.h"
#include "Rigister.h"
class MainMachine {
    Memory m;
    fstream file;
    string fileName;
public:
    void dataDisplay();
    void dataReset();
    void getFileName(string Name);
    void fileLoad();
};



#endif //MAINMACHINE_H
