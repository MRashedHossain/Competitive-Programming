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

void solve(int tc) {
    int n;
    cin>>n;
    int x,res = 0,sum = 0;
    map<int,int> f;
    for(int i=1;i<=n;i++){
        int x;cin>>x;sum+=x;
        f[x]++;
        if(sum%2 == 0){
            if(f[sum/2])res++;
        }
    }
    cout<<res<<endl;
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
3
4
--1 1 2 0
0 1 2 4 4
5
--0 1 2 1 4
0 0 1 3 4 4
7
--1 1 0 3 5  2  12
0 1 2 2 5 10 12 24
*/

