#include "CU.h"
Rigister rig;
Memory mem;
ALU al;
PC p;
char z;


pair<char,char> CU :: load_1(int Raddress, int Maddress,Rigister &rig,Memory &mem) {
    pair<char,char>value = mem.get_value(Maddress);
    pair<char,char>result = rig.set_value(Raddress,value);
    return result;
}
pair<char,char> CU :: load_2(int Raddress,pair<char, char>xy,Rigister &rig) {
    pair<char,char>value = xy;
    pair<char,char>result = rig.set_value(Raddress,value);
    return result;
}
pair<char,char> CU ::store(int Raddress, int Maddress,Rigister &rig,Memory &mem) {
    pair<char,char>value = rig.get_value(Raddress);
    if (Maddress == 0) {
        pair<char,char>result =  mem.set_value(0, value);
        return result;
    }
    else{
        pair<char,char>result = mem.set_value(Maddress,value);
        return result;
    }


}
pair<char,char> CU::move(int Raddress, int raddress,Rigister &rig) {
    pair<char,char>value = rig.get_value(Raddress);
    pair<char,char>result = rig.set_value(raddress,value);
    return result;
}
void CU::jump(int Raddress,int address,Rigister &rig,PC &p){
    if (rig.get_value(Raddress)==rig.get_value(0)){
        p.set_count(address);
    }
    else
        p.next_count();
}
void CU ::halt(PC &p) {
    p.Set_Zero();
}
pair<char,char> CU::operation(const string &op,ALU &al,Rigister &rig,Memory &mem,PC &p) {
    pair<char, char> sd = {'0',op[1] };
    string q = al.HexTobin(sd);
    int rad = al.BintoNum(q);

    pair<char, char> sa = {'0',op[2] };
    string l = al.HexTobin(sa);
    int rad1 = al.BintoNum(l);

    pair<char, char> sb = {'0',op[3] };
    string f = al.HexTobin(sb);
    int rad3 = al.BintoNum(f);

    pair<char, char> mad = {op[2], op[3]};
    string m = al.HexTobin(mad);
    int s = al.BintoNum(m);

    if (op[0] == '1') {
        return load_1(rad, s, rig, mem);
    } else if (op[0] == '2') {
        return load_2(rad, {op[2],op[3]}, rig);
    } else if (op[0] == '3') {
        return store(rad, s, rig, mem);
    } else if (op[0] == '4') {
        return move(rad1, rad3, rig);
    }
    else if (op[0]=='B'){
        jump(rad,s,rig,p);
    }
    else if (op[0]=='C'){
        halt(p);
    }
    return {'0','0'};
}