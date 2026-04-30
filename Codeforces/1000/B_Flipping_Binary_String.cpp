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
 
void solve(int tc) {
    int n;
    string s;
    cin >> n >> s;
    int one = 0;
    for(char c:s) {
        if(c == '1')one++;
    }
    if(one == 0) {
        cout<<0<<endl;
        return;
    }
    int ze = n - one;
    if(one%2 == 0) {
        cout<<one<<endl;
        for(int i=0; i<n; i++) {
            if(s[i] == '1')cout<<i+1<<" ";
        }
        cout<<endl;
    } else if(ze%2) {
        cout<<ze<<endl;
        for(int i=0; i<n; i++) {
            if(s[i] == '0')cout<<i+1<<" ";
        }
        cout<<endl;
    } else {
        cout<<-1<<endl;
    }
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}