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

bool solve(int tc) {
    int n;
    cin>>n;
    int a[n+8];
    vector<int> g1,g2,g3;
    for(int i=1; i<=n; i++)cin>>a[i];
    int pre = 0,pos = -1;
    for(int i=1; i<n; i++) {
        int curr = __gcd(a[i],a[i+1]);
        if(curr < pre) {
            pos = i;
            break;
        }
        pre = curr;
    }
//    show(pos);
    if(pos == -1)return true;
    for(int i=1; i<=n; i++) {
        if(i != pos-1)g1.push_back(a[i]);
    }
    for(int i=1; i<=n; i++) {
        if(i != pos)g2.push_back(a[i]);
    }
    for(int i=1; i<=n; i++) {
        if(i != pos+1)g3.push_back(a[i]);
    }
    pre = 0;
    bool sor1 = true,sor2 = true,sor3 = true;
    for(int i=0; i<g1.size()-1; i++) {
        int curr = __gcd(g1[i],g1[i+1]);
        if(curr < pre) {
            sor1 = false;
            break;
        }
        pre = curr;
    }
    pre = 0;
    for(int i=0; i<g2.size()-1; i++) {
        int curr = __gcd(g2[i],g2[i+1]);
        if(curr < pre) {
            sor2 = false;
            break;
        }
        pre = curr;
    }
    pre = 0;
    for(int i=0; i<g3.size()-1; i++) {
        int curr = __gcd(g3[i],g3[i+1]);
        if(curr < pre) {
            sor3 = false;
            break;
        }
        pre = curr;
    }
//    for(auto i:g1)cout<<i<<" ";
//    cout<<endl;
//    for(auto i:g2)cout<<i<<" ";
//    cout<<endl;
//    for(auto i:g3)cout<<i<<" ";
//    cout<<endl;
    return  (sor1 || sor2 || sor3);
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
