#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " : " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define F first
#define S second
 
void solve(int tc) {
    int n;cin>>n;
    int limak;cin>>limak;
    priority_queue<int> q;
    for(int i=1;i<n;i++){
        int x;cin>>x;
        q.push(x);
    }
    int res = limak;
    while(q.top()>=limak){
        int curr = q.top();q.pop();
        curr--;
        limak++;
        q.push(curr);
    }
    cout<<limak - res<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    ///cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
 
 
 
 
 
 