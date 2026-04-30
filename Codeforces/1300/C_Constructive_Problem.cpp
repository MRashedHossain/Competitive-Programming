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
int mexulator(vector<int> v,int n){
    vector<int> f(n+2,0);
    int res = 0;
    for(auto i:v){
        if(i<n)f[i]++;
    }
    for(int i=0;i<=n+2;i++){
        if(f[i] == 0){
            res = i;
            break;
        }
    }
    return res;
}
bool solve(int tc) {
    int n;cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;cin>>x;v.push_back(x);
    }
    int mex = mexulator(v,n);
    int l = -1,r = -1,ii = 0,jj = n-1;
    while(ii<n){
        if(v[ii] == mex+1){
            l = ii;
            break;
        }ii++;
    }
    while(jj>=0){
        if(v[jj] == mex+1){
            r = jj;
            break;
        }jj--;
    }
    if(l == -1 && r == -1){
        if(mex == n)return false;
        return true;
    }
    map<int,int> f;
    for(auto i:v)f[i]++;
    int res = 0;
    for(int i=l;i<=r;i++)f[v[i]]--;
    for(int i=0;i<=mex;i++){
        if(f[i] <= 0)res++;
    }
    return (res<=1);
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"Yes":"No")<<endl;
    return 0;
}
/**
CASES:
 
*/