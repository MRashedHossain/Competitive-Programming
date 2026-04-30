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
    int n;string s;cin>>n>>s;
    string val = "";
    if(s[0] == '9'){
        for(int i=0;i<=n;i++)val+='1';
    }else{
        for(int i=1;i<=n;i++)val+='9';
    }
    stack<int> ss,tt,res;
    for(auto i:s)ss.push(i-'0');
    for(auto i:val)tt.push(i-'0');
    int carry = 0;
    while(!ss.empty() && !tt.empty()){
        int x = tt.top(),y;
        if(ss.empty())y = carry;
        else y = ss.top()+carry;
        carry = 0;
        ss.pop();
        tt.pop();
        if(x<y){
            x+=10;
            res.push(x-y);
            carry = 1;
        }else res.push(x-y);
    }
    while(!res.empty()){
        cout<<res.top();
        res.pop();
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
 
 