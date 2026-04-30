#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long int
#define F first
#define S second
 
int solve() {
    int n;cin>>n;
    int a[n+8],b[n+8],ans = 0;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i];
    vector<pair<int,pair<int,int>>> v;
    for(int i=1;i<=n;i++){
        v.push_back({a[i]+b[i],{a[i],b[i]}});
    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<n;i+=2){
        ans+=(v[i].F-v[i].S.S-1);
    }
    for(int i=1;i<n;i+=2){
        ans-=(v[i].F-v[i].S.F-1);
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