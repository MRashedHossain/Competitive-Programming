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
    priority_queue<int> q;
    int res = 1,cnt = 0;
    for(int i=1;i<=3;i++){
        int x;cin>>x;
        q.push(-x);
    }
    while(cnt < 5){
        int tmp = q.top();
        q.pop();
        tmp--;
        cnt++;
        q.push(tmp);
    }
    while(!q.empty()){
        res*=(-q.top());
        q.pop();
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

