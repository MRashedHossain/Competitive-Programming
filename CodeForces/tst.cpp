#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
///#define int long long int

signed main() {
    RASHED
    int n;cin>>n;
    int a[n+6];
    vector<int> f(105,0);
    stack<int> res;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=n;i>=1;i--){
        f[a[i]] = i;
        int pos = INT_MAX;
        for(int j = a[i]+1;j<=100;j++){
            if(f[j] && f[j] > i)pos = min(pos,f[j]-i);
        }
        if(pos != INT_MAX)res.push(pos);
        else res.push(0);
    }
    while(!res.empty()){
        cout<<res.top()<<" ";
        res.pop();
    }
    return 0;
}

