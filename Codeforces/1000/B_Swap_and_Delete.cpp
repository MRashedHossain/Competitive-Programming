#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
int solve() {
    string s;
    cin>>s;
    string t = s;
    int ze = 0,on = 0,n = s.size();
    for(int i=0; i<n; i++) {
        if(s[i] == '1')on++;
        else ze++;
    }
    if(!ze || !on)return n;
    if(ze == on)return 0;
    int ans = 0;
    ///cout<<on<<" "<<ze<<endl;
    for(int i=0; i<n; i++) {
        if(s[i] == '1'){
            if(ze)ze--;
            else return n-i;
        }
        else {
            if(on)on--;
            else return n-i;
        }
    }
    ///cout<<on<<" "<<ze<<endl;
    return ans;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<solve()<<endl;
    return 0;
}
 