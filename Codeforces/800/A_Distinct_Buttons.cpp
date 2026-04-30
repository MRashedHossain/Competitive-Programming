#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long int
#define F first
#define S second
 
bool solve() {
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    map<char,int> mp;
    map<int,int> cnt;
    for(int i=0; i<n; i++) {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    int l = 0,r = 0;
    ///sort(v.begin(),v.end());
    for(int i=0; i<n; i++) {
        if(v[i].F > 0) {
            mp['L']++;
            cnt[mp['L']]++;
        } else if(v[i].F < 0) {
            mp['R']++;
            cnt[mp['R']]++;
        }
        if(v[i].S > 0) {
            mp['D']++;
            cnt[mp['D']]++;
        } else if(v[i].S < 0) {
            mp['U']++;
            cnt[mp['U']]++;
        }
        if(cnt[1] == 4)return false;
    }
    return true;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)cout<<(solve()?"YES":"NO")<<endl;
    return 0;
}
 