#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define ll long long int
///#define inf 99999999999999999
///#define F first
///#define S second
///#define show(x) cout << #x << " : " << x << endl
///#define maxn 200100
 
void solve() {
    int n,a[111][111],now = 1;cin>>n;
    if(n == 1){
        cout<<1<<endl;
        return;
    }
    if(n == 2){
        cout<<-1<<endl;
        return;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(now>(n*n))now = 2;
            a[j][i] = now;
            now+=2;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
}
int main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }
    return 0;
}
 