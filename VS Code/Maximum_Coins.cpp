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

int power[100] = {1};
void make_power(int n){
    for(int i=1;i<=n;i++)power[i] = power[i-1]*2;
}
void solve(int tc) {
    int n,x;cin>>n>>x;
    int chef = 0,chefina = 0;
    for(int i = n;i>n-x;i--)chef+=power[i];
    for(int j = 1;j<=n-x;j++)chefina+=power[j];
    cout<<chef-chefina<<endl;
}
signed main() {
    RASHED
    make_power(60);
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:

*/
