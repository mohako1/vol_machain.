#include "interFace.h"

using namespace std;
void InterFace::displayMenu () {
     while (true) {
          cout << "welcome to our vole machine\n";
          cout << "please select what do want to do:-\n";
          cout << "1. load a new file   2. execute      3. display      4. reset to zero    5. exit\n";
          cin >> choice;
          cin.ignore();
          if (choice == 1) {
               cout << "please enter the file name:";
               cin >> name ;
               machine.getFileName(name);
               machine.fileLoad();
          }else if (choice == 2) {
               cout << "the data is being executed\n";
          }else if (choice == 3) {
               machine.dataDisplay();
          }else if (choice == 4) {
               machine.dataReset();
          }else if (choice == 5) {
               _Exit(0);
          }else {
               cout << "please enter a valid choice\n";
          }
     }
}