#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
///#define int long long int

void solve() {

}
signed main() {
    RASHED
    int n,res = 0,sum= 0;
    cin>>n;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        sum+=x;
    }
    for(int i=1; i<=5; i++) {
        if((sum+i) % (n+1) != 1)res++;
    }
    cout<<res<<endl;
    return 0;
}
