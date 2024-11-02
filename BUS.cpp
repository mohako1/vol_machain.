// Bus.cpp
#include "BUS.h"


void BUS::memoryDataDisplay() {
    m.display_value();
}
void BUS::memoryReset() {
    m.reset_memory();
}
void BUS::memoryDataSet() {
    string x;

    m.set_value();
}

void BUS::rigisterDataDisplay() {
    r.display_value();
}
void BUS::rigisterReset() {
    r.reset_memory();
}
void BUS::rigisterDataSet() {
    r.set_value();
}



