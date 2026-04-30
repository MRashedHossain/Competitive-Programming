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
    int n,k;cin>>n>>k;
    vector<int> f(n+2,0),need;
    for(int i=1;i<=n;i++){
        int x;cin>>x;f[x] = i;
    }
    for(int i=1;i<=n;i++){
        if((f[i] - i)%k)need.push_back(i);
    }
    if(need.empty())cout<<0<<endl;
    else if(need.size() == 2)cout<<1<<endl;
    else cout<<-1<<endl;
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