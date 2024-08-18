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
    int a[n+8],b[n+8];
    memset(b,-1,sizeof b);
    vector<pair<int,int>>lr,lm;
    for(int i=1;i<=n;i++)cin>>a[i];
    int local = (n-1)/2;
    lm.push_back({a[2],2});
    lr.push_back({a[1],1});
    lr.push_back({a[3],3});
    for(int i=4;i<n;i+=2){
        lm.push_back({a[i],i});
        lr.push_back({a[i+1],i+1});
    }
    sort(lm.begin(),lm.end());
    sort(lr.rbegin(),lr.rend());
    int L = n,R = 1;
    for(auto i:lm){
        b[i.S] = L;
        L--;
    }
    for(auto i:lr){
        b[i.S] = R;
        R++;
    }
    if(b[n] == -1)b[n] = L;
    for(int i=1;i<=n;i++)cout<<b[i]<<" ";
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

