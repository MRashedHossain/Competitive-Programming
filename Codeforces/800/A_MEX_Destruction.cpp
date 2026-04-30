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
    int n;cin>>n;
    vector<int> v(n+4);
    for(int i=1;i<=n;i++)cin>>v[i];
    int non = 0,curr = 0;
    for(int i=1;i<=n;i++){
        if(v[i]!=0)curr++;
        else {
            if(curr)non++;
            curr = 0;
        }
    }
    if(curr)non++;
    if(non == 0)cout<<0<<endl;
    else if(non == 1)cout<<1<<endl;
    else cout<<2<<endl;
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