#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

///#define int long long int
///#define show(x) cout << #x << " = " << x << endl
///#define maxn 200100

void solve(int tc) {
    int n;
    cin>>n;
    int a[n+9];
    for(int i=1; i<=n; i++)cin>>a[i];
    if(n%2){
        cout<<4<<endl;
        cout<<1<<" "<<n<<endl;
        cout<<1<<" "<<2<<endl;
        cout<<2<<" "<<n<<endl;
        cout<<2<<" "<<n<<endl;
    }else {
        cout<<2<<endl;
        cout<<1<<" "<<n<<endl;
        cout<<1<<" "<<n<<endl;
    }
}
signed main() {
    RASHED
    int TC;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:

*/

