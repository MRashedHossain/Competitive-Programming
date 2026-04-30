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
 
int query(vector<int> &q) {
    cout<<"? ";
    cout<<sz(q)<<" ";
    for(auto i:q)cout<<i<<" ";
    cout<<endl;
    cout.flush();
    int res;
    cin>>res;
    return res;
}
void print(vector<int> &ans) {
    cout<<"! ";
    for(auto i:ans)cout<<i<<" ";
    cout<<endl;
    cout.flush();
    return;
}
 
void solve(int tc) {
    int n;
    cin>>n;
    vector<int> now,ans(2*n,0);
    for(int i=1; i<=2*n; i++) {
        now.push_back(i);
        int qry = query(now);
        if(qry) {
            ans[now.back()-1] = qry;
            now.pop_back();
        }
    }
    now.clear();
    for(int i=2*n; i>=1; i--) {
        if(ans[i-1]) {
            now.push_back(i);
        } else {
            now.push_back(i);
            int qry = query(now);
            ans[now.back()-1] = qry;
            now.pop_back();
        }
    }
    print(ans);
}
signed main() {
    //RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/
 