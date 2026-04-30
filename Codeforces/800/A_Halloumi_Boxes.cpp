#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
bool solve() {
    int n,k;
    cin>>n>>k;
    int a[n+8]= {0};
    bool flag = true;
    for(int i=1; i<=n; i++){
        cin >> a[i];
        if(a[i]<a[i-1])flag = false;
    }
    if(flag)return flag;
    if(k == 1 && !flag)return false;
    else return true;
}
int32_t main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<(solve()?"YES":"NO")<<endl;
    return 0;
}
 