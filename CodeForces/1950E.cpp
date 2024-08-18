#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int

vector<int> div(int n) {
    set<int> s;
    for(int i=2; i<=sqrt(n)+1; i++) {
        if(n%i == 0) {
            s.insert(i);
            s.insert(n/i);
        }
    }
    vector<int> d = {s.begin(),s.end()};
    sort(d.rbegin(),d.rend());
    return d;
}

bool one(int n,string s) {
    set<char> ss;
    map<char,int> f;
    for(auto i:s) {
        ss.insert(i);
        f[i]++;
    }
    if(ss.size() == 1)return true;
    if(ss.size()>2)return false;
    vector<char> v{ss.begin(),ss.end()};
    if((f[v[0]] > 1 && f[v[1]] > 1))return false;
    return true;
}

int solve() {
    int n,res = INT_MAX;
    string s;
    cin>>n>>s;
    if(one(n,s))return 1;
    vector<int> d = div(n);
    for(auto I:d) {
        map<string,int> f;
        vector<string> v;
        for(int i=0; i<n; i+=I) {
            string q = s.substr(i,I);
            f[q]++;
        }
        for(auto i:f)v.push_back(i.first);
        if(v.size() == 1)res = min(res,I);
        else if(v.size() > 2)continue;
        else {
            if(f[v[0]] > 1 && f[v[1]] > 1)continue;
            int chk = 0;
            for(int i=0; i<v[0].size(); i++) {
                if(v[0][i] != v[1][i])chk++;
            }
            if(chk > 1)continue;
            res = min(res,I);
        }
    }
    if(res == INT_MAX)return n;
    return res;
}
signed main() {
    RASHED
    int TC;
    cin>>TC;
    while(TC--)cout<<solve()<<endl;
    return 0;
}
/**
CASES:

*/
