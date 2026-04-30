#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
bool solve() {
    int n;
    cin>>n;
    int a[n+8];
    for(int i=1; i<=n; i++)cin>>a[i];
    if(a[1] != 1)return false;
   return true;
}
int32_t main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<(solve()?"YES":"NO")<<endl;
    return 0;
}
 