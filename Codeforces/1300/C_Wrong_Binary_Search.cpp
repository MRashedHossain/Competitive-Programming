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
    string s;
    cin>>n>>s;
    vector<int> o,res(n+1,0);
    for(int i=0; i<n; i++) {
        if(s[i] == '1')o.push_back(i+1);
    }
    int pre = 0;
    for(auto i:o) {
        int l = pre+1,r = i;
        int mid = r-l+1;
        if(mid == 2) {
            cout<<"NO"<<endl;
            return;
        }
        if(mid == 1)res[l] = l;
        else {
            for(int i=l; i<=r-2; i++)res[i] = i+1;
            res[r-1] = l;
            res[r] = r;
        }
        pre = i;
    }
    int ll = pre+1;
    if(ll <= n) {
        int xx = n-pre;
        if(xx == 1) {
            cout<<"NO"<<endl;
            return;
        } else {
            for(int i=ll; i<n; i++)res[i] = i+1;
            res[n] = ll;
        }
    }
    cout<<"YES"<<endl;
    for(int i=1; i<=n; i++)cout<<res[i]<<" ";
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
 