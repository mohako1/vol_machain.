#include <filesystem>
#include <iostream>
#include <vector>

#include "ALU.h"
#include "ALU.cpp"
using namespace std ;

int main(){
    ALU n  ;
    float numer = n.FBintoNum("1100" , 1) ;
    cout << numer ;
}
