#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " : " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define F first
#define S second
 
void solve(int tc) {
    int n;cin>>n;
    if(n<=10 || n>21){
        cout<<"0"<<endl;
        return;
    }
    n-=10;
    if(n == 1)cout<<"4"<<endl;
    else if(n == 11)cout<<"4"<<endl;
    else if(n == 10)cout<<"15"<<endl;
    else cout<<"4"<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    ///cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
 
 
 