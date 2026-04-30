#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
///#define inf 99999999999999999
///#define F first
///#define S second
#define show(x) cout << #x << " : " << x << endl
///#define maxn 200100
 
void solve() {
    ll n,x,y,ans = 0,sum,sum1,sum2;
    cin>>n>>x>>y;
    ll s2 = n-(n/x);
    sum = (n*(n+1))/2;
    sum = sum-((s2*(s2+1))/2);
    ll g = __gcd(x,y);
    g = (x*y)/g;
    g = n/g;
    ll s1 = n+g-(n/x);
    sum1 = (s1*(s1+1))/2;
    s1 = n-(n/x);
    sum1 = sum1-((s1*(s1+1))/2);
    s1 = (n/y)-g;
    sum2 = (s1*(s1+1))/2;
    ///show(sum);
    ///show(sum1);
    ///show(sum2);
    cout<<sum-(sum1+sum2)<<endl;
}
int main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }
    return 0;
}
/**
1
7 2 3
1
12 6 3
1
24 4 6
*/