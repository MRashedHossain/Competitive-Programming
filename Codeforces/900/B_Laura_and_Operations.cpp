#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
void solve() {
    int a,b,c;
    int A = 0,B = 0,C = 0;
    cin>>a>>b>>c;
    if(a%2==b%2 && b%2==c%2) {
        cout<<"1 1 1"<<endl;
        return;
    }
    if(b%2 == c%2)A = 1;
    if(a%2 == c%2)B = 1;
    if(a%2 == b%2)C = 1;
    cout<<A<<" "<<B<<" "<<C<<endl;
}
int32_t main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}