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
    int n,m;cin>>n>>m;
    char s[n+8][m+8];
    int pre = 0,pos = -1,tcnt = 0;
    vector<int> hhash;
    for(int i=0;i<n;i++){
        int hh = 0;
        for(int j=0;j<m;j++){
            cin>>s[i][j];
            if(s[i][j] == '#')hh++;
        }
        hhash.push_back(hh);
    }
    for(auto i:hhash)cout<<i<<" ";
    cout<<endl;
    for(int i=0;i<n;i++){
        if(hhash[i] < pre && pos == -1){
            pos = i-1;
        }
        else pre = hhash[i];
    }
    if(pos == -1)pos = n-1;
    show(pos);
    int src = (pre+1)/2,curr = 0,x = 0,y = 0;
    for(int i=0;i<m;i++){
        if(s[pos][i] == '#')curr++;
        if(curr == src){
            x = pos+1;
            y = i+1;
            break;
        }
    }
    cout<<x<<" "<<y<<endl;
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

