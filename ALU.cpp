#include "ALU.h"

void ALU:: add_complement(int ind1 , int ind2 , int ind3 , Rigister Rig){

}
void ALU::add_flowting(int ind1 , int ind2 , int ind3 , Rigister Rig){

}
void ALU::BitOr(int ind1 , int ind2 , int ind3 , Rigister Rig){
    string stNum = HexTobin(Rig.get_value(ind1));
    string ndNum = HexTobin(Rig.get_value(ind2));
    string res ;
    for(int i = 0 ; i < 8 ; i++){
        if(stNum[i] == '1' || ndNum[i] == '1' ) res += '1' ;
        else res += '0' ;
    }
    pair<char,char> FinalRes = BintoHex(res) ;
    // here i should pass the number of the rigister i want to save the result in
}
void ALU::BitAnd(int ind1 , int ind2 , int ind3 , Rigister Rig){
    string stNum = HexTobin(Rig.get_value(ind1));
    string ndNum = HexTobin(Rig.get_value(ind2));
    string res ;
    for(int i = 0 ; i < 8 ; i++){
        if(stNum[i] == '1' && ndNum[i] == '1' ) res += '1' ;
        else res += '0' ;
    }
    pair<char,char> FinalRes = BintoHex(res) ;
    // here i should pass the number of the rigister i want to save the result in
}
void ALU::BitXor(int ind1 , int ind2 , int ind3 , Rigister Rig){
    string stNum = HexTobin(Rig.get_value(ind1));
    string ndNum = HexTobin(Rig.get_value(ind2));
    string res ;
    for(int i = 0 ; i < 8 ; i++){
        if(stNum[i] == '1' && ndNum[i] == '0' ) res += '1' ;
        else if (stNum[i] == '0' && ndNum[i] == 'i') res += '1' ;
        else res += '0' ;
    }
    pair<char,char> FinalRes = BintoHex(res) ;
    // here i should pass the number of the rigister i want to save the result in
}
void ALU::Rotate(int ind1 ,int Steps , Rigister Rig){
    pair<char,char> FinalRes ;
    if(Steps % 2 == 1 ){
        FinalRes.first = Rig.get_value(ind1).second ;
        FinalRes.second = Rig.get_value(ind1).first ;
    }else{
        FinalRes.first = Rig.get_value(ind1).first ;
        FinalRes.second = Rig.get_value(ind1).second ;
    }
    // here i should pass the number of the rigister i want to save the result in
}
bool ALU::Greater(int ind1 , Rigister Rig){
    pair<char,char> stPair = Rig.get_value(ind1) ;
    pair<char,char> ndPair = Rig.get_value(0) ;
    if(stPair.first > ndPair.first){
        return true ;
    }else{
        if(stPair.second > ndPair.second){
            return true ;
        }else{
            return false ;
        }
    }
}
bool ALU::EqualTo(int ind1 , Rigister Rig){
    pair<char,char> stPair = Rig.get_value(ind1) ;
    pair<char,char> ndPair = Rig.get_value(0) ;
    if(stPair.first == ndPair.first && stPair.second == ndPair.second){
        return true ;
    }else{
        return false ;
    }
}
string ALU::HexTobin(pair<char , char> hexa){
    string bin = "" ;
    switch (hexa.first) {
        case('0') : bin += "0000" ;
        case('1') : bin += "0001" ;
        case('2') : bin += "0010" ;
        case('3') : bin += "0011" ;
        case('4') : bin += "0100" ;
        case('5') : bin += "0101" ;
        case('6') : bin += "0110" ;
        case('7') : bin += "0111" ;
        case('8') : bin += "1000" ;
        case('9') : bin += "1001" ;
        case('A') : bin += "1010" ;
        case('B') : bin += "1011" ;
        case('C') : bin += "1100" ;
        case('D') : bin += "1101" ;
        case('E') : bin += "1110" ;
        default:  bin += "1111" ;
        break ;
    }
    switch (hexa.second) {
        case('0') : bin += "0000" ;
        case('1') : bin += "0001" ;
        case('2') : bin += "0010" ;
        case('3') : bin += "0011" ;
        case('4') : bin += "0100" ;
        case('5') : bin += "0101" ;
        case('6') : bin += "0110" ;
        case('7') : bin += "0111" ;
        case('8') : bin += "1000" ;
        case('9') : bin += "1001" ;
        case('A') : bin += "1010" ;
        case('B') : bin += "1011" ;
        case('C') : bin += "1100" ;
        case('D') : bin += "1101" ;
        case('E') : bin += "1110" ;
        default:  bin += "1111" ;
            break ;
    }
    return bin ;
}
pair<char,char> ALU:: BintoHex(string num){

}
float ALU::BintoNum(string num){

}
string ALU::NumtoBin(float num){

}