#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

void solve() {

}
signed main() {
    RASHED
    int n,k;cin>>n>>k;
    int a[n+8];
    for(int i=1;i<=n;i++)cin>>a[i];
    int res = 0,x;
    if(k%2)x = 1;
    else x = 2;
    for(int i=x;i<=n;i+=2)res+=a[i];
    cout<<(res>=0?"Dhonattok":"Rinattok")<<endl;
    return 0;
}

