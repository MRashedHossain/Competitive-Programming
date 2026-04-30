#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
///#define int long long int
 
void solve() {
    map<char,int> m;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            char c;cin>>c;
            m[c]++;
        }
    }
    if(m['A'] == 2){
        cout<<"A"<<endl;
        return ;
    }
    if(m['B'] == 2){
        cout<<"B"<<endl;
        return ;
    }
    if(m['C'] == 2){
        cout<<"C"<<endl;
        return ;
    }
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}
 