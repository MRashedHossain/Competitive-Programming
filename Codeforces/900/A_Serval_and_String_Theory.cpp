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
    int n,k;
    string s;
    cin>>n>>k>>s;
    set<char> ss;
    for(auto i:s)ss.insert(i);
    if(ss.size() == 1)return false;
    if(s.front() < s.back())return true;
    string t = s;
    reverse(t.begin(),t.end());
    if(s < t)return true;
    return (k>0?1:0);
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