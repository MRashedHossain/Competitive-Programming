#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define int long long int
#define show(x) cout << #x << " = " << x << endl
#define maxn 200100

#define F first
#define S second

int solve(int tc) {
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> ma(1000010,0),mb(1000010,0);
    int a[n+7],b[m+8];
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<m; i++) {
        cin>>b[i];
        mb[b[i]]++;
    }
    for(int i=0; i<m; i++)ma[a[i]]++;
    int match = 0,res = 0;
    for(int i=0;i<m;i++)match += min(ma[b[i]],mb[b[i]]);
    if(match >= k)res++;
    for(int i=m,j=0; i<n; i++,j++) {
        ma[a[j]]--;
        if(ma[a[j]] < mb[a[j]])match--;
        ma[a[i]]++;
        if(ma[a[i]] <= mb[a[i]])match++;
        if(match >= k)res++;
    }
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
