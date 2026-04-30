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
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    int lst;cin>>lst;
    bool got_it = true;
    int res = 0,diff = inf;
    for(int i=0;i<n;i++){
        int l = min(a[i],b[i]),r = max(a[i],b[i]);
        res += (r-l);
        diff = min(diff,min(abs(lst-a[i]),abs(lst-b[i])));
        if(lst >= l && lst <= r && got_it){
            res++;
            got_it = false;
        }
    }
    if(got_it)res += (diff+1);
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
CASES:
 
*/