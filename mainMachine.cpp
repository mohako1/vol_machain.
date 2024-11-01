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
            for (int i = 0; i < s.size(); i++) {
                if (s[i] >= '0' && s[i] <= '9'|| toupper(s[i]) == ('A','B','C','D','E','F')) {
                    pair<char, char> value1 = { s[0], s[1] };
                    m.set_value(address, value1);
                    address++;
                    pair<char, char> value2 = { s[2], s[3] };
                    m.set_value(address, value2);
                    address++;
                } else {
                    cout << "invalid value at address" << address << endl;
                }
            }
        }else {
                cout << "Warning: Incorrect data format at address " << address << endl;
        }
    }
}

