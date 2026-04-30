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
    vector<int> v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    vector<int> ps(n+2,0);
    for(int i=1; i<=n; i++) {
        ps[i] = ps[i-1]+v[i-1];
    }
    for(int ll=1; ll<=n-2; ll++) {
        for(int rr=ll+1; rr<=n-1; rr++) {
            set<int> s;
            s.insert(ps[ll]%3);
            s.insert((ps[rr] - ps[ll])%3);
            s.insert((ps[n] - ps[rr])%3);
            if(s.size() == 1 || s.size() == 3) {
                cout<<ll<<" "<<rr<<endl;
                return;
            }
        }
    }
    cout<<"0 0"<<endl;
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
 