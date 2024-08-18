#include<bits/stdc++.h>
using namespace std;


class Overload {
  private :
    string fst,snd;
    Overload(string s,string t) {
        fst = s;
        snd = t;
    }
    Overload operator+-(const Overload& other)const {
        string res;
        res = fst+other.fst;
        res += snd+other.snd;
        return res;
    }
};

int main() {
    Overload one("Ras","hed");
    Overload two("Hos","sain");
    string result = one+-two;
    cout<<result<<endl;
    return 0;
}
