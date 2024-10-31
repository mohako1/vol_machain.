#include <filesystem>
#include <iostream>
#include <vector>
#include "Rigister.h"
#include "Rigister.cpp"
#include "PC.h"
#include "PC.cpp"
using namespace std ;

int main(){
    Rigister rig ;
    //rig.display_value() ;
    PC c ;
    c.next_count();
    c.display_value();
    return 0 ;
}
