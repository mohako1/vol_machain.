#include <filesystem>
#include <iostream>
#include <vector>
#include <string>

#include "ALU.h"
#include "Rigister.h"
#include "Rigister.cpp"
#include "ALU.cpp"

using namespace std ;

int main(){
    Rigister Rig ;
    ALU n  ;
//    string c = n.NumtoBin(-0.25) ;
//    cout << c << '\n';
    Rig.set_value(2 , {'4','8'}) ;
    Rig.set_value(3,{'C','C'}) ;
    n.add_flowting(2,3,4,Rig) ;
    Rig.display_value() ;
}
