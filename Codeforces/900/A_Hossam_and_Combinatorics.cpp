#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long int
 
int solve() {
    int n;cin>>n;
    vector<int> v;
    int mx = INT_MIN,mn = INT_MAX,mn_cnt = 0,mx_cnt = 0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
        ///mx = max(mx,x);
        ///mn = min(mx,x);
    }
    sort(v.begin(),v.end());
    mx = v[n-1];
    mn = v[0];
    for(int i=0;i<n;i++){
        if(v[i] == mn)mn_cnt++;
    }
     for(int i=0;i<n;i++){
        if(v[i] == mx)mx_cnt++;
    }
    int cnt;
    if(mx != mn)cnt = mx_cnt+mn_cnt;
    else cnt = n;
    ///cout<<mx<<" "<<mx_cnt<<endl;
    ///cout<<mn<<" "<<mn_cnt<<endl;
    if(mx == mn)return n*(n-1);
    return (mx_cnt*mn_cnt)*2;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<solve()<<endl;
    return 0;
}
 