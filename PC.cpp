#include "PC.h"
#include <iostream>


 PC :: PC(): counter(0) {}
 void PC::next_count() {
    counter++ ;
}
void PC::Set_Zero() {
    counter = 0 ;
}
void PC::display_value(){
    cout << counter ;
}