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
    if(s.size() == 1){
        if(s[0] == '_')cout<<"2"<<endl;
        else cout<<"1"<<endl;
        return;
    }
    if(s.size() == 2){
        if(s == "^^")cout<<"0"<<endl;
        else if(s == "_^" || s == "^_")cout<<"1"<<endl;
        else cout<<"3"<<endl;
        return;
    }
    int res = 0,pre = -10;
    if(s.back() != '^')res++;
    for(int i=0;i<s.size();i++){
        if(s[i] == '^')pre = i;
        else {
            if(pre != i-1){
                res++;
                pre = i-1;
            }
        }
    }
    cout<<res<<endl;
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