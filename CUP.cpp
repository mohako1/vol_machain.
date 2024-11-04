//
// Created by LOQ on 11/2/2024.
//

#include <iostream>
#include "CUP.h"
#include "Memory.h"
#include "Rigister.h"
#include "PC.h"
#include "CU.h"
#include "ALU.h"
#include <string>
Rigister Rig ;
PC counter ;
ALU alu ;
CU control ;
string IR;
using namespace std ;
void CUP::exution(Memory & meo) {
    for(counter ; counter.git_value() < 256;  ) {
        IR = "" ;
        pair<char, char> instrct1 = meo.get_value(counter.git_value());
        pair<char, char> instrct2 = meo.get_value(counter.git_value() + 1);
        IR.push_back(instrct1.first);
        IR.push_back(instrct1.second);
        IR.push_back(instrct2.first);
        IR.push_back(instrct2.second);
        control.operation(IR, alu, Rig, meo, counter);
        counter.next_count() ;
    }
}
void CUP::display() {
    counter.display_value() ;
    Rig.display_value() ;
    cout << IR ;
}