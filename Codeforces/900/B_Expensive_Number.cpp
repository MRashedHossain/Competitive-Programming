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
    string s;cin>>s;
    int n = s.size(),pos = -1;
    for(int i=n-1;i>=0;i--){
        if(s[i] != '0'){
            pos = i;
            break;
        }
    }
    if(pos == -1){
        cout<<n-1<<endl;
        return;
    }
    int curr = 0;
    for(int i=0;i<pos;i++){
        if(s[i] == '0')curr++;
    }
    cout<<(n-curr-1)<<endl;
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