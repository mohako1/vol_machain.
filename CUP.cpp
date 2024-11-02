//
// Created by LOQ on 11/2/2024.
//


#include "CUP.h"
#include <Memory.h>
#include <Memory.cpp>
#include <Rigister.h>
#include <Rigister.cpp>
#include <PC.h>
#include <PC.cpp>
#include <CU.h>
#include <CU.cpp>
#include <ALU.h>
#include <ALU.cpp>
#include <string>
Rigister Rig ;
PC counter ;
ALU alu ;
CU control ;
void exution(Memory & meo) {
    string instruction =
    control.operation();
}