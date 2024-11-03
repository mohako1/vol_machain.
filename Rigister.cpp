#include "Rigister.h"

Rigister::Rigister() : memory(size, {'0', '0'}) {}

pair<char,char> Rigister::set_value(int address,pair<char,char> value1) {
    pair<char,char> result =  memory [address] = value1;
    return result;
    }
pair<char, char> Rigister :: get_value(int address){
            return memory[address];
    }
    void Rigister :: display_value() {
        for (int i = 0; i < size; i++) {
            cout << memory[i].first<<memory[i].second<<'\n';
        }
}

void Rigister ::reset_memory() {
    for (int i = 0; i < size; i++) {
        memory[i]={'0','0'};
    }
}




