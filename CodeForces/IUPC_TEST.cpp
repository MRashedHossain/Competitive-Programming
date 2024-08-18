#include<bits/stdc++.h>
using namespace std;

#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int

#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e18
#define maxn 100010

#define F first
#define S second

bool check(int n) {
    if(n == 0)return false;
    for(int i=2; i*i<=n; i++) {
        if(n%i == 0)return false;
    }
    return true;
}
signed main() {
    RASHED
    for(int i=2,j=524287,k=3,l=524286; k<l; i++,j--,k++,j--) {
        int a = (i&j&k&l),o = (i|j|k|l),x = (i^j^k^l);
        ///cout<<x<<" "<<o<<" "<<a<<endl;
        if(check(a) && check(o) && check(x)) {
            cout<<i<<" "<<j<<" "<<k<<" "<<l<<endl;
            return 0;
        }
    }
    cout<<not
    return 0;
}
/**
/**
    int val = 2;
    while(val <= (int)1e9){
        int chk = val-1,cnt = 0;
        for(int i=2;i*i<=chk;i++){
            if(chk%i == 0){
                cnt++;
                break;
            }
        }
        if(!cnt)cout<<chk<<" ";
        val *= 2;
    }
    cout<<endl;

CASES:
131071 524287

PU_TKI
*/


