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
    vector<int> v(n+2),one;
    for(int i=1; i<=n; i++) {
        cin>>v[i];
        if(v[i] == 0)one.push_back(i);
    }
    if(one.empty()) {
        cout<<1<<endl;
        cout<<1<<" "<<n<<endl;
        return;
    }
    for(int i=2; i<=n; i++) {
        int l = 0,r = 0;
        for(int j:one) {
            if(j <= i) {
                l++;
                break;
            }
        }
        for(int j:one) {
            if(j > i) {
                r++;
                break;
            }
        }
        if(l > 0 && r > 0) {
            cout<<3<<endl;
            cout<<i+1<<" "<<n<<endl;
            cout<<1<<" "<<i<<endl;
            cout<<1<<" "<<2<<endl;
            return;
        } else if(l == 0) {
            cout<<2<<endl;
            cout<<i+1<<" "<<n<<endl;
            cout<<1<<" "<<i+1<<endl;
            return;
        } else {
            cout<<2<<endl;
            cout<<1<<" "<<i<<endl;
            cout<<1<<" "<<n-i+1<<endl;
            return;
        }
    }
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