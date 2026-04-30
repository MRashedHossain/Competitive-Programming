#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int
 
void solve() {
    int n,k;cin>>n>>k;
    int pro = 1;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        pro*=x;
    }
    ///cout<<pro<<endl;
    ///return;
    if(2023%pro){
    cout<<"NO"<<endl;
    return;
    }
    cout<<"YES"<<endl;
    cout<<2023/pro<<" ";
    for(int i=1;i<k;i++)cout<<1<<" ";
    cout<<endl;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}