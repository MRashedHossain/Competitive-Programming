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
 
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
string cc = "LIT";
void solve(int tc) {
    int n;
    string s;
    cin>>n>>s;
    map<char,int> f;
    for(auto i:s)f[i]++;
    if(f.size() == 1) {
        cout<<"-1"<<endl;
        return;
    }
    auto fun = [&] (int i) {
        for(auto ii:cc) {
            if(s[i] != ii && s[i+1] != ii)return ii;
        }
        return '#';
    };
    vector<int> res;
    while(max3(f['L'],f['I'],f['T']) != min3(f['L'],f['I'],f['T'])) {
        int l = min3(f['L'],f['I'],f['T']),r = max3(f['L'],f['I'],f['T']);
        bool did = true;
        for(int i=0; i<s.size()-1; i++) {
            char c = fun(i);
            if(s[i] != s[i+1] && f[c] == l) {
                f[c]++;
                did = false;
                s.insert(s.begin()+i+1,c);
                res.push_back(i);
                break;
            }
        }
        if(did) {
            for(int i=0; i<s.size()-1; i++) {
                char c = fun(i);
                if(s[i] != s[i+1] && f[c] == r) {
                    f[c]++;
                    s.insert(s.begin()+i+1,c);
                    res.push_back(i);
                    break;
                }
            }
        }
    }
    cout<<res.size()<<endl;
    for(int i:res)cout<<i+1<<endl;
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