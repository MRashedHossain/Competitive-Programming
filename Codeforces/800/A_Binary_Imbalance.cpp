#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
bool solve() {
    int n;string s;cin>>n>>s;
    int cnt1 = 0,cnt0 = 0;
    for(int i=0;i<n;i++){
        if(s[i] == '0')cnt0++;
        else cnt1++;
    }
    if(cnt0 || cnt0>cnt1)return true;
    return false;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<(solve()?"YES":"NO")<<endl;
    return 0;
}
 