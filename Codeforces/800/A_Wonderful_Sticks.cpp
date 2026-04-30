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
    int l = 0,g = 0;
    for(int i=0; i<n-1; i++) {
        if(s[i] == '<')l++;
    }
    cout<<l+1<<" ";
    g= l+2;
    for(int i=0; i<n-1; i++) {
        if(s[i] == '<') {
            cout<<l<<" ";
            l--;
        } else {
            cout<<g<<" ";
            g++;
        }
    }
    cout<<endl;
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