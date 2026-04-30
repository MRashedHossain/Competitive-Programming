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
///Classical Example of "Meet in the Middle" Technique
void solve(int tc) {
    int n,M;
    cin>>n>>M;
    vector<int> v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    vector<int> l,r;
    for(int i=0; i<n; i++) {
        if(i<n/2)l.push_back(v[i]);
        else r.push_back(v[i]);
    }
//    sort(l.begin(),l.end());
//    sort(r.begin(),r.end());
//    for(auto i:l)cout<<i<<" ";
//    cout<<endl;
//    for(auto i:r)cout<<i<<" ";
//    cout<<endl;
    vector<int> ll,rr;
    int ls = l.size(),rs = r.size();
//    show(ls);
//    show(rs);
    for(int i=0; i<(1<<ls); i++) {
        int sum = 0;
        for(int j=0; j<ls; j++) {
            if(i & (1<<j))sum+=l[j];
        }
        ll.push_back(sum%M);
    }
    for(int i=0; i<(1<<rs); i++) {
        int sum = 0;
        for(int j=0; j<rs; j++) {
            if(i & (1<<j))sum+=r[j];
        }
        rr.push_back(sum%M);
    }
    sort(ll.begin(),ll.end());
    sort(rr.begin(),rr.end());
//    for(auto i:ll)cout<<i<<" ";
//    cout<<endl;
//    for(auto i:rr)cout<<i<<" ";
//    cout<<endl;
    int res = 0;
    for(auto i:ll)res = max(res,i);
    for(auto i:rr)res = max(res,i);
    for(auto i:ll) {
        int lo = 0,hi = rr.size()-1,tar = (M-1-i),curr = 0;
        while(lo<=hi){
            int mid = (lo+hi)/2;
            if(rr[mid] <= tar){
                res = max(res,rr[mid]+i);
                lo = mid+1;
            }else hi = mid-1;
        }
    }
    cout<<res<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    //cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/
 
 