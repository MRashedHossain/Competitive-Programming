#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
 
void solve() {
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    string s[n+6];
    for (int i=0; i<n; i++)cin>>s[i];
    int ans = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(s[i][j] == s[i][j+1] && s[i][j] == '.') {
                ans+=y;
                j++;
                continue;
            }
            if(s[i][j] != s[i][j+1] && s[i][j] == '.')ans+=x;
        }
    }
    int ans1 = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(s[i][j] == '.')ans1+=x;
        }
    }
    cout<<min(ans,ans1)<<endl;
}
int32_t main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}
 