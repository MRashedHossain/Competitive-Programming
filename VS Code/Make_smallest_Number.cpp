#include<bits/stdc++.h>
using namespace std;

#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int

#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010

#define F first
#define S second

void solve(int tc) {
    string s;cin>>s;
    int MX = 0;
    map<char,int> f;
    if(s.size() == 1){
        cout<<0<<endl;
        return;
    }
    for(auto i:s){
        if(i-'0' > MX)MX = i-'0';
        f[i]++;
    }
    if(f['0'] == s.size()-1){
        cout<<0<<endl;
        return;
    }
    int rmv = s.size()-1;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]-'0' > s[i+1]-'0' && rmv == s.size()-1)rmv = i;
    }
    for(int i=0;i<s.size();i++){
        if(i == rmv)continue;
        cout<<s[i];
    }
    cout<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:

*/

