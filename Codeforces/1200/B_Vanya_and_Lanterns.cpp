#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define show(x) cout << #x << " : " << x << endl
#define ll long long int
#define maxn 100100
 
ll n,l;
vector<ll> v;
 
bool check(double mid) {
    if (v[0] != 0 && v[0]>mid)return false;
    if (v[n-1] != l && (l - v[n-1])>mid)return false;
    for (int i=1; i<n; i++) {
        if(abs(v[i]-v[i-1])>(mid*2))return false;
    }
    return true;
}
double BIN() {
    double lo = 0,hi = l,ans;
    for(int i=0; i<60; i++) {
        double mid = (hi+lo)/2;
        if(check(mid)) {
            ans = mid;
            hi = mid;
        } else lo = mid;
    }
    return ans;
}
int main() {
    FAST
    cin>>n>>l;
    ///v.push_back(0);
    for (int i=0; i<n; i++) {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    printf("%.10lf",BIN());
    return 0;
}
 