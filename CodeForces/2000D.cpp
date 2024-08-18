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
    int n;string s;cin>>n;
    int ps[n+9] = {0};
    for(int i=1;i<=n;i++){
        int x;cin>>x;ps[i] = ps[i-1]+x;
    }
    string s;cin>>s;
    vector<int>ll,rr;
    for(int i=0;i<n;i++){
        if(s[i] == 'L')ll.push_back(i+1);
        else rr.push_back(i+1);
    }
    sort(ll.rbegin(),ll.rend());
    sort(rr.begin(),rr.end());
    while()
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**

*/

