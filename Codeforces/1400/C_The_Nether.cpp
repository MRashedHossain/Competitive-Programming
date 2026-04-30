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
int query(int k,vector<int> &v){
    cout<<"? "<<k<<" "<<v.size()<<" ";
    for(auto i:v)cout<<i<<" ";
    cout<<endl;
    cout.flush();
    int resp;cin>>resp;
    return resp;
}
 
void print(int k,vector<int> &v){
    cout<<"! "<<k<<" ";
    for(auto i:v)cout<<i<<" ";
    cout<<endl;
    cout.flush();
}
 
void solve(int tc) {
    int n;cin>>n;
    vector<int> res,ask(n);
    for(int i=0;i<n;i++)ask[i] = i+1;
    priority_queue<pair<int,int>> q;
    for(int i=1;i<=n;i++)q.push({query(i,ask),i});
    int pre = q.top().S;
    q.pop();
    res.push_back(pre);
    while(!q.empty()){
        vector<int> vv = {pre,q.top().S};
        if(query(pre,vv) == 2)res.push_back(q.top().S);
        q.pop();
        pre = res.back();
    }
    print(res.size(),res);
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
 