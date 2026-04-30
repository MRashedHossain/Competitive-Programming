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
bool prime(int n){
    for(int i=2;i<n;i++)if(n%i == 0)return false;
    return true;
}
void solve(int tc) {
    int n,m;cin>>n>>m;
    if(prime(m)){
        for(int i=0,j=(n/2);i<(n/2);i++,j++){
            for(int k=1;k<=m;k++)cout<<(m*j)+k<<" ";
            cout<<endl;
            for(int k=1;k<=m;k++)cout<<(m*i)+k<<" ";
            cout<<endl;
        }
        if(n%2){
            for(int i=1;i<=m;i++)cout<<(m*(n-1))+i<<" ";
            cout<<endl;
        }
        return;
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<=m;j++)cout<<(m*i)+j<<" ";
        cout<<endl;
    }
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