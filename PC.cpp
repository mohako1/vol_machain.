#include "PC.h"
#include <iostream>

using namespace std;
 PC :: PC(): counter(1) {}
 void PC::next_count() {
    counter += 2 ;
}
void PC::Set_Zero() {
    counter = 1 ;
}
void PC::display_value(){
    cout << counter <<'\n' ;
}
void PC::set_count(int jump) {
    counter = jump ;
}
int PC::git_value() {
    return counter ;
 }