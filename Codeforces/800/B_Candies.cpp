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
map<int,int> f;
void build(int n){
    for(int i=2;i<=n;i*=2)f[i]++;
}
void solve(int tc) {
    int n;cin>>n;
    if(n%2 == 0){
        cout<<"-1"<<endl;
        return;
    }
    vector<int> res;
    while(n>1){
        int op1 = (n+1)/2,op2 = (n-1)/2;
        if(op1%2){
            res.push_back(1);
            n = op1;
        }else if(op2%2){
            res.push_back(2);
            n = op2;
        }
    }
    reverse(res.begin(),res.end());
    cout<<res.size()<<endl;
    for(auto i:res)cout<<i<<" ";
    cout<<endl;
}
signed main() {
    RASHED
    build(1e9+2);
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/