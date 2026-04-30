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
    vector<int> a(n+4),b(n+4);
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++)cin>>b[i];
    vector<pair<int,int>> res;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-1; j++) {
            if(a[j] > a[j+1]) { //6 5 4
                swap(a[j],a[j+1]);
                res.push_back({1,j+1});
            }
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-1; j++) {
            if(b[j] > b[j+1]) {
                swap(b[j],b[j+1]);
                res.push_back({2,j+1});
            }
        }
    }
    for(int i=0; i<n; i++) {
        if(a[i] > b[i]) {
            swap(a[i],b[i]);
            res.push_back({3,i+1});
        }
    }
    cout<<res.size()<<endl;
    for(auto i:res)cout<<i.F<<" "<<i.S<<endl;
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
4
3 4 1 2
8 6 7 5
 
1
3
6 5 4
3 2 1
*/