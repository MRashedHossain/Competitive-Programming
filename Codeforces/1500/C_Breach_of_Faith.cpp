#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define all(x) x.begin(),x.end()
#define F first
#define S second
 
void solve(int tc) {
    int n;
    cin>>n;
    n*=2;
    vector<int> v(n),res(n+6);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(all(v));
    int ext = 0;
    for(int i=0,j=4;i<n-2;i++,j++){
        if(i%2)ext += (v[i] - v[i-1]);
        res[j] = v[i];
    }
    res[1] = v[n-1];
    res[3] = v[n-2];
    res[2] = res[1] + res[3] + ext;
    for(int i=1;i<=n+1;i++)cout<<res[i]<<" ";
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
 
*/