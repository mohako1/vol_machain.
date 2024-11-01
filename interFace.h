#include <iostream>
#include <string>
#include "MainMachine.h"

#ifndef INTERFACE_H
#define INTERFACE_H
class InterFace {
    string name;
    char choice ;
    MainMachine machine ;
public:
    void displayMenu();
};

#endif //INTERFACE_H
