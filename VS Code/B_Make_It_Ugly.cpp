#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define int long long int
///#define show(x) cout << #x << " = " << x << endl
///#define maxn 200100

int solve(int tc) {
    int n;cin>>n;
    int a[n+5];set<int> s;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s.insert(a[i]);
    }
    if(s.size() == 1)return -1;
    int res = n,pre = -1;
    for(int i=0;i<n;i++){
        if(a[i] != a[0]){
            res = min(res,i-pre-1);
            pre = i;
        }
    }
    res = min(res,n-pre-1);
    return res;
}
signed main() {
    RASHED
    int TC;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<solve(i)<<endl;
    return 0;
}
/**
CASES:

*/
