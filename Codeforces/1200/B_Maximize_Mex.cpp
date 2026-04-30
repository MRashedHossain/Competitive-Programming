#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " : " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define F first
#define S second
 
void solve(int tc) {
    int n,k;
    cin>>n>>k;
    vector<int> v;
    map<int,int> f;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
        f[x]++;
    }
    int res = 0;
    while(true){
        if(f[res] == 0)break;
        if(f[res]>1)f[res+k]+=(f[res]-1);
        res++;
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
 
*/
 