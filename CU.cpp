#include "CU.h"
void CU :: load_1(int Raddress, int Maddress,Rigister &rig,Memory &mem) {
    pair<char,char>value = mem.get_value(Maddress);
    rig.set_value(Raddress,value);
}
void CU :: load_2(int Raddress,pair<char, char>xy,Rigister &rig) {
    pair<char,char>value = xy;
    rig.set_value(Raddress,value);
}
void CU ::store(int Raddress, int Maddress,Rigister &rig,Memory &mem) {
    pair<char,char>value = rig.get_value(Raddress);
    if (Maddress == 0) {
        mem.set_value(0, value);
    }
    else{
        mem.set_value(Maddress,value);
    }
}
void CU::move(int Raddress, int raddress,Rigister &rig) {
    pair<char,char>value = rig.get_value(Raddress);
    rig.set_value(raddress,value);
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
void CU::operation(const string &op,ALU &al,Rigister &rig,Memory &mem,PC &p) {
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
         load_1(rad, s, rig, mem);
    } else if (op[0] == '2') {
         load_2(rad, {op[2],op[3]}, rig);
    } else if (op[0] == '3') {
         store(rad, s, rig, mem);
    } else if (op[0] == '4') {
         move(rad1, rad3, rig);
    }
    else if (op[0] == '5') {
        al.add_complement(rad3,rad1, rad, rig);
    }
    else if (op[0] == '6') {
        al.add_flowting(rad,rad1, rad3, rig);
    }
    else if (op[0] == '7') {
        al.BitOr(rad,rad1, rad3, rig);
    }
    else if (op[0] == '8') {
        al.BitAnd(rad,rad1, rad3, rig);
    }
    else if (op[0] == '9') {
        al.BitXor(rad,rad1, rad3, rig);
    }
    else if (op[0] == 'A') {
       al.Rotate(rad1,rad3,rig);
    }
    else if (op[0]=='B'){
        jump(rad,s,rig,p);
    }
    else if (op[0]=='C'){
        halt(p);
    }
}
