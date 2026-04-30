#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 200010
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
 
bool solve(int tc) {
    int n;
    string s;
    cin>>n>>s;
    if(n%2) {
        if(s.front() == 'b')return false;
        for(int i=1; i<n-1; i+=2) {
            if(s[i] != '?' && s[i+1] != '?' && s[i] == s[i+1])return false;
        }
    } else {
        for(int i=0; i<n-1; i+=2) {
            if(s[i] != '?' && s[i+1] != '?' && s[i] == s[i+1])return false;
        }
    }
    return true;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"YES":"NO")<<endl;
    return 0;
}
/**
CASES:
 
*/
 
 