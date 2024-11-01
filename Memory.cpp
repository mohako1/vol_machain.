#include "Memory.h"
Memory::Memory() : memory(size, {'0', '0'}) {}

void Memory::set_value(int address,pair<char,char> value1) {
    memory [address] = value1;
}
pair<char, char> Memory :: get_value(int address){
    return memory[address];
}
void Memory :: display_value() {
    for (int i = 0; i < size; i++) {
        cout << memory[i].first<<memory[i].second<<'\n';
    }
}
void Memory ::reset_memory() {
    for (int i = 0; i < size; i++) {
        memory[i]={'0','0'};
    }
}