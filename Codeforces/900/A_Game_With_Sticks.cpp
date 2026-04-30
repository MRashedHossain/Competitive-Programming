#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
int solve(int n,int m) {
    int ans = 0;
    while(n>0 && m>0){
        ans++;
        m--;n--;
    }
    return ans%2;
}
signed main() {
    RASHED
    int n,m;cin>>n>>m;
    cout<<(solve(n,m)?"Akshat":"Malvika")<<endl;
    return 0;
}