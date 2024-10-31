#ifndef TASKS_RIGISTER_H
#define TASKS_RIGISTER_H
#pragma once
#include <vector>
using namespace std;
class Rigister{
    static const int size = 16;
    vector<pair<char,char>> memory ;
public:
    Rigister();
    void set_value(int key,pair<char,char> value);
    pair<char,char> get_value(int key);
    void reset_memory();
    void display_value();
};


#endif
