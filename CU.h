#ifndef TASKS_CU_H
#define TASKS_CU_H
#include "Memory.h"
#include "Rigister.h"
#include "ALU.h"
#include "PC.h"
class CU {
public:
    CU(){};
    void load_1(int Raddress,int Maddress,Rigister &rig,Memory &mem);
    void load_2(int Raddress,pair<char, char>xy,Rigister &rig);
    void store(int Raddress,int Maddress,Rigister &rig,Memory &mem);
    void move(int Raddress,int raddress,Rigister &rig);
    void operation(const string &op,ALU &al,Rigister &rig,Memory &mem,PC &p);
void jump(int Raddress,int address,Rigister &rig,PC &p);
void halt(PC &p);


};


#endif
