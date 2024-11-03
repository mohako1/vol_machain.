#ifndef TASKS_MEMORY_H
#define TASKS_MEMORY_H
#pragma once
#include <vector>
#include <iostream>
using namespace std;
class Memory {
    vector <pair<char,char>>memory;
    static const int size = 256;
public:
    Memory();
    pair<char,char> set_value(int address, pair<char,char> value1);
    pair<char, char> get_value(int address);
    void reset_memory();
    void display_value();
};


#endif
