#include "PC.h"
#include <iostream>


 PC :: PC(): counter(1) {}
 void PC::next_count() {
    counter += 2 ;
}
void PC::Set_Zero() {
    counter = 1 ;
}
void PC::display_value(){
    cout << counter ;
}
void PC::set_count(int jump) {
    counter = jump ;
}