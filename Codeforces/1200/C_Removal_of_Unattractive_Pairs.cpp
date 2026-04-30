#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
void solve() {
    int n,sum = 0,mx = -1;string s;
    cin>>n>>s;
    map<char,int> m;
    vector<int> v;
    for(int i=0;i<n;i++)m[s[i]]++;
    for(auto i:m){
        sum+=(i.second);
        mx = max(mx,i.second);
    }
    sum-=mx;
    if(sum>=mx)cout<<n%2<<endl;
    else cout<<mx-sum<<endl;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}
 