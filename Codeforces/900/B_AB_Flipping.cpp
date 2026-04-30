#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
void solve() {
    int n;string s;
    cin>>n>>s;
    int A = n,B = -1;
    for(int i=0;i<n;i++){
        if(s[i] == 'B' && i>=B)B = i+1;
       if(s[i] == 'A' && i<A)A = i+1;
    }
    if(A == n || B == -1 || B<A)cout<<0<<endl;
    else cout<<B-A<<endl;
}
int32_t main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}