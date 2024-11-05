#include "Memory.h"
Memory::Memory() : memory(size, {'0', '0'}) {}

pair<char,char> Memory::set_value(int address,pair<char,char> value1) {
    pair<char,char>result = memory [address] = value1;
    return result;
}
pair<char, char> Memory::get_value(int address) {
    if (address < 0 || address >= memory.size()) {
        throw out_of_range("Address out of bounds");
    }
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