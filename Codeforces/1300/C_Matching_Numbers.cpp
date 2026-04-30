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
    if(n%2 == 0) {
        cout<<"No"<<endl;
        return;
    }
    cout<<"Yes"<<endl;
    vector<pair<int,int>> res;
    int fst = 1,lst = n*2;
    for(int i=1; i<=(n+1)/2; i++) {
        res.push_back({fst,lst});
        fst+=2;
        lst--;
    }
    fst = 2;
    for(int i=1; i<(n+1)/2; i++) {
        res.push_back({fst,lst});
        fst+=2;
        lst--;
    }
    for(auto i:res)cout<<i.F<<" "<<i.S<<endl;
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
 