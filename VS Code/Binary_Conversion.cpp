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
    int n,k,s_one = 0,t_one = 0,s_zero = 0,t_zero = 0;cin>>n>>k;
    string s,t;cin>>s>>t;
    vector<int> one,zero;
    for(auto i:s)if(i == '1')s_one++;
    for(auto i:t)if(i == '1')t_one++;
    if(s_one != t_one)return false;
    s_zero = (n-s_one);
    t_zero = (n-t_one);
    for(int i=0;i<n;i++){
       if(s[i] != t[i]){
            if(t[i] == '0')zero.push_back(i);
            else one.push_back(i);
       }
    }
    if(one.size()>k)return false;
    k-=one.size();
    k%=2;
    if(s_one == k && s_zero == k)return false;
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

