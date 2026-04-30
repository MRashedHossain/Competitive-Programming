#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define F first
#define S second
int gcd(int a,int b){
    return (__gcd(a,b));
}
int lcm(int a,int b){
    return ((a*b)/__gcd(a,b));
}
void solve(int tc) {
    int n,res = 1,gc,lc;cin>>n;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        if(i == 0){
            lc = b;
            gc = (a*b);
            continue;
        }
        gc = gcd(gc,a*b);
        lc = lcm(lc,b);
        if (gc%lc){
            res++;
            lc = b;
            gc = a*b;
        }
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