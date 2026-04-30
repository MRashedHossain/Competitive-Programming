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
    vector<int> v(n);
    priority_queue<int> q;
    map<int,int> f;
    for(int i=0;i<n;i++){
        cin>>v[i];
        q.push(v[i]);
        f[v[i]]++;
    }
    int pre = 0;
    for(int i=n-1;i>=0;i--){
        while(f[q.top()] == 0)q.pop();
        cout<<pre+q.top()<<" ";
        pre+=v[i];
        f[v[i]]--;
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