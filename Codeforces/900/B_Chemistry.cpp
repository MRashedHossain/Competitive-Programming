#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define ll long long int
///#define inf 99999999999999999
#define F first
#define S second
///#define show(x) cout << #x << " : " << x << endl
///#define maxn 200100
 
void clean() {
 
}
bool solve() {
    int n,k,now = 0,target;
    string s;
    bool flg = false,ans = false;
    map<char,int> mp;
    cin>>n>>k>>s;
    for (int i=0; i<n; i++)mp[s[i]]++;
    ///for (auto i:mp)cout<<i.F<<" "<<i.S<<endl;
    if ((n-k)%2) target = (n-k-1);
    else target = n-k;
    for (auto i:mp) {
        if (now == target)break;
        if (i.S >= target-now)return true;
        if (i.S>1)now+=(i.S-(i.S%2));
    }
    if (now == target)return true;
    return false;
}
int main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--) {
        cout<<(solve()?"YES":"NO")<<endl;
    }
    return 0;
}
/**
2
3 1
abb
3 2
abc
14 3
ttrraakkttoorr
*/