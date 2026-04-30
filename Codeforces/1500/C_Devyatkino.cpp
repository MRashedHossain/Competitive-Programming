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
 
int dx[] = {9,99,999,9999,99999,999999,9999999,99999999,999999999,9999999999};
 
bool check(int n) {
    while(n) {
        if(n%10 == 7)return true;
        n/=10;
    }
    return false;
}
void solve(int tc) {
    int n;
    cin>>n;
    int res = 100;
    for(int i=0; i<10; i++) {
        for(int j=0; j<=10; j++) {
            if(check(n+(j*dx[i])))res = min(res,j);
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
 
*/
 