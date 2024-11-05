#ifndef TASKS_RIGISTER_H
#define TASKS_RIGISTER_H
#pragma once
#include <vector>
#include <iostream>
using namespace std;
class Rigister {
   vector <pair<char,char>>memory;
   static const int size = 16;
public:
    Rigister();
    pair<char,char> set_value(int address, pair<char,char> value1);
    pair<char, char> get_value(int address);
    void reset_memory();
    void display_value();
};

#endif
