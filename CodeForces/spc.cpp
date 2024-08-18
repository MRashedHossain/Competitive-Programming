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
bool allON(vector<int> v) {
    for(auto i:v)if(i == 0)return false;
    return true;
}
int power(int x,int y) {
    int pw = 1;
    for(int i=0; i<y; i++)pw*=x;
    return pw;
}
int solve(int tc) {
    int N,n,xo = 0,xoo = 0;
    cin>>n;
    N=n;
    vector<int> B,BB;
    while(N>0) {
        B.push_back(N%2);
        N/=2;
    }
//    reverse(B.begin(),B.end());
//    for(auto i:B)cout<<i<<" ";
//    cout<<endl;
//    return -1;
    if(allON(B))return n-1;
    for(auto i:B) {
        if(i == 1)BB.push_back(0);
        else BB.push_back(1);
    }
//    for(auto i:B)cout<<i<<" ";
//    cout<<endl;
//    for(auto i:BB)cout<<i<<" ";
//    cout<<endl;
    for(int i=0; i<(int)BB.size(); i++) {
        if(BB[i] == 1)xo+=power(2,i);
    }
    for(int i=0; i<(int)B.size(); i++) {
        if(B[i] == 1)xoo += power(2,i);
    }
//    show(xo);
//    show(xoo);
    return xoo*xo;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<solve(i)<<endl;
    return 0;
}
/**
CASES:

*/
