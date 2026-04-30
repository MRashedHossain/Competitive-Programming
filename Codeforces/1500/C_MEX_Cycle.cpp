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
int mexulator(vector<int> &mexx){
    sort(mexx.begin(),mexx.end());
    int mex = 0;
    for(auto i:mexx){
        if(mex == i)mex++;
    }
    return mex;
}
void solve(int tc) {
    int n,x,y;cin>>n>>x>>y;
    vector<int> res(n+4,0),mex;
    int curr = 0;
    for(int i=x;i<y;i++){
        res[i] = curr;
        (curr == 0?curr = 1:curr = 0);
    }
    curr = 1;
    for(int i=x-1;i>=1;i--){
        res[i] = curr;
        (curr == 0?curr = 1:curr = 0);
    }
    for(int i=n;i>y;i--){
        res[i] = curr;
        (curr == 0?curr = 1:curr = 0);
    }
    mex.push_back(res[x]);
    mex.push_back(res[y-1]);
    (y==n?mex.push_back(res[1]):mex.push_back(res[y+1]));
    res[y] = mexulator(mex);
    for(int i=1;i<=n;i++)cout<<res[i]<<" ";
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
 