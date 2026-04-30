#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
void solve() {
    string s;
    cin>>s;
    int n = s.size();
    for(int i=0; i<n; i++) {
        if((s[i]-'0')%8 == 0) {
            cout<<"YES"<<endl;
            cout<<s[i]<<endl;
            return;
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(((s[i]-'0')*10+s[j]-'0')%8 == 0) {
                cout<<"YES"<<endl;
                cout<<s[i]<<s[j]<<endl;
                return;
            }
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            for(int k=j+1; k<n; k++) {
                if(((s[i]-'0')*100+(s[j]-'0')*10+(s[k]-'0'))%8 == 0) {
                    cout<<"YES"<<endl;
                    cout<<s[i]<<s[j]<<s[k]<<endl;
                    return;
                }
            }
        }
    }
    cout<<"NO"<<endl;
}
int32_t main() {
    RASHED
    solve();
    return 0;
}