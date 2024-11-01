#ifndef VOL_ASSIGNMNT_ALU_H
#define VOL_ASSIGNMNT_ALU_H

#include "Rigister.h"
#include "Rigister.cpp"


class ALU {
public:
    pair<char,char> add_complement(int ind1 , int ind2 , int ind3 , Rigister &Rig);
    pair<char,char> add_flowting(int ind1 , int ind2 , int ind3 , Rigister &Rig);
    pair<char,char> BitOr(int ind1 , int ind2 , int ind3 , Rigister &Rig);
    pair<char,char> BitAnd(int ind1 , int ind2 , int ind3 , Rigister &Rig);
    pair<char,char> BitXor(int ind1 , int ind2 , int ind3 , Rigister &Rig);
    pair<char,char> Rotate(int ind1 ,int Steps , Rigister &Rig);
    bool Greater(int ind1 , Rigister &Rig);
    bool EqualTo(int ind1 , Rigister &Rig);
string HexTobin(pair<char , char> hexa) ;
pair<char,char> BintoHex(string num) ;
int BintoNum(string num) ;
string NumtoBin(float num) ;
float FBintoNum(string num) ;


};


#endif //VOL_ASSIGNMNT_ALU_H
