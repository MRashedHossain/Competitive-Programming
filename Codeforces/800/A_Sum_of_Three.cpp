#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
///#define inf 99999999999999999
///#define F first
///#define S second
///#define show(x) cout << #x << " : " << x << endl
///#define maxn 200100
 
void clean() {
 
}
void solve() {
    ll n;cin>>n;
    ll a = 1,b = 2;
    n-=3;
    if (n<4 || n == 6){
        cout<<"NO"<<endl;
        return;
    }
    while (b%3 == 0 || n%3 == 0){
        n--;
        b++;
    }
    cout<<"YES"<<endl;
    cout<<a<<" "<<b<<" "<<n<<endl;
}
int main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }
    return 0;
}
 