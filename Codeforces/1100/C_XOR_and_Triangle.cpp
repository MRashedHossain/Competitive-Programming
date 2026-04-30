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
vector<int> p;
void build(int n){
    int i=2;
    p.push_back(i);
    i*=2;
    while(i<=n){
        p.push_back(i-1);
        p.push_back(i);
        i*=2;
    }
}
int calcu(int n){
    int res = 1;
    for(int i=0;i<n;i++)res *= 2;
    return res;
}
void solve(int tc) {
    int n;cin>>n;
    for(auto i:p){
        if(i == n){
            cout<<"-1"<<endl;
            return;
        }
    }
    vector<int> bit;
    while(n>0){
        bit.push_back(n%2);
        n/=2;
    }
    int nn = bit.size(),mx = 0,mn = 100,res = 0;
    for(int i=0; i<nn ;i++){
        if(bit[i] == 1)mn = min(mn,i);
        else mx = max(mx,i);
    }
    res = (calcu(mx)+calcu(mn));
    cout<<res<<endl;
}
signed main() {
    RASHED
    build(1000000000);
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/