#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define ll long long int
///#define inf 99999999999999999
///#define F first
///#define S second
///#define show(x) cout << #x << " : " << x << endl
///#define maxn 200100
 
void solve() {
 
}
int main() {
    RASHED
    int n,_x = 0,_y = 0,_z = 0;
    cin>>n;
    for (int i=0;i<n;i++) {
        int x,y,z;
        cin>>x>>y>>z;
        _x+=x;
        _y+=y;
        _z+=z;
    }
    if(_x || _y || _z)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}
 