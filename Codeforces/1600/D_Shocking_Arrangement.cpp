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
    vector<int> v,res,pp,nn;
    set<int> s;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
        s.insert(x);
        if(x>0)pp.push_back(x);
        else if(x<0)nn.push_back(x);
        else res.push_back(x);
    }
    if(s.size() == 1 && *(s.begin()) == 0){
        cout<<"No"<<endl;
        return;
    }
    cout<<"Yes"<<endl;
    int ps = 0;
    for(int i=0;i<n;i++){
        if(v[i] == 0)continue;
        if(ps<=0){
            res.push_back(pp.back());
            pp.pop_back();
        }else {
            res.push_back(nn.back());
            nn.pop_back();
        }
        ps += res.back();
    }
    for(auto i:res)cout<<i<<" ";
    cout<<endl;
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