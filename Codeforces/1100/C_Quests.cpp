#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
int solve() {
    int n,k;
    cin>>n>>k;
    int a[n+8],b[n+8];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];
    int ans = 0,sum = 0,mx = 0;
    for(int i=0; i<n&&i<k; i++) {
        sum+=a[i];
        mx = max(mx,b[i]);
        ans = max(ans,sum+((k-i-1)*mx));
    }
    return ans;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<solve()<<endl;
    return 0;
}
/**
1
5 5
3 2 4 1 4
2 3 1 4 7
 
1
4 7
4 3 1 2
1 1 1 1
*/