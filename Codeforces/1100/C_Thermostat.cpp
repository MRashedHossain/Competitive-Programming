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
 
int solve(int tc) {
    int l,r,x;
    cin>>l>>r>>x;
    int a,b;
    cin>>a>>b;
    if(a == b)return 0;
    if(abs(a-b) >= x)return 1;
    if(max(abs(l-b),abs(r-b)) < x)return -1;
    if(abs(l-a) >= x && abs(l-b) >= x)return 2;
    if(abs(r-a) >= x && abs(r-b) >= x)return 2;
    if(abs(l-b) >= x) {
        if(abs(l-a) >= x || abs(r-a) >= x)return 3;
        else return -1;
    }
    if(abs(r-b) >= x) {
        if(abs(l-a) >= x || abs(r-a) >= x)return 3;
        else return -1;
    }
    return 3;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<solve(i)<<endl;
    return 0;
}
/**
CASES:
 
*/