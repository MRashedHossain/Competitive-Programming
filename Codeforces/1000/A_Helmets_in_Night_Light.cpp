#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long int
#define F first
#define S second
 
int solve() {
    int n,k;
    cin>>n>>k;
    int a[n+6];
    vector<pair<int,int>> v;
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        v.push_back({x,-a[i]});
    }
    sort(v.begin(),v.end());
    ///for(auto i:v)cout<<i.F<<" "<<i.S<<endl;
    int per = 1,cst = k,i = 0;
    while(per < n) {
        ///cout<<per<<endl;
        if(v[i].F <= k) {
            if(per + abs(v[i].S) <= n) {
                per+=abs(v[i].S);
                cst+=abs(((v[i].F)*(v[i].S)));
            } else {
                cst+=abs(((n-per)*v[i].F));
                per = n;
            }
        } else {
            cst+=((n-per)*k);
            per = n;
        }
        i++;
    }
    return cst;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<solve()<<endl;
    return 0;
}