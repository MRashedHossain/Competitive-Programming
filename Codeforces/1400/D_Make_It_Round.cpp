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
    int n,m;
    cin>>n>>m;
    int two = 0,five = 0,now = n,res = 1;
    while(n>0 && n%2 == 0) {
        n/=2;
        two++;
    }
    while(n>0 && n%5 == 0) {
        n/=5;
        five++;
    }
    while(two < five && res*2 <= m){
        two++;
        res *= 2;
    }
    while(five < two && res*5 <= m){
        five++;
        res *= 5;
    }
    while(res*10 <= m)res *= 10;
    if(res == 1)cout<<now*m<<endl;
    else {
        res *= (m/res);
        cout<<res*now<<endl;
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