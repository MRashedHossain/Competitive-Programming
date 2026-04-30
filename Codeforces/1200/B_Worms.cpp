#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
///#define inf 99999999999999999
///#define F first
///#define S second
///#define show(x) cout << #x << " : " << x << endl
#define maxn 100100
 
void solve() {
 
}
int main() {
    RASHED
    ll n,a[maxn]={0};cin>>n;
    for (int i=1;i<=n;i++){
        ll k;cin>>k;a[i]=a[i-1]+k;
    }
    ll m;cin>>m;
    for (int i=0;i<m;i++){
        ll x,ans = 0;cin>>x;
        ll hi = n, lo = 1;
        while(lo<=hi){
            ll mid=(hi+lo)/2;
            if(a[mid]>=x){
                ans = mid;
                hi = mid-1;
            }
            else lo = mid+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
 