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
bool check(int n,vector<int> &a,vector<int> &b,vector<int> &c){
    vector<pair<int,int>> res(4);
    int need = (a[n]+2)/3,l = 0,r = 0;
    for(int i=1;i<=n;i++){
        if(a[i]>=need){
            res[a[n+1]] = {1,i};
            l = i;
            break;
        }
    }
    for(int i=n;i>=1;i--){
        if(c[n] - c[i] >= need){
            res[c[n+1]] = {i+1,n};
            r = i;
            break;
        }
    }
    if(l>r)return false;
    if(b[r] - b[l] < need)return false;
    res[b[n+1]] = {l+1,r};
    for(int i=1;i<=3;i++)cout<<res[i].F<<" "<<res[i].S<<" ";
    cout<<endl;
    return true;
}
void solve(int tc) {
    int n;
    cin>>n;
    vector<int> a(n+4,0),b(n+4,0),c(n+4,0);
    for(int i=1;i<=n;i++){
        int x;cin>>x;a[i]+=(a[i-1]+x);
    }
    for(int i=1;i<=n;i++){
        int x;cin>>x;b[i]+=(b[i-1]+x);
    }
    for(int i=1;i<=n;i++){
        int x;cin>>x;c[i]+=(c[i-1]+x);
    }
    a[n+1] = 1;
    b[n+1] = 2;
    c[n+1] = 3;
    if(check(n,a,b,c))return;
    if(check(n,a,c,b))return;
    if(check(n,b,a,c))return;
    if(check(n,b,c,a))return;
    if(check(n,c,a,b))return;
    if(check(n,c,b,a))return;
    cout<<"-1"<<endl;
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
1
5
5 1 1 1 1
1 1 5 1 1
1 1 1 1 5
*/
 