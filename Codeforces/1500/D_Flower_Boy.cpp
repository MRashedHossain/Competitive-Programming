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
    int n,m;cin>>n>>m;
    vector<int> a(n+2),b(m+2,0);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    vector<int> bam(m+5,n+1),dan(m+5,0);
    bam[0] = 0;
    dan[m+1] = n+1;
    int pos = 1;
    for(int i=1;i<=m;i++){
        while(pos<=n && a[pos-1] < b[i-1])pos++;
        if(pos<=n)bam[i] = pos,pos++;
        else bam[i] = n+1;
    }
    if(bam[m] <= n){
        cout<<0<<endl;
        return;
    }
    pos = n;
    for(int i=m;i>=1;i--){
        while(pos>=1 && a[pos-1] < b[i-1])pos--;
        if(pos>=1)dan[i] = pos,pos--;
        else dan[i] = 0;
    }
    int res = inf;
    for(int i=1;i<=m;i++){
        if(bam[i-1] <= n && dan[i+1] > bam[i-1])res = min(res,b[i-1]);
    }
    if(res == inf)cout<<"-1"<<endl;
    else cout<<res<<endl;
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