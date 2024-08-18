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
    int n,k,res = 0;cin>>n>>k;
    priority_queue<int> q;
    q.push(n);
    while(!q.empty() && q.top() != 1){
        int curr = q.top(),mve = k;
        q.pop();
        if(curr<=k){
            if(curr > 1)res++;
            continue;
        }
        vector<int> tmp;
        while(curr>k && mve > 1){
            if(tmp.empty())res++;
            tmp.push_back(k);
            mve--;
            curr-=k;
        }
        tmp.push_back(curr);
        for(auto i:tmp){
            if(i>k)q.push(i);
            else if(i>1)res++;
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

