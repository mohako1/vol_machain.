#include <iostream>
#include "MainMachine.h"

#ifndef INTERFACE_H
#define INTERFACE_H
class InterFace {
    string name;
    int choice ;
    MainMachine machine ;
public:
    void displayMenu();
};

#endif
