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
    set<char> ss;
    for(auto i:s)ss.insert(i);
    if(ss.size() == 1){
        cout<<"NO"<<endl;
        return;
    }
    for(int i=1;i<s.size();i++){
        if(s[i] != s[0]){
            cout<<"YES"<<endl;
            swap(s[i],s[0]);
            cout<<s<<endl;
            return;
        }
    }
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

