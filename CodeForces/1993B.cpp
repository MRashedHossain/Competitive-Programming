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
    int n,val = -1,res = 0;
    cin>>n;
    vector<int> even;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        if(x%2)val = max(val,x);
        else even.push_back(x);
    }
    if(val == -1 || even.empty()) {
        cout<<0<<endl;
        return;
    }
    sort(even.begin(),even.end());
//    show(val);
//    for(auto i:even)cout<<i<<" ";
//    cout<<endl;
    bool found = false;
    for(auto i:even) {
        if(i>val){
            found = true;
            break;
        }
        val+=i;
    }
    cout<<(found?even.size()+1:even.size())<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
4 3 6 1 2 1
1 1 3 5 9 15
*/

