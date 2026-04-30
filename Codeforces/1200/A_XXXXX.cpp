#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
///#define inf 99999999999999999
///#define F first
///#define S second
///#define show(x) cout << #x << " : " << x << endl
#define maxn 200100
 
void clean() {
 
}
ll solve() {
    ll n,k,a[maxn]= {0},ans = -1;
    cin>>n>>k;
    for (int i=1; i<=n; i++) {
        ll x;
        cin>>x;
        a[i] = ((a[i-1]+x)%k);
    }
    ll n1 = 0,n2=-1;
    for (int i=1; i<=n; i++) {
        if (a[i] != n1) {
            n2 = i;
            break;
        }
    }
    if (n2 == -1)return -1;
    for (int i=1; i<=n; i++) {
        if (a[i]==n1) ans = max(ans,i-n2);
        else ans = max(ans,i-n1);
    }
    return max(ans,-1LL);
}
int main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--) {
        cout<<solve()<<endl;
    }
    return 0;
}