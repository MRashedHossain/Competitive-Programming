#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
void solve() {
 
}
signed main() {
    RASHED
    int n;string s;cin>>n>>s;
    if(n%2){
        for(int i=0;i<n-3;i+=2)cout<<s[i]<<s[i+1]<<"-";
        cout<<s[n-3]<<s[n-2]<<s[n-1]<<endl;
    }
    else {
        for(int i=0;i<n-2;i+=2)cout<<s[i]<<s[i+1]<<"-";
        cout<<s[n-2]<<s[n-1]<<endl;;
    }
    return 0;
}
 