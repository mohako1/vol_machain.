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
    Rig.set_value(2 , {'1','2'}) ;
    Rig.set_value(3 , {'6' , '6'}) ;
    //n.add_flowting(2,3,4, Rig) ;
    n.Rotate(2,2,Rig) ;
    Rig.display_value() ;
    string s = n.HexTobin(Rig.get_value(2)) ;
    string x = n.HexTobin(Rig.get_value(3)) ;
    cout << s << '\n' << x ;
}
