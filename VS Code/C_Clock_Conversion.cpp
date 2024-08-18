#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
///#define int long long int

void solve() {
    string s;
    cin>>s;
    string h = s.substr(0,2);
    string mm = s.substr(3,2);
    int hh = stoi(h);
//    cout<<hh<<endl;
//    cout<<hh<<" "<<mm<<endl;
    if(hh == 12) {
        cout<<s<<" PM"<<endl;
        return;
    }
    if(hh == 0) {
        cout<<"12"<<":"<<mm<<" AM"<<endl;
        return;
    }
    if(hh > 11) {
        if(hh < 22)cout<<"0"<<hh-12<<":"<<mm<<" PM"<<endl;
        else cout<<hh-12<<":"<<mm<<" PM"<<endl;
    } else {
        if(!hh)cout<<"00"<<":"<<mm<<" AM"<<endl;
        else cout<<s<<" AM"<<endl;
    }
}
signed main() {
    RASHED
    int TC;
    cin>>TC;
    while(TC--)solve();
    return 0;
}
/**
CASES:

*/

