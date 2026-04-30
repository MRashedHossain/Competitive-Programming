#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
void solve() {
 
}
signed main() {
    RASHED
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a != c && b != d && abs(a-c) != abs(b-d)){
        cout<<-1<<endl;
    }
    else if(a == c){
        cout<<a+abs(b-d)<<" "<<b<<" "<<c+abs(b-d)<<" "<<d<<endl;
    }
    else if(b == d){
        cout<<a<<" "<<b+abs(a-c)<<" "<<c<<" "<<d+abs(a-c)<<endl;
    }
    else {
        cout<<a<<" "<<d<<" "<<c<<" "<<b<<endl;
    }
    return 0;
}
 