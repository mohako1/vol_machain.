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
    while (getline(file, s, ' ')) {
        if (s.size() == 4) {
            pair<char, char> value1 = { s[0], s[1] };
            m.set_value(address, value1);
            address++;
            
            pair<char, char> value2 = { s[2], s[3] };
            m.set_value(address, value2);
            address++;
        } else {
            cout << "Warning: Incorrect data format at address " << address << endl;
        }
    }

}

