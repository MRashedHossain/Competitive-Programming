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
    int n,k;cin>>n>>k;
    map<int,int> s,t;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        s[x%k]++;
    }
    for(int i=0;i<n;i++){
        int x;cin>>x;
        t[x%k]++;
    }
    for(auto i:s){
        int u = i.F;
        if(u == 0 || (k%2 == 0 && u == (k/2))){
            if(s[u] != t[u])return false;
        }else {
            if(s[u] + s[k-u] != t[u] + t[k-u])return false;
        }
    }
        for(auto i:t){
        int u = i.F;
        if(u == 0 || (k%2 == 0 && u == (k/2))){
            if(s[u] != t[u])return false;
        }else {
            if(s[u] + s[k-u] != t[u] + t[k-u])return false;
        }
    }
    return true;
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