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
bool check(string &s){
    int n = s.size();
    for(int i=0,j=n-1;i<=(n/2);i++,j--){
        if(s[i] != s[j])return false;
    }
    return true;
}
bool solve(int tc) {
    int n;cin>>n;
    vector<string> l;
    for(int i=1;i<=(2*n)-2;i++){
        string tmp;cin>>tmp;
        if(tmp.size() == n-1)l.push_back(tmp);
    }
    string ss = l[0],tt = l[1];
    bool fnd = true;
    for(int i=1;i<n-1;i++){
        if(ss[i] != tt[i-1]){
            fnd = false;
            break;
        }
    }
    if(fnd == false){
        tt += ss.back();
        return check(tt);
    }
    else {
        ss += tt.back();
        return  check(ss);
    }
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