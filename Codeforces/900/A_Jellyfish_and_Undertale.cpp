#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long int
 
int solve() {
    int a,b,n,ans = 0;cin>>a>>b>>n;
    while(n--){
        int x;cin>>x;
        if(x>=a)ans+=(a-1);
        else ans+=x;
    }
    ans+=b;
    return ans;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<solve()<<endl;
    return 0;
}
 