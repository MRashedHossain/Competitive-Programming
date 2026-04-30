#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
 
void solve(int tc) {
    int n;
    cin>>n;
    vector<int> a(n),b(n),c(n);
    for(int &i:a)cin>>i;
    for(int &i:b)cin>>i;
    for(int &i:c)cin>>i;
    int ab = 0,bc = 0;
    for(int i=0; i<n; i++) {
        bool fnd = true;
        for(int j=0; j<n; j++) {
            if(a[j] >= b[(i+j)%n]) {
                fnd = false;
                break;
            }
        }
        if(fnd)ab++;
    }
    for(int i=0; i<n; i++) {
        bool fnd = true;
        for(int j=0; j<n; j++) {
            if(b[j] >= c[(i+j)%n]) {
                fnd = false;
                break;
            }
        }
        if(fnd)bc++;
    }
    int res = (n*ab*bc);
    cout<<res<<endl;
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
 
 