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
    int x,y,res = 1,pos = 0;
    cin>>x>>y;
    vector<int> xx,yy;
    for(int i=0;i<32;i++) {
        xx.push_back(x%2);
        x/=2;
    }
    for(int i=0;i<32;i++) {
        yy.push_back(y%2);
        y/=2;
    }
    reverse(xx.begin(),xx.end());
    reverse(yy.begin(),yy.end());
    //    for(auto i:xx)cout<<i;
//    cout<<endl;
//    for(auto i:yy)cout<<i;
//    cout<<endl;
    if(xx.empty() || yy.empty())cout<<res<<endl;
    else {
        for(int i=xx.size()-1,j = yy.size()-1; i>=0 && j>=0; i--,j--) {
            if(xx[i] == yy[j])pos++;
            else break;
        }
//        show(res);
        for(int i=0; i<pos; i++)res*=2;
//        show(pos);
        cout<<res<<endl;
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

