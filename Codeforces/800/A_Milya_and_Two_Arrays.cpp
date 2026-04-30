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
    set<int> a,b,res;
    for(int i=1;i<=n;i++){
        int x;cin>>x;a.insert(x);
    }
    for(int i=1;i<=n;i++){
        int x;cin>>x;b.insert(x);
    }
    for(auto i:a){
        for(auto j:b){
            res.insert(i+j);
        }
    }
    return (res.size()>2);
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
 
*/