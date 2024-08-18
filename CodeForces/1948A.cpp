#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
///#define int long long int

void solve() {
    int n;cin>>n;
    if(n % 2){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    for(int i=1;i<=n/2;i++)cout<<"AAB";
    cout<<endl;
}
signed main() {
    RASHED
    int TC;
    cin>>TC;
    while(TC--)solve();
    return 0;
}

