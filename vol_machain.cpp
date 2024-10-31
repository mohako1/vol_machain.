#include <filesystem>
#include "iostream"
#include <vector>
using namespace std ;
class BUS;
class Memory;
class Rigister;

class Memory{
public:
vector<string>memory;
    BUS* bus;
    const int size = 256;
    Memory() : bus(nullptr) ,memory(size, "00") {}

void set_memory_value(int address, const string& value ){
    if (address >=0 && address<size){
        memory[address] = value;
    }
}
   string get_memory_value(int address) {
        if (address >= 0 && address < size) {
            return memory[address];
        }
    }
    void display_memory() {
        for (int i = 0; i < size; ++i) {
            cout << memory[i] << '\n';
        }
    }
};
class Rigister{
public:
    vector<string>rmemory;
    BUS* bus;
    const int size1 = 16;
    Rigister()  : bus(nullptr) ,rmemory(size1, "00") {}


    void set_rigiter_value(int address,const string& value ){
        if (address >=0 && address<size1){
            rmemory[address]=value;
        }
        else{
            cout << "incrrect address"<<'\n'
                }
    }
    string get_rigiter_value(int address) {
        if (address >= 0 && address < size1) {
            return rmemory[address];
        }
        else{
            return "";
                }
    }
    void display_rigiter() const {
        for (int i = 0; i < size1; ++i) {
            cout << rmemory[i] << '\n';
        }
    }
};
int main(){

    return 0 ;
}
