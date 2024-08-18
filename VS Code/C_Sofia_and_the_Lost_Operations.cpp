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

bool solve(int tc) {
    int n,m;
    cin>>n;
    vector<int> aa,bb;
    map<int,int> f,update;
    stack<int> s;
    multiset<int> ms;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        aa.push_back(x);
    }
    for(int i=0;i<n;i++){
        int x;cin>>x;
        bb.push_back(x);
        f[x]++;
        if(bb[i] != aa[i]){
            update[x]++;
            ms.insert(x);
        }
    }
    cin>>m;
    for(int i=0;i<m;i++){
        int x;cin>>x;
        s.push(x);
    }
    if(f[s.top()] == 0)return false;
    while(!s.empty()){
        int x = s.top();
        s.pop();
        ///if(update[x] > 0)update[x]--;
       auto pos =  ms.find(x);
       if(pos != ms.end())ms.erase(pos);
    }
    return ms.empty();
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
1
4
3 1 7 8
2 2 7 10
5
10 3 2 2 1

1
3
1 2 1
1 3 2
4
1 3 1 2
*/
