#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define show(x) cout << #x << " : " << x << endl
#define ll long long int
#define maxn 100100
 
ll n,k,a[maxn],b[maxn],ans = 0;
 
void clean() {
 
}
bool check(ll mid) {
    ll mp = k;
    for (int i=0; i<n; i++) {
        if(b[i]/a[i] < mid) {
            if (((a[i]*mid)-b[i])<=mp) {
                mp-=((a[i]*mid)-b[i]);
            } else return false;
        }
    }
    return true;
}
int main() {
    cin>>n>>k;
    for (int i=0; i<n; i++)cin>>a[i];
    for (int i=0; i<n; i++)cin>>b[i];
    ll lo = 0,hi = 10000000000000000;
    while (lo <= hi) {
        ll mid = (lo+hi)/2;
        if(check(mid)) {
            ans = max(ans,mid);
            lo = mid+1;
        } else hi = mid-1;
    }
    cout<<ans<<endl;
}
 