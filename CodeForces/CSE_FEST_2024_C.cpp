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
    int a[5],p = 0,n = 0,z = 0;
    cin>>a[0]>>a[1]>>a[2];
    for(int i=0; i<3; i++) {
        if(a[i] == 0)z++;
        if(a[i] > 0)p++;
        if(a[i] < 0)n++;
    }
    if(p)cout<<"Positive numbers: "<<p<<endl;
    if(n)cout<<"Negative numbers: "<<n<<endl;
    if(z)cout<<"Zeros: "<<z<<endl;
    return 0;
}


