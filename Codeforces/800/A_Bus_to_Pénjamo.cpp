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
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.rbegin(),v.rend());
    int res = 0,lft = 0;
    for(int i=0;i<n;i++){
        if(v[i]%2)res+=(v[i]-1);
        else res+=v[i];
        k-=(v[i]/2);
        lft+=(v[i]%2);
    }
    while(true){
        if(k*2 <= lft || lft == 0 || k == 0)break;
        res++;
        k--;
        lft--;
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
CASES:
 
*/
 