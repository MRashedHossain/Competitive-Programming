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
    int n;cin>>n;
    set<int> s;
    map<int,int> f;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        s.insert(x);
        f[x]++;
    }
    if(s.size() == 1)return true;
    if(s.size() > 2)return false;
    vector<int> v{s.begin(),s.end()};
    return (abs(f[v[0]] - f[v[1]]) <= 1);
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"YES":"NO")<<endl;
    return 0;
}
/**
CASES:
 
*/