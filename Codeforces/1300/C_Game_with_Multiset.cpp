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
vector<int> pw(32);
void build() {
    int curr = 1;
    for(int i=0; i<31; i++) {
        pw[i] = curr;
        curr *= 2;
    }
}
 
void solve(int tc) {
    int q;
    cin>>q;
    vector<int> f(32,0);
    while(q--) {
        int type,k,val;
        cin>>type;
        if(type == 1) {
            cin>>k;
            f[k]++;
        } else {
            cin>>val;
            vector<int> need(32,0);
            for(int i=30; i>=0; i--) {
                if(val >= pw[i]) {
                    need[i]++;
                    val -= pw[i];
                }
            }
            bool res = true;
            for(int i=30; i>=0; i--) {
                if(i == 0) res = (f[i] >= need[i]);
                else if(need[i] > f[i])need[i-1] += (need[i] - f[i])*2;
            }
            cout<<(res?"YES":"NO")<<endl;
        }
    }
}
signed main() {
    RASHED
    build();
    //for(int i=0;i<31;i++)cout<<"2^"<<i<<" : "<<pw[i]<<endl;
    int TC = 1;
    //cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/
 
 
 
 