#include "CU.h"
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
void CU ::halt(PC &p) {
    p.Set_Zero();
}
pair<char,char> CU::operation(const string &op,ALU &al,Rigister &rig,Memory &mem,PC &p) {
    pair<char, char> sd = {'0',op[1] };
    string q = al.HexTobin(sd);
    int ind3 = al.BintoNum(q);

    pair<char, char> sa = {'0',op[2] };
    string l = al.HexTobin(sa);
    int ind1 = al.BintoNum(l);

    pair<char, char> sb = {'0',op[3] };
    string f = al.HexTobin(sb);
    int ind2 = al.BintoNum(f);

    pair<char, char> mad = {op[2], op[3]};
    string m = al.HexTobin(mad);
    int s = al.BintoNum(m);

    if (op[0] == '1') {
         load_1(ind3, s, rig, mem);
    } else if (op[0] == '2') {
         load_2(ind3, {op[2],op[3]}, rig);
    } else if (op[0] == '3') {
         store(ind3, s, rig, mem);
    } else if (op[0] == '4') {
         move(ind1, ind2, rig);
    }
    else if (op[0] == '5') {
        al.add_complement(ind1,ind2, ind3, rig);
    }
    else if (op[0] == '6') {
        al.add_flowting(ind1,ind2, ind3, rig);
    }
    else if (op[0] == '7') {
        al.BitOr(ind1,ind2, ind3, rig);
    }
    else if (op[0] == '8') {
        al.BitAnd(ind1,ind2, ind3, rig);
    }
    else if (op[0] == '9') {
        al.BitXor(ind1,ind2, ind3, rig);
    }
    else if (op[0] == 'A') {
       al.Rotate(ind3,ind2,rig);
    }
    else if (op[0]=='B'){
        if (al.EqualTo(ind3,rig)){
            p.set_count(s);
        }
        else{
            p.next_count();
        }
    }
    else if (op[0]=='D'){
        if (al.Greater(ind3,rig)){
           p.set_count(s);
        }
        else{
            p.next_count();
        }
    }
    else if (op[0]=='C'){
        halt(p);
    }
    return {'0','0'};
}