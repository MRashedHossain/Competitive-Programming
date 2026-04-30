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
    int n;string s;cin>>n>>s;
    vector<int> l,r;
    for(int i=0,j=n-1;i<(n/2);i++,j--){
        if(s[i] != s[j]){
            l.push_back(i);
            r.push_back(j);
        }
    }
    if(l.empty() || r.empty())return true;
    int ll = l.size(),rr = r.size();
    //show(ll);
    for(int i=1;i<ll;i++){
        if(l[i]-l[i-1] != 1)return false;
    }
    return true;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"Yes":"No")<<endl;
    return 0;
}
/**
CASES:
 
*/