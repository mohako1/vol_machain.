#include "interFace.h"

using namespace std;

void InterFace::displayMenu() {
    cout << "\nWelcome to our Vole Machine\n";
    while (true) {
        cout << "Please select what you want to do:\n";
        cout << "1. Load a new file\n";
        cout << "2. Execute instructions\n";
        cout << "3. run next step\n";
        cout << "4. Display memory and register data\n";
        cout << "5. Reset memory to zero\n";
        cout << "6. Exit\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;
        if (cin.fail() || choice < 1 || choice > 5) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Please enter a valid choice (1-5).\n";
        } else {
            cin.ignore();

            if (choice == 1) {
                cout << "Please enter the file name: ";
                cin >> name;
                machine.getFileName(name);
                machine.fileLoad();
            } else if (choice == 2) {
                machine.execute();
                cout << "the execute is done.\n";
            }else if (choice == 3) {
                machine.runNextStep();
            }else if (choice == 4) {
                machine.dataDisplay();
            } else if (choice == 5) {
                machine.dataReset();
            } else if (choice == 6) {
                cout << "Exiting the program. Goodbye!\n";
                _Exit(0);
            }
        }
    }
}
