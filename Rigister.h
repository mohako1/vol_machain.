#ifndef TASKS_RIGISTER_H
#define TASKS_RIGISTER_H
#pragma once
#include "map"
using namespace std;
class Rigister {
    map<char,int>memory;
    int size = 16;
public:
    Rigister();
    void set_value(int key,char value);
    char get_value(int key);
};


#endif
