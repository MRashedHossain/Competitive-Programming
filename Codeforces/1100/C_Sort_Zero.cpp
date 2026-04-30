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
    int pos = -1;
    for(int i=n-1; i>=1; i--) {
        if(v[i] < v[i-1]) {
            pos = i;
            break;
        }
    }
    map<int,int> f;
    for(int i=0;i<n;i++)f[v[i]] = i;
    set<int> res;
    int tmp = pos;
    for(int i=0; i<pos; i++)tmp = max(tmp,f[v[i]]);
    for(int i=0; i<tmp; i++)res.insert(v[i]);
    //show(pos);
    //show(tmp);
    cout<<(pos == -1?0:res.size())<<endl;
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
 