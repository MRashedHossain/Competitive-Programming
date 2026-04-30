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
int mexulator(int n,vector<int> &v){
    map<int,int> f;
    for(auto i:v)f[i]++;
    bool fnd = true;
    for(int i=0;i<=n+3;i++){
        if(f[i] == 0){
            if(fnd)fnd = false;
            else return i;
        }
    }
}
void solve(int tc) {
    int n,m,mex = 0;cin>>n>>m;
    for(int i=0;i<n;i++){
        int nn;cin>>nn;
        vector<int> tmp;
        for(int i=0;i<nn;i++){
            int x;cin>>x;tmp.push_back(x);
        }
        int curr_mex = mexulator(nn,tmp);
        ///show(curr_mex);
        mex = max(mex,curr_mex);
    }
    ///show(mex);
    int tot = ((m*(m+1))/2),extra = ((mex*(mex+1))/2);
    int add_extra = (mex*(mex+1));
    if(m>mex)cout<<(tot-extra+add_extra)<<endl;
    else cout<<mex*(m+1)<<endl;
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
 