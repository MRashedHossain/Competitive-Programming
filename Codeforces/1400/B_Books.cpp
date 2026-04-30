#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define show(x) cout << #x << " : " << x << endl
#define ll long long int
#define maxn 100100
 
ll n,k,a[maxn]= {0};
 
bool valid(ll mid) {
    for (int i=0; i<n-mid+1; i++) {
        if (a[i+mid]-a[i] <= k)return true;
    }
    return false;
}
int solve() {
    ll lo = 1,hi = n,ans = 0;
    while(lo <= hi) {
        ll mid = (hi+lo)/2;
        if (valid(mid)) {
            ans = mid;
            lo = mid+1;
        } else hi = mid-1;
    }
    return ans;
}
int main() {
    FAST
    cin>>n>>k;
    for (int i=1; i<=n; i++) {
        int p;
        cin>>p;
        a[i] = a[i-1]+p;
    }
    cout<<solve()<<endl;
}
 