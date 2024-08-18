#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
///#define int long long int

bool solve() {
    int n;
    string s,t;
    cin>>s>>t>>n;
    int S = s.size(),T = t.size();
    deque<int> dq[T+4],res;
    for(int i=T-1; i>=0; i--) {
        for(int j=0; j<T-i-1; j++)dq[T-i-1].push_front(0);
        for(int j = S-1; j>=0; j--) dq[T-i-1].push_front(((t[i]-'0')*(s[j]-'0'))%10);
        for(int j=S+T-i-1; j<S+T-1; j++)dq[T-i-1].push_front(0);
    }
    int X = 0;
    for(int i=S+T-2; i>=0; i--) {
        int pos = X;
        for(int j=0; j<T; j++)pos+=(dq[j][i]);
        if(pos>9) {
            res.push_front(pos%10);
            X = pos/10;
        } else {
            res.push_front(pos);
            X = 0;
        }
    }
    if(X)res.push_front(X);
//    for(auto i:res)cout<<i<<" ";
//    cout<<endl;
    return (res[n-1]%2);
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<(solve()?"ODD":"EVEN")<<endl;
    return 0;
}
/**
1
4242 345 3
*/

