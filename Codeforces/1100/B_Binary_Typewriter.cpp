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
    string s,news = "";
    cin>>n>>s;
    int c01 = 0,c10 = 0,res = 0,pre = 0;
    char lst = '0';
    for(int i=0; i<n; i++) {
        if(lst != s[i]) {
            pre++;
            if(lst == '0')c01++;
            else c10++;
            lst = s[i];
        }
    }
    int now = 0;
    if(c01 >= 2 || c10 >= 2)now = 2;
    else if(pre >= 2)now = 1;
    else now = 0;
    cout<<n + pre - now<<endl;
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