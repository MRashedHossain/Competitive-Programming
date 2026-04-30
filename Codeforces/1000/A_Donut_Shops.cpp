#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long int
 
void solve() {
    int a,b,c;cin>>a>>b>>c;
    if(a*b > c && a<c){
        cout<<1<<" "<<b<<endl;return;
    }
    if(a*b > c && a<=c){
        cout<<-1<<" "<<b<<endl;return;
    }
    if(a*b <= c){
        cout<<1<<" "<<-1<<endl;return;
    }
    if(a>c){
        cout<<-1<<" "<<b<<endl;
    }
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}
 