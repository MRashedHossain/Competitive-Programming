#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

 bool rashed(pair<int,int> a,pair<int,int> b){
    if(a.first == b.first)return a.second > b.second;
    return a.first < b.first;
 }
int solve() {
    int n,d;cin>>n>>d;
    int money[n+6] = {0},factor[n+9] = {0};
    vector<pair<int,int>> vp;
    for(int i=1;i<=n;i++){
        int x,y;cin>>x>>y;
        vp.push_back({x,y});
    }
    sort(vp.begin(),vp.end(),rashed);
    for(int i=0;i<n;i++){
        money[i+1] = vp[i].first;
        factor[i+1] = factor[i]+vp[i].second;
    }
    int res = INT_MIN;
    for(int i=1;i<=n;i++){
        int lo = i+1,hi = n,pos = INT_MIN;
        while(lo <= hi){
            int mid = (lo+hi)/2;
            if(money[mid] - money[i] < d){
                pos = max(pos,mid);
                lo = mid+1;
            }
            else hi = mid-1;
        }
        if(pos == INT_MIN)res = max(res,factor[i]-factor[i-1]);
        else res = max(res,factor[pos]-factor[i-1]);
    }
    return res;
}
signed main() {
    RASHED
    cout<<solve()<<endl;
    return 0;
}
/**
CASES:

*/
