#ifndef CUP_H
#define CUP_H
#include "Memory.h"
#include "PC.h"
#include "ALU.h"
#include "CU.h"
#include "Rigister.h"
#include <string>
class CUP {
public:
    void exution(Memory & Meo) ;
    void display();
    void run_next_step(Memory & Meo);
};


#endif
