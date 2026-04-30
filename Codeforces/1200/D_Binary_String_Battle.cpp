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
    string s;cin>>s;
    int o = 0,z = 0;
    for(auto i:s){
        if(i == '1')o++;
        else z++;
    }
    if(o <= k)return true;
    if(n%2){
        int mid = (n+1)/2;
        return (k>=mid);
    }else {
        int mid = (n/2);
        return (k>mid);
    }
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
 
*/
 