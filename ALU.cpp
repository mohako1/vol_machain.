#include "ALU.h"
#include <math.h>
void ALU:: add_complement(int ind1 , int ind2 , int ind3 , Rigister &Rig){
    string stNum = HexTobin(Rig.get_value(ind1));
    string ndNum = HexTobin(Rig.get_value(ind2));
    string res ;
    char carry = '0' ;
    for(int i = 7 ; i >= 0 ; i--){
        if((stNum[i] == '1' && ndNum[i] == '0' && carry == '0') || (stNum[i] == '0' && ndNum[i] == '1' && carry == '0') || (stNum[i] == '0' && ndNum[i] == '0' && carry == '1')){
            carry = '0' ;
            res += '1' ;
        }
        else if(stNum[i] == '0' && ndNum[i] == '0' && carry == '0'){
            carry = '0' ;
            res += '0' ;
        }else{
            if(carry == '0'){
                carry = '1' ;
                res += '0' ;
            }else{
                carry = '1' ;
                res += '1' ;
            }
        }
    }
    pair<char,char> FinalRes = BintoHex(res) ;
    Rig.set_value(ind3 , FinalRes) ;
}
void ALU::add_flowting(int ind1 , int ind2 , int ind3 , Rigister &Rig){

}
void ALU::BitOr(int ind1 , int ind2 , int ind3 , Rigister &Rig){
    string stNum = HexTobin(Rig.get_value(ind1));
    string ndNum = HexTobin(Rig.get_value(ind2));
    string res ;
    for(int i = 0 ; i < 8 ; i++){
        if(stNum[i] == '1' || ndNum[i] == '1' ) res += '1' ;
        else res += '0' ;
    }
    pair<char,char> FinalRes = BintoHex(res) ;
    Rig.set_value(ind3 , FinalRes) ;
}
void ALU::BitAnd(int ind1 , int ind2 , int ind3 , Rigister & Rig){
    string stNum = HexTobin(Rig.get_value(ind1));
    string ndNum = HexTobin(Rig.get_value(ind2));
    string res ;
    for(int i = 0 ; i < 8 ; i++){
        if(stNum[i] == '1' && ndNum[i] == '1' ) res += '1' ;
        else res += '0' ;
    }
    pair<char,char> FinalRes = BintoHex(res) ;
    Rig.set_value(ind3 , FinalRes) ;
}
void ALU::BitXor(int ind1 , int ind2 , int ind3 , Rigister & Rig){
    string stNum = HexTobin(Rig.get_value(ind1));
    string ndNum = HexTobin(Rig.get_value(ind2));
    string res ;
    for(int i = 0 ; i < 8 ; i++){
        if(stNum[i] == '1' && ndNum[i] == '0' ) res += '1' ;
        else if (stNum[i] == '0' && ndNum[i] == 'i') res += '1' ;
        else res += '0' ;
    }
    pair<char,char> FinalRes = BintoHex(res) ;
    Rig.set_value(ind3 , FinalRes) ;
}
void ALU::Rotate(int ind1 ,int Steps , Rigister & Rig){
    pair<char,char> FinalRes ;
    if(Steps % 2 == 1 ){
        FinalRes.first = Rig.get_value(ind1).second ;
        FinalRes.second = Rig.get_value(ind1).first ;
    }else{
        FinalRes.first = Rig.get_value(ind1).first ;
        FinalRes.second = Rig.get_value(ind1).second ;
    }
    Rig.set_value(ind1 , FinalRes) ;
}
bool ALU::Greater(int ind1 , Rigister & Rig){
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
bool ALU::EqualTo(int ind1 , Rigister & Rig){
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
    pair<char,char> hexa ;
    string stPair = num.substr(0,4) ;
    string ndPair = num.substr(4,4) ;
    if(stPair == "0000" ) hexa.first = '0' ;
    else if (stPair == "0001" ) hexa.first = '1' ;
    else if (stPair == "0010" ) hexa.first = '2' ;
    else if (stPair == "0011" ) hexa.first = '3' ;
    else if (stPair == "0100" ) hexa.first = '4' ;
    else if (stPair == "0101" ) hexa.first = '5' ;
    else if (stPair == "0110" ) hexa.first = '6' ;
    else if (stPair == "0111" ) hexa.first = '7' ;
    else if (stPair == "1000" ) hexa.first = '8' ;
    else if (stPair == "1001" ) hexa.first = '9' ;
    else if (stPair == "1010" ) hexa.first = 'A' ;
    else if (stPair == "1011" ) hexa.first = 'B' ;
    else if (stPair == "1100" ) hexa.first = 'C' ;
    else if (stPair == "1101" ) hexa.first = 'D' ;
    else if (stPair == "1110" ) hexa.first = 'E' ;
    else hexa.first = 'F' ;
    if(ndPair == "0000" ) hexa.second = '0' ;
    else if (ndPair == "0001" ) hexa.second = '1' ;
    else if (ndPair == "0010" ) hexa.second = '2' ;
    else if (ndPair == "0011" ) hexa.second = '3' ;
    else if (ndPair == "0100" ) hexa.second = '4' ;
    else if (ndPair == "0101" ) hexa.second = '5' ;
    else if (ndPair == "0110" ) hexa.second = '6' ;
    else if (ndPair == "0111" ) hexa.second = '7' ;
    else if (ndPair == "1000" ) hexa.second = '8' ;
    else if (ndPair == "1001" ) hexa.second = '9' ;
    else if (ndPair == "1010" ) hexa.second = 'A' ;
    else if (ndPair == "1011" ) hexa.second = 'B' ;
    else if (ndPair == "1100" ) hexa.second = 'C' ;
    else if (ndPair == "1101" ) hexa.second = 'D' ;
    else if (ndPair == "1110" ) hexa.second = 'E' ;
    else hexa.second = 'F' ;
    return hexa ;
}
int ALU::BintoNum(string num){
    int number ;
    for(int i = num.size()-1 ; i >= 0 ; i--){
        number += ((int(num[i])-48) * pow(2,num.size()-1 - i ));
    }
    return number ;
}
string ALU::NumtoBin(float num){

}
float ALU :: FBintoNum(string num ){

}