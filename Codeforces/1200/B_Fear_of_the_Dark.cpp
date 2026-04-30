#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define ll long long int
///#define inf 99999999999999999
///#define F first
///#define S second
#define show(x) cout << #x << " : " << x << endl
///#define maxn 200100
int x,y,p,q,m,n;
bool check(double mid) {
    ///,double x, double y, double p, double q, double m, double n
    double rad1 = sqrt(((x-p)*(x-p))+((y-q)*(y-q))),rad2 = sqrt((p*p)+(q*q)),rad3;
    ///show(rad1);show(rad2);
    if (mid>=rad1 && mid>=rad2)return true;
    rad1 = sqrt(((x-m)*(x-m))+((y-n)*(y-n)));
    rad2 = sqrt((m*m)+(n*n));
    ///show(rad1);show(rad2);
    if (mid>=rad1 && mid>=rad2)return true;
    rad1 = sqrt(((x-p)*(x-p))+((y-q)*(y-q)));
    rad2 = sqrt((m*m)+(n*n));
    rad3 = sqrt(((m-p)*(m-p))+((n-q)*(n-q)));
    ///show(rad1);show(rad2);
    if (mid>=rad1 && mid>=rad2 && mid*2 >= rad3)return true;
    rad1 = sqrt(((x-m)*(x-m))+((y-n)*(y-n)));
    rad2 = sqrt((p*p)+(q*q));
    if (mid>=rad1 && mid>=rad2 && mid*2 >= rad3)return true;
    return false;
}
void solve() {
 
    cin>>x>>y>>p>>q>>m>>n;
    double hi = 100000005,lo = 0,mid,ans = 10000,a = (float)x,b = (float)y,c = (float)p,d = (float)q,e = (float)m,f = (float)n;
    for (int i=0; i<64; i++) {
        mid = (hi+lo)/2;
        if (check(mid)) {
            ///,a,b,c,d,e,f
            ans = min(ans,mid);
            hi = mid;
        } else lo = mid;
    }
    printf("%.10lf\n",ans);
    return;
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
 