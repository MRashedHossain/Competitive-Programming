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
    int n,k,mx = 0;cin>>n>>k;
    for(int i=1,j = n;i<= n ;i++,j--)mx+=abs(i-j);
    cout<<mx<<endl;
    if(k%2 == 1 || k>=mx){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
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

