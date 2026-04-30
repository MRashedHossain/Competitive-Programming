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
 
bool solve(int tc) {
    int n,k;cin>>n>>k;
    vector<int> v(n+2);
    priority_queue <int, vector<int>, greater<int> > q;
    int st,pre = 0;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        if(i == k)st = v[i];
        else q.push(v[i]);
    }
    while(!q.empty() && q.top() < st)q.pop();
    while(!q.empty()){
        if(q.top() - st + pre> st)return false;
        pre += q.top() - st;
        st = q.top();
        q.pop();
    }
    return true;
}
signed main() {
    //RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"YES":"NO")<<endl;
    return 0;
}
/**
CASES:
 
*/