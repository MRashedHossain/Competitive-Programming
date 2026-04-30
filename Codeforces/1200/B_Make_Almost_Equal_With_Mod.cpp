#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long int
 
void solve() {
    int n,even = 0,odd = 0;
    cin>>n;
    vector<int> v;
    for(int i=1; i<=n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=2;;i*=2){
        set<int> s;
        for(int j=0;j<n;j++){
            s.insert(v[j]%i);
        }
        if(s.size() == 2){
            cout<<i<<endl;
            return;
        }
    }
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}
/***
1
5
1000 2000 7000 11000 16000
 
1
6
3 5 7 11 13 17
*/