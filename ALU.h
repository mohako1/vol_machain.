#ifndef VOL_ASSIGNMNT_ALU_H
#define VOL_ASSIGNMNT_ALU_H
#include "Rigister.h"
class ALU {
public:
    void add_complement(int ind1 , int ind2 , int ind3 , Rigister &Rig);
    void add_flowting(int ind1 , int ind2 , int ind3 , Rigister &Rig);
    void BitOr(int ind1 , int ind2 , int ind3 , Rigister &Rig);
    void BitAnd(int ind1 , int ind2 , int ind3 , Rigister &Rig);
    void BitXor(int ind1 , int ind2 , int ind3 , Rigister &Rig);
    void Rotate(int ind1 ,int Steps , Rigister &Rig);
    bool Greater(int ind1 , Rigister &Rig);
    bool EqualTo(int ind1 , Rigister &Rig);
    string HexTobin(pair<char , char> hexa) ;
    pair<char,char> BintoHex(string num) ;
    int BintoNum(string num) ;
    string NumtoBin(float num) ;
    float FBintoNum(string num , int Exp) ;


};


#endif