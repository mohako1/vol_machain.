#ifndef CUP_H
#define CUP_H
#include "Memory.h"
#include "PC.h"
#include "ALU.h"
#include "CU.h"
#include "Rigister.h"
#include <string>
class CUP {
    Rigister Rig ;
    PC counter ;
    ALU alu ;
    CU control ;
    string IR="";
public:
    void exution(Memory & Meo) ;
    void display();
    void run_next_step(Memory & Meo);
};


#endif
