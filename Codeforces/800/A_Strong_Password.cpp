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
    string s;
    cin>>s;
    int n = s.size();
    for(int i=1; i<n; i++) {
        if(s[i] == s[i-1]) {
            for(char c = 'a'; c<='z'; c++) {
                if(c != s[i]) {
                    for(int j=0; j<i; j++)cout<<s[j];
                    cout<<c;
                    for(int j=i; j<n; j++)cout<<s[j];
                    cout<<endl;
                    return;
                }
            }
        }
    }
    for(char c = 'a'; c<='z'; c++) {
        if(s.back() != c) {
            cout<<s<<c<<endl;
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