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
    int n,k;
    cin>>n>>k;
    if(k < n || k > (2*n - 1)) {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    int need = (k - n + 1);
    if(need == 1)cout<<"1 1"<<endl;
    else {
        cout<<"1 2 ";
        for(int i=2; i<need; i++)cout<<i+1<<" "<<i-1<<" ";
        cout<<need<<" "<<need-1<<" ";
    }
    for(int i=need+1; i<=n; i++)cout<<i<<" "<<i<<" ";
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
 