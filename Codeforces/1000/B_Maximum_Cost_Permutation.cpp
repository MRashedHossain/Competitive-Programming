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
    vector<int> v(n+2),f(n+2,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        f[v[i]]++;
    }
    priority_queue<int> q;
    for(int i=1;i<=n;i++){
        if(f[i] == 0)q.push(i);
    }
    for(int i=1;i<=n;i++){
        if(v[i] == 0){
            v[i] = q.top();
            q.pop();
        }
    }
    //for(int i=1;i<=n;i++)cout<<v[i]<<" ";
    //cout<<endl;
    int curr = 0;
    for(int i=1;i<=n;i++){
        if(v[i] != i)break;
        curr++;
    }
    for(int i=n;i>=1;i--){
        if(v[i] != i)break;
        curr++;
    }
    if(curr >= n)cout<<0<<endl;
    else cout<<n-curr<<endl;
 
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
 