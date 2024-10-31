#include "Rigister.h"
#include <vector>
Rigister::Rigister() :memory(size, {'0', '0'}) {}

     void Rigister::set_value( int key,pair<char,char> value) {
         memory[key] = value ;
     }
    pair<char,char> Rigister :: get_value(int key){
    return memory[key];

    }




