#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long int
 
bool solve() {
    int d[4];cin>>d[0]>>d[1]>>d[2];
    sort(d,d+3);
    int a = d[0],b = d[1],c = d[2],ans = 0;
    if(b%a)ans+=(a+b)-1;
    else ans+=(b/a)-1;
    if(c%a)ans+=(a+c)-1;
    else ans+=(c/a)-1;
    return ans<=3;
 
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<(solve()?"YES":"NO")<<endl;
    return 0;
}
 