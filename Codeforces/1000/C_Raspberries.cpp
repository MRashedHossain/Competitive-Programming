#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
int solve() {
    int n,k;cin>>n>>k;
    if(k == 4){
        int even = 0,odd = 0,ans = INT_MAX;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            if(x%k == 0)ans = 0;
            else ans = min(ans,k-(x%k));
            if(x%2)odd++;
            else even++;
        }
        if(even>1)return 0;
        if(even>0 && odd>0)return min(ans,1);
        if(odd > 1)return min(ans,2);
        if(n == 1)return ans;
        return ans;
    }
    else {
        int ans = INT_MAX;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            if(x%k == 0)ans = 0;
            else ans = min(ans,k-(x%k));
        }
        return ans;
    }
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<solve()<<endl;
    return 0;
}