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
    int n,b,c;
    cin>>n>>b>>c;
    if(b == 0){
        if(c>=n)return n;
        if(c>=n-2)return n-1;
        return -1;
    }
    if(c>=n) return n;
    return (n - max(0LL,1 + (n-c-1)/b));
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