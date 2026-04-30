#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
void solve() {
 
}
signed main() {
    RASHED
    string s,t="";
    cin>>s;
    vector<string> v;
    int n = s.size(),i = 0;
    while(i<n) {
        string chk = s.substr(i,3);
        if (chk == "WUB") {
            v.push_back(t);
            t = "";
            i+=3;
        } else {
            t+=s[i];
            i++;
        }
    }
    v.push_back(t);
    for(int i=0; i<v.size(); i++) {
        if(v[i] != "")cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
 