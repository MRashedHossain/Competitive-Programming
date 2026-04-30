#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 200010
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
 
void solve(int tc) {
    string s;
    cin>>s;
    int n = sz(s);
    int tot = 0;
    for(auto i:s) {
        tot += (i-'0');
    }
    if(n == 1 || tot <= 9) {
        cout<<0<<endl;
        return;
    }
    vector<int> can;
    for(int i=0; i<n; i++) {
        if(i == 0)can.push_back(s[i] - '0' - 1);
        else can.push_back(s[i] - '0');
    }
    sort(rall(can));
    int ans = 0,need = tot - 9,now = 0;
    for(auto i:can) {
        if(now>=need)break;
        now += i;
        ans++;
    }
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
 