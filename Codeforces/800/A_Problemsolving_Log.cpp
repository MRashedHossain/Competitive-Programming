#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long int
 
int solve() {
    int n;
    string s;cin>>n>>s;
    map<char,int> m;
    for(int i=0;i<n;i++){
        m[s[i]]++;
    }
    int ans = 0;
    for(char c = 'A';c<='Z';c++){
       if(m[c] >= c-'A'+1)ans++;
    }
    return ans;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<solve()<<endl;
    return 0;
}
 