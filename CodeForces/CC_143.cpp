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
    int a[2*(n+2)] = {0,1};
    for(int i=2; i<=n; i++)a[i] = 2;
    int curr = 3,res = 0;
    for(int i=2; i<=n; i++) {
        bool found = false;
        for(int j=i+i; j<=n; j+=i) {
            if(a[i] == a[j]) {
                found = true;
                break;
            }
        }
        if(found) {
            for(int j=i+i; j<=n; j+=i) {
                a[j] = curr;
            }
            curr++;
        }
    }
    for(int i=1; i<=n; i++)res = max(res,a[i]);
    cout<<res<<endl;
    for(int i=1; i<=n; i++)cout<<i<<" ";
    cout<<endl;
    for(int i=1; i<=n; i++)cout<<a[i]<<" ";
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
