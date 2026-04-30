#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
void solve() {
    int n,flag = 0,ans = 0;string s;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        if(s[i] == '#'){
            if(flag > 2){
                cout<<2<<endl;
                return;
            }
            else ans+=flag;
            flag = 0;
        }
        else flag++;
    }
    if(flag > 2){
        cout<<2<<endl;
                return;
    }
    ans+=flag;
    cout<<ans<<endl;
}
int32_t main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}
 