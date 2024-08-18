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
    for(int i=0;i<n;i++){
        int hhash = 0;
        for(int j=0;j<m;j++){
            cin>>s[i][j];
            if(s[i][j] == '#')hhash++;
        }
        if(pos == -1){
            if(hhash < pre){
                pos = i-1;
                tcnt = pre;
            }
            else pre = hhash;
        }
    }

    if(pos == -1){
        int fnd = (pre+1)/2,ths = 0;
        for(int i=0;i<m;i++){
            if(s[n-1][i] == '#')ths++;
            if(ths == fnd){
            cout<<n<<" "<<i+1<<endl;
            return;
        }
        }
    }
    int fnd = (tcnt+1)/2,ths = 0;
    for(int i=0;i<m;i++){
        if(s[pos][i] == '#')ths++;
        if(ths == fnd){
            cout<<pos+1<<" "<<i+1<<endl;
            return;
        }
    }
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
 
