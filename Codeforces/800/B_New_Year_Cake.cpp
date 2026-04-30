#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
 
int one[20] = {0},two[20] = {0};
void build() {
    int st = 1;
    for(int i=1; i<=15; i++) {
        one[i] += one[i-1]+st;
        st *= 4;
    }
    st = 2;
    for(int i=1; i<=15; i++) {
        two[i] += two[i-1]+st;
        st *= 4;
    }
}
void solve(int tc) {
    int a,b;
    cin>>a>>b;
    int st = 1,res = 0,ans = 0,aa = a,bb = b;
    for(int i=1; i<=15; i++) {
        aa -= st;
        bb -= (2*st);
        st *= 4;
        if(aa >= 0 && bb >= 0)res+=2;
        else if(aa >= 0 && bb < 0){res++;break;}
        else break;
    }
    st = 1,aa = b,bb = a;
    for(int i=1; i<=15; i++) {
        aa -= st;
        bb -= (2*st);
        st *= 4;
        if(aa >= 0 && bb >= 0)ans+=2;
        else if(aa >= 0 && bb < 0){ans++;break;}
        else break;
    }
    cout<<max(ans,res)<<endl;
}
signed main() {
    RASHED
    build();
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/
 
 