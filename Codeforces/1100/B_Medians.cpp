#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e18
#define maxn 100010
 
#define F first
#define S second
 
void solve(int tc) {
    int n,k;cin>>n>>k;
    if(n == 1){
        cout<<"1"<<endl;
        cout<<"1"<<endl;
        return;
    }
    if(n == k || k == 1){
        cout<<-1<<endl;
        return;
    }
    cout<<"3"<<endl;
    if(k%2 == 0)cout<<"1 "<<k<<" "<<k+1<<endl;
    else cout<<"1 "<<k-1<<" "<<k+2<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/
 