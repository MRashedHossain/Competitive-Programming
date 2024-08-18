#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

void solve(int tc) {
    int n;cin>>n;
    set<int> tmp;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        tmp.insert(x);
    }
    vector<int> v{tmp.begin(),tmp.end()};
    int res = 1;
    for(int i=0;i<v.size();i++){
        int curr = v[i],lo = i+1,hi = v.size()-1,pos = INT_MIN;
        while(lo <= hi){
            int mid = (lo+hi)/2;
            if(curr+n > v[mid]){
                pos = max(pos,mid);
                lo = mid+1;
            }
            else hi = mid-1;
        }
        if(pos != INT_MIN)res = max(res,pos-i+1);
    }
    cout<<res<<endl;
}
signed main() {
    RASHED
    int TC;
    cin>>TC;
    for(int i=1;i<=TC;i++)solve(i);
    return 0;
}
/**
CASES:

*/

