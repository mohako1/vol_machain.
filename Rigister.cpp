#include "Rigister.h"
#include <vector>
#include <iostream>
Rigister :: Rigister() :memory(size, {'0', '0'}) {}

     void Rigister::set_value( int key,pair<char,char> value) {
         memory[key] = value ;
     }
    pair<char,char> Rigister :: get_value(int key){
    return memory[key];
    }
    void Rigister :: display_value() {
        for (int i = 0; i < size; i++) {
            cout << memory[i].first<< ' ' <<memory[i].second<<'\n';
        }
    }
void Rigister ::reset_memory() {
    for (int i = 0; i < size; i++) {
        memory[i]={'0','0'};
    }
}
