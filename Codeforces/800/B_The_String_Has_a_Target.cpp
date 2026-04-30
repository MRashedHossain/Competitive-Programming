#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define F first
#define S second
 
void solve(int tc) {
    int n;
    string s;
    cin>>n>>s;
    map<char,vector<int>> f;
    for(int i=0; i<n; i++)f[s[i]].push_back(i);
    for(char i='a'; i<='z'; i++) {
        if(f[i].empty())continue;
        int now = f[i].back();
        for(char j=i+1; j<='z'; j++) {
            if(f[j].empty())continue;
            if(f[j].front() < now && s.front() >= i) {
                cout<<i;
                for(int k=0; k<n; k++) {
                    if(k == now)continue;
                    cout<<s[k];
                }
                cout<<endl;
                return;
            }
        }
    }
    cout<<s<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/