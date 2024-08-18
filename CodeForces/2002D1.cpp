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
int ps[200010] = {0};
int log3(int n){
    int res = 0;
    while(n){
        n/=3;
        res++;
    }
    return res;
}
void Build(){
   for(int i=1;i<=200000;i++){
        ps[i] = ps[i-1]+log3(i);
   }
}
void solve(int tc) {
    int l,r;cin>>l>>r;
    cout<<log3(l)+ps[r]-ps[l-1]<<endl;
}
signed main() {
    RASHED
    Build();
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**

*/

