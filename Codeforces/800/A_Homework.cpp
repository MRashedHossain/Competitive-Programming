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
    int n,m;string s;cin>>n>>s;
    string t,p;cin>>m>>t>>p;
    deque<char> q;
    for(auto i:s)q.push_back(i);
    for(int i=0;i<m;i++){
        if(p[i] == 'D')q.push_back(t[i]);
        else q.push_front(t[i]);
    }
    for(auto i:q)cout<<i;
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
 