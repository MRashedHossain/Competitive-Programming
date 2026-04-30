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
    int n;
    cin>>n;
    vector<int> v(n);
    map<int,vector<int>> f;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        f[v[i]].push_back(i);
    }
//    for(int i=0; i<n; i++) {
//        cout<<v[i]<<" : ";
//        for(auto j:f[v[i]])cout<<j<<" ";
//        cout<<endl;
//    }
    int q;
    cin>>q;
    while(q--) {
        string s;
        cin>>s;
        if(s.size() != n) {
            cout<<"NO"<<endl;
            continue;
        }
        map<char,vector<int>> ff;
        for(int i=0; i<n; i++) {
            ff[s[i]].push_back(i);
        }
//        for(int i=0; i<n; i++) {
//            cout<<s[i]<<" : ";
//            for(auto j:ff[s[i]])cout<<j<<" ";
//            cout<<endl;
//        }
        map<char,int> vis1;
        map<int,int> vis2;
        bool res = true;
        for(int i=0; i<n; i++) {
            if(vis2[v[i]])continue;
            for(auto ii:f[v[i]]) {
                if(s[ii] != s[i]) {
                    res = false;
                    break;
                }
            }
            vis2[v[i]]++;
        }
        for(int i=0; i<n; i++) {
            if(vis1[s[i]])continue;
            for(auto ii:ff[s[i]]) {
                if(v[ii] != v[i]) {
                    res = false;
                    break;
                }
            }
            vis1[s[i]]++;
        }
        cout<<(res?"YES":"NO")<<endl;
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
CASES:
 
*/
 