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
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    set<int> chk;
    for(int i=0;i<n;i++){
        if(b[i] != -1)chk.insert(a[i]+b[i]);
    }
    if(chk.size() == 0){
        int mn = inf,mx = -inf;
        for(int i=0;i<n;i++){
            mn = min(mn,a[i]);
            mx = max(mx,a[i]);
        }
        int l = mx,r = mn+k;
        cout<<max(0LL,r-l+1)<<endl;
    }else if(chk.size() == 1){
        int bhv = *(chk.begin());
        bool found = true;
        for(int i=0;i<n;i++){
            int need = bhv - a[i];
            if(need > k || need < 0)found = false;
        }
        cout<<(found?"1":"0")<<endl;
    }else {
        cout<<0<<endl;
    }
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