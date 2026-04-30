#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
void solve() {
    string s;cin>>s;
    string p="",q="";
    p+=s[0];
    int n = s.size(),i = 1;
    while(s[i] == '0'){
        p+=(s[i]);
        i++;
    }
    if(i >= n){
        cout<<-1<<endl;
        return;
    }
    for(int j=i;j<n;j++)q+=(s[j]);
        int x = stoi(p);
    int y = stoi(q);
    if(x>=y){
        cout<<-1<<endl;
        return;
    }
    cout<<x<<" "<<y<<endl;
 
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}
 