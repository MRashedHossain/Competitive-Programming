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
    cin>>n;
    int a[n+8];
    for(int i=1; i<=n; i++)cin>>a[i];
    priority_queue<int,vector<int>,greater<int>> q;
    int pre = a[1];
    for(int i=2; i<=n; i++) {
        if(a[i] > pre)pre = a[i];
        else q.push(pre-a[i]);
    }
    int res = 0,mve = 0;
//    while(!q.empty()){
//        cout<<q.top()<<" ";
//        q.pop();
//    }
//    cout<<endl;
    while(!q.empty()) {
        int tmp = q.size()+1;
        tmp *= (q.top()-mve);
        res+=max(tmp,0LL);
        mve = q.top();
        q.pop();
    }
    cout<<res<<endl;
}
signed main() {
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:

*/
