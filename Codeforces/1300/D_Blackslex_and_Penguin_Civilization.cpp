#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
struct number {
    int xx,yy;
};
 
int trailing_one(int &n) {
    if((n&1) == 0)return 0;
    for(int i=1; i<20; i++) {
        if((n&(1<<i)) == 0)return i;
    }
}
 
void solve(int tc) {
    int n;
    cin>>n;
    vector<number> v;
    for(int i=0; i<(1<<n); i++) {
        v.push_back({trailing_one(i),i});
    }
    sort(all(v),[](number &a,number &b) {
        if(a.xx == b.xx)return a.yy < b.yy;
        return a.xx > b.xx;
    });
    // for(auto i:v)cout<<i.xx<<" "<<i.yy<<endl;
    // return;
    for(auto i:v)cout<<i.yy<<" ";
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
 
 