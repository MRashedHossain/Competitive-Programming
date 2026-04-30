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
 
#define N 1e7
 
void solve(int tc) {
    int n;cin>>n;
    map<int,int> f;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        for(int j=2;j*j<=x;j++){
            while(x%j == 0){
                f[j]++;
                x /= j;
            }
        }
        if(x>1)f[x]++;
    }
    int res = 0,ext = 0;
    for(auto i:f){
        res += (i.S/2);
        ext += (i.S)%2;
    }
    res += (ext/3);
    cout<<res<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}