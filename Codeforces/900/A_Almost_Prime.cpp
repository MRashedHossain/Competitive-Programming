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
bool check(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i == 0)return false;
    }
    return true;
}
void solve(int tc) {
    int n;cin>>n;
    set<int> s;
    for(int i=2;i<=3000;i++){
        if(check(i))s.insert(i);
    }
    //for(auto i:s)cout<<i<<" ";
    //cout<<endl;
    int res = 0;
    for(int i=2;i<=n;i++){
        int cnt = 0;
        for(int j:s){
            if(i%j == 0)cnt++;
        }
        if(cnt == 2)res++;
    }
    cout<<res<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    //cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/