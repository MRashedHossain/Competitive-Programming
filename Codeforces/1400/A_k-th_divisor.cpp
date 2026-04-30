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
 
void solve() {
 
}
int main() {
    RASHED
    ll n,k;cin>>n>>k;
    set<ll> s;
    for (ll i=1;i<=(sqrt(n)+1);i++){
        if(!(n%i)){
            s.insert(i);
            s.insert(n/i);
        }
    }
    vector<ll> div(s.begin(),s.end());
    ///for(auto i:div)cout<<i<<" ";
    ///cout<<endl;
    if(div.size()<k)cout<<-1<<endl;
    else cout<<div[k-1]<<endl;
    return 0;
}
 