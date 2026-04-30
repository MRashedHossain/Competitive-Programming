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
    int n;cin>>n;
    vector<int> v(n+4),f(n+4,0),ff(n+2,0);
    priority_queue<int> q;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        ff[v[i]]++;
    }
    for(int i=n;i>=1;i--){
        if(ff[i] == 0)q.push(i);
    }
    for(int i=1;i<=n;i++){
        if(f[v[i]] == 0){
            cout<<v[i]<<" ";
            f[v[i]]++;
        }
        else {
            cout<<q.top()<<" ";
            q.pop();
        }
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
 