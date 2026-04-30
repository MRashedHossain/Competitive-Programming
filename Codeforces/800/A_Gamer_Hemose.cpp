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
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    sort(v.rbegin(),v.rend());
    int lo = 0,hi = (int)1e9,damage = v[0]+v[1],res = 0;
    while(lo<=hi) {
        int mid = (lo+hi)/2;
        if(mid*damage >= k)hi = mid-1;
        else res = mid,lo = mid+1;
    }
    int curr = (res*damage);
    res *= 2;
    (curr+v[0] >= k?res++:res+=2);
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