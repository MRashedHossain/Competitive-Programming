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
    int n;cin>>n;
    set<int> s;
    for(int i=1;i<=n;i++){
        int x;cin>>x;s.insert(x);
    }
    int N = s.size();
    if(N == 1 || *(s.begin()) != 1)return true;
    s.erase(s.begin());
    int res = 0,pre = 1;
    for(auto i:s){
        if(i != pre+1)return res;
        pre = i;
        res ^= 1;
    }
     res ^= 1;
    return res;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"Alice":"Bob")<<endl;
    return 0;
}
/**
CASES:
8
5 7 2 9 6 3 3 2
1 2 3 4 7 9 100
 
2 2 3 3 5 6 7 9
1 1 3 4 5 7
2 3 4 6
1 2 4
1 3
2
*/