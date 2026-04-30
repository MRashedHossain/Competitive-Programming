#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
 
int mk[100][100];
 
void build(){
    int n = 60;
    for(int i=0;i<=n;i++){
        mk[i][0] = mk[i][i] = 1;
        for(int j=1;j<i;j++)mk[i][j] = mk[i-1][j-1]+mk[i-1][j];
    }
}
 
void solve(int tc) {
    int n,k;cin>>n>>k;
    int d = 0;
    while((1<<d) < n)d++;
    int res = 0;
 
    for(int i=0;i<d;i++){
        int need = k-i;
        if(need < 0)res += (1<<i);
        else if(need > i)continue;
        else{
            for(int j=need;j<=i;j++)res += mk[i][j];
        }
    }
 
    if(1+d > k)res++;
    cout<<res<<endl;
}
signed main() {
    RASHED
    build();
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/
 
 