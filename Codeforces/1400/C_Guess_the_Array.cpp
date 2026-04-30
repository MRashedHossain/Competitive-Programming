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
int n,res[5005];
int qry(int i,int j){
    cout<<"? "<<i<<" "<<j<<endl;
    cout.flush();
    int r;cin>>r;
    return r;
}
void solve(int tc) {
    cin>>n;
    int a1,a2,a3,a1_2,a1_3,a2_3;
    a1_2 = qry(1,2);
    a1_3 = qry(1,3);
    a2_3 = qry(2,3);
    a1 = (a1_2 + a1_3 - a2_3)/2;
    a2 = a1_2 - a1;
    a3 = a1_3 - a1;
    res[1] = a1;
    res[2] = a2;
    res[3] = a3;
    for(int i=4;i<=n;i++){
        int now = qry(1,i);
        now -= a1;
        res[i] = now;
    }
    cout<<"! ";
    for(int i=1;i<=n;i++)cout<<res[i]<<" ";
    cout<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    //cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/