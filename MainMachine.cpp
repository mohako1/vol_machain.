using namespace std;
#include "MainMachine.h"

void MainMachine::dataDisplay() {
    m.display_value();
}
void MainMachine::dataReset() {
    m.reset_memory();
}
void MainMachine::getFileName(string Name) {
    fileName = Name;
}
void MainMachine::fileLoad() {
    file.open(fileName);
    string s;
    int address = 0;
    while (getline(file, s, ' ')) {
        if (s.size() == 4) {
            for (int i = 0; i < s.size(); i++) {
                if (s[i] >= '0' && s[i] <= '9'|| toupper(s[i]) == ('A','B','C','D','E','F')) {
                    pair<char, char> value1 = { toupper(s[0]), toupper(s[1]) };
                    m.set_value(address, value1);
                    address++;
                    pair<char, char> value2 = { toupper(s[2]), toupper(s[3]) };
                    m.set_value(address, value2);
                    address++;
                } else {
                    cout << "invalid value at address" << address << endl;
                }
            }
        }else {
                cout << "Incorrect data format at address " << address << endl;
        }
    }
}

