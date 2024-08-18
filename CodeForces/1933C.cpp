#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define show(x) cout << #x << " = " << x << endl
#define int long long int
vector<int> divi(int n) {
    set<int> s;
    for(int i=1; i<=(sqrt(n)+2); i++) {
        if(n%i == 0) {
            s.insert(i);
            s.insert(n/i);
        }
    }
    vector<int> v{s.begin(),s.end()};
    return v;
}
int power(int x,int y) {
    int pw = 1;
    for(int i=1; i<=y; i++)pw *= x;
    return pw;
}
void solve() {
    int a,b,l,ans = 0;
    cin>>a>>b>>l;
    vector<int> div = divi(l);
    set<int> s;
//    for(auto i:div)cout<<i<<" ";
//    cout<<endl;
    for(auto i:div) {
        for(int j = 0; j<32; j++) {
            int A = power(a,j);
            if(i*A > l)break;
            for(int k = 0; k<32; k++) {
                int B = power(b,k);
                if(i*A*B > l)break;
                if(i*A*B == l)s.insert(i);
            }
        }
    }
    cout<<s.size()<<endl;
}
signed main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}


