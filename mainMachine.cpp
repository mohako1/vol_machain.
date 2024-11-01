#include "mainMachine.h"

void mainMachine::dataDisplay() {
    b.memoryDataDisplay();
    b.rigisterDataDisplay();
}
void mainMachine::dataReset() {
    b.memoryReset();
    b.rigisterReset();
}
