#include "CUP.h"
Rigister Rig ;
PC counter ;
ALU alu ;
CU control ;
string IR="";
using namespace std ;
void CUP::exution(Memory &meo) {
    int count = 1;
    for (; count < 256; ) {

        pair<char, char> instrct1 = meo.get_value(counter.git_value() - 1);
        pair<char, char> instrct2 = meo.get_value(counter.git_value() );
        IR.push_back(instrct1.first);
        IR.push_back(instrct1.second);
        IR.push_back(instrct2.first);
        IR.push_back(instrct2.second);
//       1 C:\Users\LENOVO\Downloads\test\test.txt 2

        control.operation(IR, alu, Rig, meo, counter);
         counter.next_count();
        count = counter.git_value();

        IR.clear();

    }
}

void CUP::display() {
    Rig.display_value() ;

}