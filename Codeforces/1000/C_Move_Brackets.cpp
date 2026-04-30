#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define ll long long int
///#define inf 99999999999999999
///#define F first
///#define S second
///#define show(x) cout << #x << " : " << x << endl
///#define maxn 200100
 
void solve() {
    int n,ans = 0;
    cin>>n;
    string s;
    cin>>s;
    bool point = true;
    stack<char> ss;
    for(int i=0; i<n; i++) {
        if(s[i] == '(')ss.push(s[i]);
        else {
            if(!ss.empty())ss.pop();
        }
    }
    cout<<ss.size()<<endl;
}
int main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }
    return 0;
}
 