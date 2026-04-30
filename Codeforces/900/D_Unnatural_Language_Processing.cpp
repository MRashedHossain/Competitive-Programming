#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
///#define int long long int
 
void solve() {
    int n;string s;
    cin>>n>>s;
    vector<int> v;
    vector<string> vv;
    for(int i=0;i<n;i++){
        if(s[i] == 'a' || s[i] == 'e')v.push_back(i);
    }
    int pnt = 0;
    for(int i=0;i<v.size()-1;i++){
        string p = "";
        int endd = (pnt+(v[i+1]-v[i]));
        for(int j=pnt;j<endd;j++)p+=(s[j]);
        pnt = endd;
        vv.push_back(p);
    }
    string p = "";
    for(int i=pnt;i<n;i++)p+=(s[i]);
    vv.push_back(p);
    for(int i=0;i<vv.size()-1;i++)cout<<vv[i]<<".";
    cout<<vv[vv.size()-1]<<endl;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}
 