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
    int n;cin>>n;
    vector<int> v;
    map<int,vector<int>> pos;
    for(int i=0;i<n;i++){
        int x;cin>>x;v.push_back(x);
        pos[x].push_back(i);
    }
    int m;cin>>m;
    while(m--){
        string s;cin>>s;\
        if(s.size() != n){
            cout<<"NO"<<endl;
            continue;
        }
        map<char,vector<int,int>> f;
        for(int i=0;i<s.size();i++){
            f[s[i]].push_back(i);
        }
        bool found = true;
        for(int i=0;i<n;i++){
            if(pos[v[i]].size() == f[s[i]].size()){
                found = false;
                break;
            }
        }
    }
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**

*/
