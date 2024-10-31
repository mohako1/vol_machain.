#include "Rigister.h"
#include "iostream"
Rigister::Rigister() {
    for(int i=0;i<size;i++){
        memory['0']=i;
    }
}
     void Rigister::set_value( int key,char value) {
         if (key >=0 && key < size){
             memory[key]=value;
         }
         else
             cout<<"incorrect address"<<'\n';
    }
    char Rigister :: get_value(int key){
        if (key >=0 && key < size){
            return memory[key];
        }
        else
            return ' ';
    }




