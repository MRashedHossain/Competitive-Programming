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
    for(int i=2; i*i<=n; i++) {
        if(n%i == 0)return false;
    }
    return true;
}
signed main() {
    RASHED
    for(int i=524287-50001; i>=50001; i--) {
        for(int j=i-1; j>=50001; j--) {
            for(int k = j-1; k>=50001; k--) {
                for(int l=k-1; l>=500001; l--) {
                    int a = (i&j&k&l),o = (i|j|k|l),x = (i^j^k^l);
                    if(check(a) && check(o) && check(x)) {
                        cout<<i<<" "<<j<<" "<<k<<endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout<<"NOT FOUND"<<endl;
}
/**
CASES:
3---> 474286 474267 50034
2---> 474286 50001
1---> 474263
*/

