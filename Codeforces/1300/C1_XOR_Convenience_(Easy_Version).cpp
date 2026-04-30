#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 200010
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
 
void solve(int tc) {
    int n;cin>>n;
    if(n%2){
        cout<<n-1<<" ";
        for(int i=2;i<=n-3;i+=2)cout<<i+1<<" "<<i<<" ";
        cout<<n<<" "<<1;
    }else {
        cout<<n<<" ";
        for(int i=2;i<=n-2;i+=2)cout<<i+1<<" "<<i<<" ";
        cout<<1;
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