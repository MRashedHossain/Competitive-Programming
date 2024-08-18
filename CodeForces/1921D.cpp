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

int solve(int tc) {
    int n,m;
    cin>>n>>m;
    vector<int>a,b;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a.push_back(x);
    }
    for(int j=0;j<m;j++){
        int x;cin>>x;
        b.push_back(x);
    }
    sort(a.begin(),a.end());
    sort(b.rbegin(),b.rend());
    int sum = 0;
    for(int i=0;i<n;i++)sum+=(abs(a[i]-b[i]));
    int res = sum,j = m-1;
    for(int i=n-1;i>=0 && j>=0;i--,j--){
        sum-=(abs(a[i]-b[i]));
        sum+=abs(a[i]-b[j]);
        res = max(res,sum);
    }
    return res;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)cout<<solve(i)<<endl;
    return 0;
}
/**
CASES:

*/
