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
    int a = 0,b = 0,res = 0;
    for(int i=0; i<n; i++) {
        if(s[i] == 'a')a++;
        else b++;
        if(i%2) {
            if(a != b) {
                res++;
                if(s[i] == 'a') {
                    s[i] = 'b';
                    a--;
                    b++;
                } else {
                    s[i] = 'a';
                   a++;
                   b--;
                }
            }
        }
    }
    cout<<res<<endl;
    cout<<s<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    ///cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/