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
 
void solve(int tc) {
    int n,k;cin>>n>>k;
    int mid = 1;
    for(int i=1;i<=n;i++)mid*=2;
    int lst = mid*2,curr = k;
    vector<int> res;
    while(curr != mid){
        if(curr <= mid){
            res.push_back(1);
            curr *= 2;
        }else {
            res.push_back(2);
            curr = (curr*2) - lst;
        }
    }
    reverse(res.begin(),res.end());
    cout<<res.size()<<endl;
    for(auto i:res)cout<<i<<" ";
    cout<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/