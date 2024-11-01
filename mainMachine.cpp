using namespace std;
#include "mainMachine.h"

void mainMachine::dataDisplay() {
    m.display_value();
    r.display_value();

}
void mainMachine::dataReset() {
    m.reset_memory();
    r.reset_memory();
}
void mainMachine::getFileNmae(string Name) {
    fileName = Name;
}
void mainMachine::dataRead() {
    file.open(fileName);
    string s;
    int address = 0;
    while (getline(file, s)) {
        while (!s.empty() && s.size() >= 2) {
            std::pair<char, char> value1 = { s[0], s[1] };
            m.set_value(address, value1);
            address++;
            s.erase(0, 2);
        }
    }

}

