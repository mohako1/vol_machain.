#ifndef TASKS_CU_H
#define TASKS_CU_H
#include "Memory.h"
#include "ALU.h"
#include "PC.h"
class CU {
public:
    CU();
pair<char,char> load_1(int Raddress,int Maddress,Rigister &rig,Memory &mem);
pair<char,char> load_2(int Raddress,pair<char, char>xy,Rigister &rig);
pair<char,char> store(int Raddress,int Maddress,Rigister &rig,Memory &mem);
pair<char,char> move(int Raddress,int raddress,Rigister &rig);
pair<char,char> operation(const string &op,ALU &al,Rigister &rig,Memory &mem,PC &p);
void halt(PC &p);


};


#endif
