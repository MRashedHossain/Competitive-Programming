#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define show(x) cout << #x << " : " << x << endl
#define ll long long int
#define maxn 200100
 
ll a[maxn],n,q;
 
void clean() {
 
}
int BS(ll x) {
    ll lo =1,hi = n,ans = 0;
    while(lo <= hi) {
        ll mid = (lo+hi)/2;
        if(a[mid]<=x) {
            ans = max(ans,mid);
            lo = mid+1;
        } else hi = mid-1;
    }
    return ans;
}
int main() {
    FAST
    cin>>n;
    for (int i=1; i<=n; i++)cin>>a[i];
    sort(a+1,a+n+1);
    cin>>q;
    while(q--) {
        ll x;
        cin >> x;
        cout<<BS(x)<<endl;
    }
    return 0;
}
 