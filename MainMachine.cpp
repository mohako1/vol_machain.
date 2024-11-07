using namespace std;
#include "MainMachine.h"
void MainMachine::dataDisplay() {
    cout<<'\n'<<"Memory data"<<'\n';
    m.display_value();
    cout<<'\n'<<"Register data"<<'\n';
    cpu.display();
}
void MainMachine::dataReset() {
    m.reset_memory();
    cout<<"the memory is reset Successfully "<<'\n';
}
void MainMachine::getFileName(string Name) {
    fileName = Name;
}
void MainMachine::fileLoad() {
    file.open(fileName);
    if (file.is_open()) {
        cout << "file opened successfully.\n";
        string s;
        int address = 0;
        while (getline(file, s, ' ')) {
            if (s.size() == 4) {
                bool valid = true;
                for (int i = 0; i < s.size(); i++) {
                    if (!((s[i] >= '0' && s[i] <= '9') || (toupper(s[i]) >= 'A' && toupper(s[i]) <= 'F'))) {
                        cout << "Invalid value at address " << address << endl;
                        valid = false;
                        break;
                    }
                }
                if (valid) {
                    pair<char, char> value1 = {toupper(s[0]), toupper(s[1])};
                    m.set_value(address, value1);
                    address++;
                    pair<char, char> value2 = {toupper(s[2]), toupper(s[3])};
                    m.set_value(address, value2);
                    address++;
                }
            } else {
                cout << "Incorrect data format at address " << address << endl;
            }
        }
        file.close();
    } else {
        cout << "Error opening file\n";
    }
}


void MainMachine::execute() {
    cpu.exution(m);
}

void MainMachine::runNextStep() {
    cpu.run_next_step(m);
}

