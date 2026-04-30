#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 1000005
 
#define F first
#define S second
vector<int> v[1000005];
void seive(int n){
    for(int i=2;i<n;i++){
        for(int j=i;j<n;j+=i)v[j].push_back(i);
    }
}
bool solve(int tc) {
    int a,b;cin>>a>>b;
    for(auto i:v[a])if(i<=b)return false;
    return true;
}
signed main() {
    RASHED
    seive(maxn);
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<(solve(i)?"YES":"NO")<<endl;
    return 0;
}
/**
CASES:
 
*/