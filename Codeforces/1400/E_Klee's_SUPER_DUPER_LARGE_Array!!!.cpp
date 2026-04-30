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
int sum(int a,int b){
    a--;
    int s1 = (a*(a+1))/2,s2 = (b*(b+1))/2;
    return (s2-s1);
}
void solve(int tc) {
    int n,k,res = inf;cin>>n>>k;
    int a = k,b = n+k-1;
    int lo = a,hi = b;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(sum(a,mid)<=sum(mid+1,b)){
            res = mid;
            lo = mid+1;
        }
        else {
            hi = mid-1;
        }
    }
    int ans = abs((sum(a,res) - sum(res+1,b)));
    ans = min(ans,abs((sum(a,res+1) - sum(res+2,b))));
    cout<<ans<<endl;
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
 