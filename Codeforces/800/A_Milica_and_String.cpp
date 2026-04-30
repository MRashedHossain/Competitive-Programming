#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
void solve() {
    int n,k,cnt = 0;
    string s;
    cin>>n>>k>>s;
    for(int i=0; i<n; i++) {
        if(s[i] == 'B')cnt++;
    }
    ///cout<<cnt<<endl;
    if(cnt == k) {
        cout<<0<<endl;
        return;
    }
    if(cnt>k) {
        for(int i=0; i<n; i++) {
            if(s[i] == 'B') cnt--;
            if(cnt == k) {
                cout<<1<<endl;
                cout<<i+1<<" "<<'A'<<endl;
                return;
            }
        }
        if(cnt == k) {
            cout<<1<<endl;
            cout<<n<<" "<<'A'<<endl;
            return;
        }
    } else {
        for(int i=0; i<n; i++) {
            if(s[i] == 'A') cnt++;
            if(cnt == k) {
                cout<<1<<endl;
                cout<<i+1<<" "<<'B'<<endl;
                return;
            }
        }
        if(cnt == k) {
            cout<<1<<endl;
            cout<<n<<" "<<'B'<<endl;
            return;
        }
    }
}
int32_t main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}
/**
1
5 0
BBBBB
*/