#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
///#define int long long int

bool solve() {
    int n;cin>>n;vector<int> v;
    map<int,int> f;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
        f[x]++;
    }
    sort(v.begin(),v.end());
    if(f[v[0]] == 1)return true;
    for(int i=1;i<n;i++){
        if(v[i]%v[0])return true;
    }
    return false;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<(solve()?"YES":"NO")<<endl;
    return 0;
}


