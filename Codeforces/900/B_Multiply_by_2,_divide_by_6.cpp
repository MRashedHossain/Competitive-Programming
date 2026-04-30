#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
bool prime(int n) {
    if(n == 1)return false;
    for(int i=2; i*i<=n ; i++) {
        if(n%i == 0)return false;
    }
    return true;
}
int solve() {
    int n;
    cin>>n;
    int _2 = 0,_3 = 0;
    while(n%2 == 0) {
        _2++;
        n/=2;
    }
    while (n%3 == 0) {
        _3++;
        n/=3;
    }
    ///cout<<_2<<" "<<_3<<endl;
    if(n == 1 && _2 <= _3)return (2*_3)-_2;
    return -1;
}
int32_t main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<solve()<<endl;
    return 0;
}
 