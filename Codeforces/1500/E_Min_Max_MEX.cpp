#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 200010
 
#define F first
#define S second
bool check(int mid,vector<int> &v,int n,int k) {
    unordered_set<int> s;
    int res = 0;
    for(int i=1; i<=n; i++) {
        if(v[i]<mid){
            s.insert(v[i]);
            if(s.size() == mid){
                res++;
                s.clear();
            }
            if(res>=k)return true;
        }
    }
    return res>=k;
}
void solve(int tc) {
    int n,k;
    cin>>n>>k;
    vector<int> v(n+2);
    for(int i=1; i<=n; i++)cin>>v[i];
    int lo = 1,hi = (n/k),res = 0;
    while(lo<=hi) {
        int mid = (lo+hi)/2;
        if(check(mid,v,n,k)) {
            res = max(res,mid);
            lo = mid+1;
        } else hi = mid-1;
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