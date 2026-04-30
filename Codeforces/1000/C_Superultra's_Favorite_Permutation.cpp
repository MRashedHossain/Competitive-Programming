#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define F first
#define S second
 
void solve(int tc) {
    int n;
    cin>>n;
    if(n<5) {
        cout<<"-1"<<endl;
        return;
    }
    for(int i=1; i<=n; i+=2) {
        if(i!=5)cout<<i<<" ";
    }
    cout<<"5 4 ";
    for(int i=2; i<=n; i+=2) {
        if(i!=4)cout<<i<<" ";
    }
    cout<<endl;
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
 