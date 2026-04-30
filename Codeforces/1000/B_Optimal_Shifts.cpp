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
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> one,zero;
    for(int i=0;i<n;i++){
        if(s[i] == '1')one.push_back(i);
        else zero.push_back(0);
    }
    int ans = 0;
    for(int i=0;i<one.size()-1;i++){
        ans = max(ans,one[i+1] - one[i] - 1);
    }
    ans = max(ans,n - one.back() - 1 + one.front() - 0);
    cout<<ans<<endl;
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
 