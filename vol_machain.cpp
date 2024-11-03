#include <filesystem>
#include <iostream>
#include <vector>
#include <string>

#include "ALU.h"
#include "Rigister.h"
#include "ALU.cpp"

using namespace std ;

int main(){
    Rigister Rig ;
    ALU n  ;
    Rig.set_value(2 , {'3','2'}) ;
    Rig.set_value(3 , {'0' , '6'}) ;
    n.add_complement(2,3,4, Rig) ;
    Rig.display_value() ;
    string s = n.HexTobin({'3','2'}) ;
    string x = n.HexTobin({'0','6'}) ;
    cout << s << '\n' << x ;
}
