#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
 
#define F first
#define S second
 
void solve(int tc) {
    string s;
    cin>>s;
    int res = 0;
    if(s.front() == 'u') {
        s.front() = 's';
        res++;
    }
    if(s.back() == 'u') {
        s.back() = 's';
        res++;
    }
    vector<int> u;
    for(int i=0; i<sz(s); i++) {
        if(s[i] == 'u')u.push_back(i);
    }
    for(int i:u) {
        if(s[i] == 's')continue;
        int l = -inf,r = inf;
        if(s[i-1] == 's')l = i-1;
        if(s[i+1] == 's')r = i+1;
        // show(i);
        // show(l);
        // show(r);
        if(l != i-1) {
            res++;
            s[i-1] = 's';
        }
        if(r != i+1) {
            s[i+1] = 's';
            res++;
        }
    }
    cout<<res<<endl;
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
 
 