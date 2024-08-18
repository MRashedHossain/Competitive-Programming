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
    int n,k,mx = 0;
    cin>>n>>k;
    for(int i=1, j=n; i<=n ; i++, j--)mx+=abs(i-j);
    if(k%2 || k>mx) {
        cout<<"No"<<endl;
        return;
    }
    cout<<"Yes"<<endl;
    vector<int> res(n+9);
    int l = 1,r = n;
    while(l<=r) {
        if(l == r) {
            res[l] = res[r] = l;
            break;
        }
        int val = abs(l-r)*2;
        if(val>k) {
            res[r] = r;
            r--;
        } else {
            k-=val;
            res[l] = r;
            res[r] = l;
            r--;
            l++;
        }
    }
    for(int i=1;i<=n;i++)cout<<res[i]<<" ";
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

