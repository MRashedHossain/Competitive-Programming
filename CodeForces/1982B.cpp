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
    int x,y,k;
    cin>>x>>y>>k;
    while(x>1 && k>0) {
        int tmp = y - (x%y);
        if(k<tmp) {
            cout<<x+k<<endl;
            return;
        }
        x+=tmp;
        k-=tmp;
        while(x%y == 0)x/=y;
    }
    cout<<x+(k%(y-1))<<endl;
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

